_DWORD *__thiscall sub_91CF60(_DWORD *this, char a2)
{
  sub_91CF90(this); /*0x91cf63*/
  if ( (a2 & 1) != 0 ) /*0x91cf6d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91cf7f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x91cf84*/
}
