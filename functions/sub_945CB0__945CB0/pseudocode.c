int __userpurge sub_945CB0@<eax>(SOCKET *a1@<ecx>, int a2@<ebx>, char *cp, u_short hostshort)
{
  int v5; // eax
  struct hostent *v6; // eax
  SOCKET v7; // eax
  struct sockaddr name; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v10 = __security_cookie; /*0x945cbb*/
  sub_8B18C0(a2, (char *)&name, 0, 0x10u); /*0x945cc8*/
  name.sa_family = 2; /*0x945cd5*/
  *(_WORD *)name.sa_data = htons_0(hostshort); /*0x945ce5*/
  v5 = *cp; /*0x945cea*/
  if ( v5 < 0x30 || v5 > 0x39 ) /*0x945cf5*/
  {
    v6 = gethostbyname_0(cp); /*0x945d04*/
    if ( !v6 ) /*0x945d0b*/
      return 1; /*0x945d7f*/
    sub_8B1890(&name.sa_data[2], *(const void **)v6->h_addr_list, v6->h_length); /*0x945d1d*/
  }
  else
  {
    *(_DWORD *)&name.sa_data[2] = inet_addr_0(cp); /*0x945cfd*/
  }
  if ( a1[8] == 0xFFFFFFFF ) /*0x945d29*/
  {
    (*(void (__thiscall **)(SOCKET *))(*a1 + 0xC))(a1); /*0x945d2f*/
    v7 = socket_0(2, 1, 0); /*0x945d38*/
    a1[8] = v7; /*0x945d40*/
    if ( v7 == 0xFFFFFFFF ) /*0x945d43*/
      return 1; /*0x945d43*/
  }
  if ( connect_0(a1[8], &name, 0x10) == 0xFFFFFFFF && WSAGetLastError_0() != 0x2733 ) /*0x945d64*/
  {
    (*(void (__thiscall **)(SOCKET *))(*a1 + 0xC))(a1); /*0x945d6a*/
    return 1; /*0x945d6a*/
  }
  return 0; /*0x945d72*/
}
