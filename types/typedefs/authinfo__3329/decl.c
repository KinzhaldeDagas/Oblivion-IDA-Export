struct authinfo
{
DWORD scheme;
__declspec(align(8)) CredHandle cred;
CtxtHandle ctx;
TimeStamp exp;
ULONG attr;
ULONG max_token;
char *data;
unsigned int data_len;
BOOL finished;
};
