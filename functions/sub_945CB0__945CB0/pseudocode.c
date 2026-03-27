int __userpurge sub_945CB0@<eax>(SOCKET *a1@<ecx>, int a2@<ebx>, char *cp, u_short hostshort)
{
  int v5; // eax
  struct hostent *v6; // eax
  SOCKET v7; // eax
  struct sockaddr name; // [esp+4h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-4h]

  v10 = __security_cookie;
  sub_8B18C0(a2, (char *)&name, 0, 0x10u);
  name.sa_family = 2;
  *(_WORD *)name.sa_data = htons_0(hostshort);
  v5 = *cp;
  if ( v5 < 0x30 || v5 > 0x39 )
  {
    v6 = gethostbyname_0(cp);
    if ( !v6 )
      return 1;
    sub_8B1890(&name.sa_data[2], *(const void **)v6->h_addr_list, v6->h_length);
  }
  else
  {
    *(_DWORD *)&name.sa_data[2] = inet_addr_0(cp);
  }
  if ( a1[8] == 0xFFFFFFFF )
  {
    (*(void (__thiscall **)(SOCKET *))(*a1 + 0xC))(a1);
    v7 = socket_0(2, 1, 0);
    a1[8] = v7;
    if ( v7 == 0xFFFFFFFF )
      return 1;
  }
  if ( connect_0(a1[8], &name, 0x10) == 0xFFFFFFFF && WSAGetLastError_0() != 0x2733 )
  {
    (*(void (__thiscall **)(SOCKET *))(*a1 + 0xC))(a1);
    return 1;
  }
  return 0;
}
