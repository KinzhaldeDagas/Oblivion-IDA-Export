_DWORD *__thiscall sub_91E950(_DWORD *this, char a2)
{
  sub_91E860(this); /*0x91e953*/
  if ( (a2 & 1) != 0 ) /*0x91e95d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91e96f*/
      this,
      *((unsigned __int16 *)this + 2),
      0xE);
  return this; /*0x91e974*/
}
