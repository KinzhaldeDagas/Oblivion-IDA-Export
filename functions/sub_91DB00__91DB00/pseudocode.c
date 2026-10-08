_DWORD *__thiscall sub_91DB00(_DWORD *this, char a2)
{
  sub_91D890(this); /*0x91db03*/
  if ( (a2 & 1) != 0 ) /*0x91db0d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91db1f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91db24*/
}
