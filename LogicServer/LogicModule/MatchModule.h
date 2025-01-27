#ifndef __MATCH_MODULE_H__
#define __MATCH_MODULE_H__
#include "BaseModule.h"

class CMatchModule : public CBaseModule
{
public:
	CMatchModule(CPlayerObject* pOwner);

	virtual ~CMatchModule();

public:
	virtual void RegisterMessageHanler();
	virtual void RegisterEventHanler();
	virtual bool ReadFromDBLoginData();
	virtual bool SaveChangeData();

public:
	//*******************消息处理定义**************************
	bool OnMsgMatchReq(NetPacket* pack);	     //匹配请求
	bool OnMsgMatchAck(NetPacket* pack);         //匹配返还的结果
	bool OnMsgCancelMatchReq(NetPacket* pack);   //取消匹配请求
	bool OnMsgCancelMatchAck(NetPacket* pack);   //取消匹配返还的结果
	//*********************************************************

	//*******************事件处理定义**************************
	bool LogoutCallback(const google::protobuf::Message * pdata);
	//*********************************************************
};

#endif //__STORE_MODULE_H__