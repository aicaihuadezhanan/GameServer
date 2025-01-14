#include "Agent.h"
#include "GameService.h"
#include "./protoc/MsgID.pb.h"

Agent::Agent()
{
	RegisterMessageHanler();
}

Agent::~Agent()
{
}

void Agent::RegisterMessageHanler()
{
	m_NetMessagePump.RegisterMessageHandle(MSG_HEART_BEAT_REQ, &Agent::OnMsgClientHeartReq, this);
}

bool Agent::SendData(int MsgID, const google::protobuf::Message & pdata)
{
	CGameService::GetInstancePtr()->SendData(fd, MsgID, pdata);
	return true;
}

bool Agent::OnMsgClientHeartReq(NetPacket * pack)
{
	return false;
}


