_DWORD *__thiscall sub_927ED0(_DWORD *this, char a2)
{
  sub_927D80(this); /*0x927ed3*/
  if ( (a2 & 1) != 0 ) /*0x927edd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x927eef*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x927ef4*/
}
