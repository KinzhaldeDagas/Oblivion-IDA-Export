_DWORD *__thiscall sub_942FF0(_DWORD *this, char a2)
{
  sub_942BB0(this + 2); /*0x942ff6*/
  *this = &hkBaseObject::`vftable'; /*0x943000*/
  if ( (a2 & 1) != 0 ) /*0x943006*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x943018*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x94301d*/
}
