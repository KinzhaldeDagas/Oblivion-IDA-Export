_DWORD *__thiscall sub_927D50(_DWORD *this, char a2)
{
  sub_927C70(this); /*0x927d53*/
  if ( (a2 & 1) != 0 ) /*0x927d5d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x927d6f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x927d74*/
}
