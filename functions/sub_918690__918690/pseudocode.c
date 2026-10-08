_DWORD *__thiscall sub_918690(_DWORD *this, char a2)
{
  sub_8B0E60(this + 2); /*0x918696*/
  *this = &hkBaseObject::`vftable'; /*0x9186a0*/
  if ( (a2 & 1) != 0 ) /*0x9186a6*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9186b8*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x9186bd*/
}
