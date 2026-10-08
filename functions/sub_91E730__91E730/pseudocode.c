_DWORD *__thiscall sub_91E730(_DWORD *this, char a2)
{
  sub_91E4A0(this); /*0x91e733*/
  if ( (a2 & 1) != 0 ) /*0x91e73d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91e74f*/
      this,
      *((unsigned __int16 *)this + 2),
      0xE);
  return this; /*0x91e754*/
}
