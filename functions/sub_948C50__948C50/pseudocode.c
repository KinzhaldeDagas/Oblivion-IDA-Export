_DWORD *__thiscall sub_948C50(_DWORD *this, char a2)
{
  sub_8BC000(this); /*0x948c53*/
  if ( (a2 & 1) != 0 ) /*0x948c5d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x948c6f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x948c74*/
}
