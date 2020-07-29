#ifndef _STDAFX_H_
#define _STDAFX_H_

// cpp standard library
#include<vector>
#include<map>
#include<list>
#include<string>
#include<iostream>

// define
#include"ServerDefine.h"

// protoc
#include"./protoc/MsgID.pb.h"

// engine
#include"./ServerEngine/Common/fdtouid.h"
#include"./ServerEngine/Common/Timer.h"
#include"./ServerEngine/Common/asrt.h"
#include"./ServerEngine/Common/ConfigFile.h"
#include"./ServerEngine/3rd/uuid.h"

#endif