_DWORD *__thiscall sub_91F6F0(_DWORD *this, char a2)
{
  sub_91F720(this); /*0x91f6f3*/
  if ( (a2 & 1) != 0 ) /*0x91f6fd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91f70f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x91f714*/
}
