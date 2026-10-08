SOCKET *__thiscall sub_945FB0(SOCKET *this, char a2)
{
  SOCKET v3; // eax

  v3 = *(this + 8); /*0x945fb3*/
  *this = (SOCKET)&off_AA28FC; /*0x945fb9*/
  if ( v3 != 0xFFFFFFFF ) /*0x945fbf*/
  {
    closesocket_0(v3); /*0x945fc2*/
    *(this + 8) = 0xFFFFFFFF; /*0x945fc7*/
  }
  *(this + 5) = (SOCKET)&hkBaseObject::`vftable'; /*0x945fd3*/
  *(this + 2) = (SOCKET)&hkBaseObject::`vftable'; /*0x945fd6*/
  *this = (SOCKET)&hkBaseObject::`vftable'; /*0x945fd9*/
  if ( (a2 & 1) != 0 ) /*0x945fe0*/
    (*(void (__stdcall **)(SOCKET *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x945ff2*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x945ff7*/
}
