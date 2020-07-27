#ifndef _LOGIC_MSG_HANDLER_H_
#define _LOGIC_MSG_HANDLER_H_
#include "stdafx.h"
//杂项消息处理

class LogicMsgHandler
{
private:
	LogicMsgHandler(void);
	~LogicMsgHandler(void);

public:
	static LogicMsgHandler* GetInstancePtr();

public:
	bool Init();

	void RegisterMessageHanler();

public:
	//*******************消息处理定义**************************
	bool OnMsgLoginSvrHeartAck(NetPacket* pack);		//登录服的心跳确认
	bool OnMsgGateSvrHeartAck(NetPacket* pack);			//网关服的心跳确认

	bool OnMsgLoadPlayerListReq(NetPacket* pack);		//加载角色列表
	bool OnMsgCreatePlayerReq(NetPacket* pack);			//创建角色
	bool OnMsgSelectPlayerEnterReq(NetPacket* pack);	//选择角色进入游戏

	bool OnMsgSelectEnterLogicSvrReq(NetPacket* pack);	//选择进入的逻辑服（记录即将连接accountid用于验证）
	//*********************************************************
};

#endif