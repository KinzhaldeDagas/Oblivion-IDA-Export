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

  v3 = *(_DWORD *)(a1 + 0x20); /*0x946015*/
  if ( v3 == 0xFFFFFFFF ) /*0x94601b*/
    return 0; /*0x94601b*/
  timeout.tv_sec = 0; /*0x946031*/
  timeout.tv_usec = 0; /*0x946035*/
  readfds.fd_array[0] = v3; /*0x94603d*/
  exceptfds.fd_array[0] = v3; /*0x946041*/
  readfds.fd_count = 1; /*0x94604b*/
  exceptfds.fd_count = 1; /*0x946053*/
  if ( select_0(v3 + 1, &readfds, 0, &exceptfds, &timeout) <= 0 ) /*0x946065*/
    return 0; /*0x946065*/
  if ( !_WSAFDIsSet_0(*(_DWORD *)(a1 + 0x20), &readfds) ) /*0x946074*/
    return 0; /*0x946074*/
  v8 = *(_DWORD *)(a1 + 0x20); /*0x94608d*/
  addrlen = 0x10; /*0x94608e*/
  v4 = accept_0(v8, &addr, &addrlen); /*0x946096*/
  v5 = v4; /*0x94609b*/
  if ( v4 == 0xFFFFFFFF ) /*0x9460a0*/
    return 0; /*0x9460f3*/
  *(_DWORD *)optval = 1; /*0x9460ae*/
  setsockopt_0(v4, 6, 1, optval, 4); /*0x9460b6*/
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x24, 0x12); /*0x9460c7*/
  *(_WORD *)(v6 + 4) = 0x24; /*0x9460cd*/
  return (_DWORD *)sub_945F70(v6, a2, v5); /*0x9460d8*/
}
