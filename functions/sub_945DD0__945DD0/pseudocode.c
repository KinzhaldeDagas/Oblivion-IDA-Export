int __thiscall sub_945DD0(SOCKET *this, u_short hostshort)
{
  SOCKET v3; // eax
  SOCKET v5; // [esp-14h] [ebp-30h]
  char optval[4]; // [esp+4h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+8h] [ebp-14h] BYREF

  (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this);
  v3 = socket_0(2, 1, 0);
  *(this + 8) = v3;
  if ( v3 == 0xFFFFFFFF )
    return 1;
  name.sa_family = 2;
  *(_DWORD *)&name.sa_data[2] = 0;
  *(_WORD *)name.sa_data = htons_0(hostshort);
  v5 = *(this + 8);
  *(_DWORD *)optval = 1;
  setsockopt_0(v5, 0xFFFF, 4, optval, 4);
  if ( bind_0(*(this + 8), &name, 0x10) == 0xFFFFFFFF )
  {
    (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this);
    return 1;
  }
  if ( listen_0(*(this + 8), 2) == 0xFFFFFFFF )
  {
    (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this);
    return 1;
  }
  return 0;
}
