//
// Created by Radicchio Sarah on 11.01.2022.
//

#include "ClientSocket.hpp"
#include "iostream"

ClientSocket::ClientSocket() : _fd(-1)
{
	_msg_buff.reserve(MSG_BUFF);
//	_msg_buff.resize(MSG_BUFF);
}

ClientSocket::~ClientSocket()
{}