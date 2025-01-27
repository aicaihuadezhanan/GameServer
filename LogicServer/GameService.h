#ifndef __GAME_SERVICE__
#define __GAME_SERVICE__
#include "./ServerEngine/EasyTcpServer.hpp"
#include "google/protobuf/message.h"
#include "./ServerEngine/DBInterFace/CppMysql.h"
#include "Agent.h"

class CGameService : public EasyTcpServer
{
private:
	CGameService();
	virtual ~CGameService();

public:
	static CGameService* GetInstancePtr();

	inline int GetDBConnID() { return m_dwDBConnID; }

	//服务初始化
	bool Init();

	//定时操作
	virtual bool OnSecondTimer();

	//Update
	virtual void OnUpdate();

	//给其他服发送心跳包
	bool HeartBeat(unsigned int msec);

	//测试
	bool TestSql(unsigned int msec);

	//连接数据库操作服
	virtual bool ConnectToDBServer();

	//客户端加入事件
	virtual void OnNetJoin(CELLClient* pClient);

	//客户端离开事件
	virtual void OnNetLeave(CELLClient* pClient);

	//处理网络消息
	virtual void OnNetMsg(CELLServer* pServer, CELLClient* pClient, netmsg_DataHeader* package);

	//推送网络消息
	bool SendData(int fd, int MsgID, const google::protobuf::Message& pdata);

	//推送事件
	bool NotifyEvent(Agent* agent, int EventID, const google::protobuf::Message & pdata);

private:
	int m_dwDBConnID;

};

#endif