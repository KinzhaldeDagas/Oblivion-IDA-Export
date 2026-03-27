SOCKET *__thiscall sub_945FB0(SOCKET *this, char a2)
{
  SOCKET v3; // eax

  v3 = *(this + 8);
  *this = (SOCKET)&off_AA28FC;
  if ( v3 != 0xFFFFFFFF )
  {
    closesocket_0(v3);
    *(this + 8) = 0xFFFFFFFF;
  }
  *(this + 5) = (SOCKET)&hkBaseObject::`vftable';
  *(this + 2) = (SOCKET)&hkBaseObject::`vftable';
  *this = (SOCKET)&hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__stdcall **)(SOCKET *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this;
}
