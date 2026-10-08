struct _RPC_HTTP_TRANSPORT_CREDENTIALS_W
{
SEC_WINNT_AUTH_IDENTITY_W *TransportCredentials;
ULONG Flags;
ULONG AuthenticationTarget;
ULONG NumberOfAuthnSchemes;
ULONG *AuthnSchemes;
unsigned __int16 *ServerCertificateSubject;
};
