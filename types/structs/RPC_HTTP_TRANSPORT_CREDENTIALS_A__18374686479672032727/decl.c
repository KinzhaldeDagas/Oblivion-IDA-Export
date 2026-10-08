struct _RPC_HTTP_TRANSPORT_CREDENTIALS_A
{
SEC_WINNT_AUTH_IDENTITY_A *TransportCredentials;
ULONG Flags;
ULONG AuthenticationTarget;
ULONG NumberOfAuthnSchemes;
ULONG *AuthnSchemes;
unsigned __int8 *ServerCertificateSubject;
};
