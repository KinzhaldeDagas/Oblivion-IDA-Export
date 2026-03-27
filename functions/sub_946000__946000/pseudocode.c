_DWORD *__usercall sub_946000@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  SOCKET v3; // eax
  SOCKET v4; // eax
  int v5; // esi
  int v6; // eax
  SOCKET v8; // [esp-Ch] [ebp-23Ch]
  int addrlen; // [esp+4h] [ebp-22Ch] BYREF
  char optval[4]; // [esp+8h] [ebp-228h] BYREF
  struct timeval timeout; // [esp+Ch] [ebp-224h] BYREF
  fd_set readfds; // [esp+14h] [ebp-21Ch] BYREF
  fd_set exceptfds; // [esp+118h] [ebp-118h] BYREF
  struct sockaddr addr; // [esp+21Ch] [ebp-14h] BYREF

  v3 = *(_DWORD *)(a1 + 0x20);
  if ( v3 == 0xFFFFFFFF )
    return 0;
  timeout.tv_sec = 0;
  timeout.tv_usec = 0;
  readfds.fd_array[0] = v3;
  exceptfds.fd_array[0] = v3;
  readfds.fd_count = 1;
  exceptfds.fd_count = 1;
  if ( select_0(v3 + 1, &readfds, 0, &exceptfds, &timeout) <= 0 )
    return 0;
  if ( !_WSAFDIsSet_0(*(_DWORD *)(a1 + 0x20), &readfds) )
    return 0;
  v8 = *(_DWORD *)(a1 + 0x20);
  addrlen = 0x10;
  v4 = accept_0(v8, &addr, &addrlen);
  v5 = v4;
  if ( v4 == 0xFFFFFFFF )
    return 0;
  *(_DWORD *)optval = 1;
  setsockopt_0(v4, 6, 1, optval, 4);
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x24, 0x12);
  *(_WORD *)(v6 + 4) = 0x24;
  return (_DWORD *)sub_945F70(v6, a2, v5);
}
