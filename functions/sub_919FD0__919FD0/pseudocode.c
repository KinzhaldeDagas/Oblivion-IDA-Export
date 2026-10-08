char *__thiscall sub_919FD0(char *this, char a2)
{
  sub_919E30(this); /*0x919fd3*/
  if ( (a2 & 1) != 0 ) /*0x919fdd*/
    (*(void (__stdcall **)(char *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x919fef*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x919ff4*/
}
