// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MsgID.proto

#include "MsgID.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_MsgID_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_MsgID_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_MsgID_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_MsgID_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_MsgID_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013MsgID.proto*\275\023\n\tMessageID\022\r\n\tMSG_BEGIN"
  "\020\000\022\034\n\026MSG_NORMAL_MSGID_BEGIN\020\240\215\006\022\033\n\025MSG_"
  "CHECK_VERSION_REQ\020\241\215\006\022\033\n\025MSG_CHECK_VERSI"
  "ON_ACK\020\242\215\006\022\031\n\023MSG_ACCOUNT_REG_REQ\020\243\215\006\022\031\n"
  "\023MSG_ACCOUNT_REG_ACK\020\244\215\006\022\033\n\025MSG_ACCOUNT_"
  "LOGIN_REQ\020\245\215\006\022\033\n\025MSG_ACCOUNT_LOGIN_ACK\020\246"
  "\215\006\022\030\n\022MSG_DB_EXE_SQL_REQ\020\247\215\006\022\030\n\022MSG_DB_E"
  "XE_SQL_ACK\020\250\215\006\022\031\n\023MSG_SERVER_LIST_REQ\020\251\215"
  "\006\022\031\n\023MSG_SERVER_LIST_ACK\020\252\215\006\022\033\n\025MSG_SELE"
  "CT_SERVER_REQ\020\253\215\006\022\033\n\025MSG_SELECT_SERVER_A"
  "CK\020\254\215\006\022\037\n\031MSG_LOGIC_REGTO_LOGIN_REQ\020\255\215\006\022"
  "\037\n\031MSG_LOGIC_REGTO_LOGIN_ACK\020\256\215\006\022\032\n\024MSG_"
  "LOGIC_UPDATE_REQ\020\257\215\006\022\032\n\024MSG_LOGIC_UPDATE"
  "_ACK\020\260\215\006\022\036\n\030MSG_GAME_REGTO_LOGIC_REQ\020\261\215\006"
  "\022\036\n\030MSG_GAME_REGTO_LOGIC_ACK\020\262\215\006\022 \n\032MSG_"
  "LOGIC_REGTO_CENTER_REQ\020\263\215\006\022 \n\032MSG_LOGIC_"
  "REGTO_CENTER_ACK\020\264\215\006\022\026\n\020MSG_LOG_DATA_NTF"
  "\020\265\215\006\022\034\n\026MSG_PHP_GM_COMMAND_REQ\020\266\215\006\022\034\n\026MS"
  "G_PHP_GM_COMMAND_ACK\020\267\215\006\022\036\n\030MSG_WATCH_HE"
  "ART_BEAT_REQ\020\270\215\006\022\036\n\030MSG_WATCH_HEART_BEAT"
  "_ACK\020\271\215\006\022\034\n\026MSG_REMOVE_CONNECT_NTY\020\272\215\006\022\030"
  "\n\022MSG_DISCONNECT_NTY\020\300\215\006\022\036\n\030MSG_ROLE_DAT"
  "A_CHANGE_NTY\020\301\215\006\022\035\n\027MSG_SET_LAST_SERVER_"
  "NTY\020\302\215\006\022\035\n\027MSG_GM_SHUTDOWN_SVR_REQ\020\303\215\006\022\035"
  "\n\027MSG_GM_SHUTDOWN_SVR_ACK\020\304\215\006\022\031\n\023MSG_UDP"
  "_CONNECT_REQ\020\305\215\006\022\031\n\023MSG_UDP_CONNECT_ACK\020"
  "\306\215\006\022\032\n\024MSG_SEAL_ACCOUNT_REQ\020\307\215\006\022\032\n\024MSG_S"
  "EAL_ACCOUNT_ACK\020\310\215\006\022\034\n\026MSG_DB_WRITE_ERRO"
  "R_NTY\020\311\215\006\022\032\n\024MSG_NORMAL_MSGID_END\020\277\232\014\022\036\n"
  "\030MSG_LOGICSVR_MSGID_BEGIN\020\300\232\014\022\030\n\022MSG_BAG"
  "_UNLOCK_REQ\020\301\232\014\022\030\n\022MSG_BAG_UNLOCK_ACK\020\302\232"
  "\014\022\027\n\021MSG_STORE_BUY_REQ\020\312\232\014\022\027\n\021MSG_STORE_"
  "BUY_ACK\020\313\232\014\022\036\n\030MSG_SCENESVR_MSGID_BEGIN\020"
  "\340\247\022\022\032\n\024MSG_CREATE_SCENE_REQ\020\341\247\022\022\032\n\024MSG_C"
  "REATE_SCENE_ACK\020\342\247\022\022\032\n\024MSG_DELETE_SCENE_"
  "REQ\020\343\247\022\022\032\n\024MSG_DELETE_SCENE_ACK\020\344\247\022\022\033\n\025M"
  "SG_SCENE_DESTROY_REQ\020\345\247\022\022\033\n\025MSG_SCENE_DE"
  "STROY_ACK\020\346\247\022\022\033\n\025MSG_TRANSFER_DATA_REQ\020\347"
  "\247\022\022\033\n\025MSG_TRANSFER_DATA_ACK\020\350\247\022\022\037\n\031MSG_N"
  "OTIFY_ROLE_ENTER_REQ\020\351\247\022\022\037\n\031MSG_NOTIFY_R"
  "OLE_ENTER_ACK\020\352\247\022\022\031\n\023MSG_ENTER_SCENE_REQ"
  "\020\353\247\022\022\031\n\023MSG_ENTER_SCENE_ACK\020\354\247\022\022\031\n\023MSG_L"
  "EAVE_SCENE_REQ\020\355\247\022\022\031\n\023MSG_LEAVE_SCENE_AC"
  "K\020\356\247\022\022\031\n\023MSG_ABORT_SCENE_REQ\020\357\247\022\022\031\n\023MSG_"
  "ABORT_SCENE_ACK\020\360\247\022\022\030\n\022MSG_SKILL_CAST_RE"
  "Q\020\361\247\022\022\030\n\022MSG_SKILL_CAST_ACK\020\362\247\022\022\030\n\022MSG_S"
  "KILL_CAST_NTF\020\363\247\022\022\032\n\024MSG_SKILL_RESULT_NT"
  "F\020\364\247\022\022\030\n\022MSG_OBJECT_NEW_NTF\020\365\247\022\022\033\n\025MSG_O"
  "BJECT_CHANGE_NTF\020\366\247\022\022\033\n\025MSG_OBJECT_REMOV"
  "E_NTF\020\367\247\022\022\033\n\025MSG_OBJECT_ACTION_REQ\020\370\247\022\022\033"
  "\n\025MSG_OBJECT_ACTION_ACK\020\371\247\022\022\030\n\022MSG_HEART"
  "_BEAT_REQ\020\372\247\022\022\030\n\022MSG_HEART_BEAT_ACK\020\373\247\022\022"
  "\034\n\026MSG_USE_HP_BOOTTLE_REQ\020\374\247\022\022\034\n\026MSG_USE"
  "_HP_BOOTTLE_ACK\020\375\247\022\022\034\n\026MSG_USE_MP_BOOTTL"
  "E_REQ\020\376\247\022\022\034\n\026MSG_USE_MP_BOOTTLE_ACK\020\377\247\022\022"
  "\033\n\025MSG_OBJECT_DIE_NOTIFY\020\200\250\022\022\031\n\023MSG_BATT"
  "LE_CHAT_REQ\020\201\250\022\022\031\n\023MSG_BATTLE_CHAT_ACK\020\202"
  "\250\022\022\030\n\022MSG_BULLET_NEW_NTF\020\203\250\022\022\032\n\024MSG_SWIT"
  "CH_MOUNT_REQ\020\204\250\022\022\032\n\024MSG_SWITCH_MOUNT_ACK"
  "\020\205\250\022\022\032\n\024MSG_PLAYER_CHAGE_NTF\020\206\250\022\022\035\n\027MSG_"
  "ACTOR_HITEFFECT_NTF\020\207\250\022\022\032\n\024MSG_MOUNT_RID"
  "ING_REQ\020\210\250\022\022\032\n\024MSG_MOUNT_RIDING_ACK\020\211\250\022\022"
  "\034\n\026MSG_SCENESVR_MSGID_END\020\377\264\030b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_MsgID_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_MsgID_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_MsgID_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MsgID_2eproto = {
  false, false, descriptor_table_protodef_MsgID_2eproto, "MsgID.proto", 2517,
  &descriptor_table_MsgID_2eproto_once, descriptor_table_MsgID_2eproto_sccs, descriptor_table_MsgID_2eproto_deps, 0, 0,
  schemas, file_default_instances, TableStruct_MsgID_2eproto::offsets,
  file_level_metadata_MsgID_2eproto, 0, file_level_enum_descriptors_MsgID_2eproto, file_level_service_descriptors_MsgID_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_MsgID_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_MsgID_2eproto)), true);
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* MessageID_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_MsgID_2eproto);
  return file_level_enum_descriptors_MsgID_2eproto[0];
}
bool MessageID_IsValid(int value) {
  switch (value) {
    case 0:
    case 100000:
    case 100001:
    case 100002:
    case 100003:
    case 100004:
    case 100005:
    case 100006:
    case 100007:
    case 100008:
    case 100009:
    case 100010:
    case 100011:
    case 100012:
    case 100013:
    case 100014:
    case 100015:
    case 100016:
    case 100017:
    case 100018:
    case 100019:
    case 100020:
    case 100021:
    case 100022:
    case 100023:
    case 100024:
    case 100025:
    case 100026:
    case 100032:
    case 100033:
    case 100034:
    case 100035:
    case 100036:
    case 100037:
    case 100038:
    case 100039:
    case 100040:
    case 100041:
    case 199999:
    case 200000:
    case 200001:
    case 200002:
    case 200010:
    case 200011:
    case 300000:
    case 300001:
    case 300002:
    case 300003:
    case 300004:
    case 300005:
    case 300006:
    case 300007:
    case 300008:
    case 300009:
    case 300010:
    case 300011:
    case 300012:
    case 300013:
    case 300014:
    case 300015:
    case 300016:
    case 300017:
    case 300018:
    case 300019:
    case 300020:
    case 300021:
    case 300022:
    case 300023:
    case 300024:
    case 300025:
    case 300026:
    case 300027:
    case 300028:
    case 300029:
    case 300030:
    case 300031:
    case 300032:
    case 300033:
    case 300034:
    case 300035:
    case 300036:
    case 300037:
    case 300038:
    case 300039:
    case 300040:
    case 300041:
    case 399999:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
