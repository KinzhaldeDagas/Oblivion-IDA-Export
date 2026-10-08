struct addrinfo
{
int ai_flags;
int ai_family;
int ai_socktype;
int ai_protocol;
SIZE_T ai_addrlen;
char *ai_canonname __offset(OFF64|AUTO);
sockaddr_0 *ai_addr __offset(OFF64|AUTO);
addrinfo *ai_next __offset(OFF64|AUTO);
};
