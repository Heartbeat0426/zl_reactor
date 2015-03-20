﻿// ***********************************************************************
// Filename         : HttpKeyValue.h
// Author           : LIZHENG
// Created          : 2014-07-02
// Description      : 
//
// Last Modified By : LIZHENG
// Last Modified On : 2015-03-16
// 
// Copyright (c) lizhenghn@gmail.com. All rights reserved.
// ***********************************************************************
#ifndef ZL_HTTPKEYVALUE_H
#define ZL_HTTPKEYVALUE_H
#include "Define.h"
#include "base/Singleton.h"
#include "HttpProtocol.h"
NAMESPACE_ZL_NET_START

class HttpKeyValue : public zl::Singleton < HttpKeyValue >
{
    DECLARE_SINGLETON_CLASS(HttpKeyValue);

public:
    std::string getStatusDesc(HttpStatusCode code);
    std::string getContentType(const std::string& file_type);

private:
    std::map<int, std::string>          code_desc_;
    std::map<std::string, std::string>  content_type_;

private:
    HttpKeyValue();
    void initialise();
};

NAMESPACE_ZL_NET_END
#endif /* ZL_HTTPKEYVALUE_H */