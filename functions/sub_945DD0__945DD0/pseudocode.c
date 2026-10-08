int __thiscall sub_945DD0(SOCKET *this, u_short hostshort)
{
  SOCKET v3; // eax
  SOCKET v5; // [esp-14h] [ebp-30h]
  char optval[4]; // [esp+4h] [ebp-18h] BYREF
  struct sockaddr name; // [esp+8h] [ebp-14h] BYREF

  (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this); /*0x945de1*/
  v3 = socket_0(2, 1, 0); /*0x945dea*/
  *(this + 8) = v3; /*0x945df2*/
  if ( v3 == 0xFFFFFFFF ) /*0x945df5*/
    return 1; /*0x945df5*/
  name.sa_family = 2; /*0x945e00*/
  *(_DWORD *)&name.sa_data[2] = 0; /*0x945e07*/
  *(_WORD *)name.sa_data = htons_0(hostshort); /*0x945e1d*/
  v5 = *(this + 8); /*0x945e2a*/
  *(_DWORD *)optval = 1; /*0x945e2b*/
  setsockopt_0(v5, 0xFFFF, 4, optval, 4); /*0x945e33*/
  if ( bind_0(*(this + 8), &name, 0x10) == 0xFFFFFFFF ) /*0x945e4b*/
  {
    (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this); /*0x945e51*/
    return 1; /*0x945e66*/
  }
  if ( listen_0(*(this + 8), 2) == 0xFFFFFFFF ) /*0x945e77*/
  {
    (*(void (__thiscall **)(SOCKET *))(*this + 0xC))(this); /*0x945e7d*/
    return 1; /*0x945e92*/
  }
  return 0; /*0x945e59*/
}
