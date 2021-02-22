
#include "LilacNet/net/Socket.h"

#include <netinet/in.h>
#include <netinet/tcp.h>
#include <stdio.h>

using namespace lilac;
using namespace lilac::net;

Socket::~Socket()
{
	sockets::close(sockfd_);
}

bool Socket::getTcpInfo(struct tcp_info tcpi) const
{
	socklen_t len = sizeof(*tcpi);
	memZero(tcpi, len);
	return ::getsocketopt(sockfd_, SOL_TCP, TCP_INFO, tcpi, &len) == 0;
}