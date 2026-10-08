int *__thiscall sub_926D10(int *this, char a2)
{
  sub_926CA0(this); /*0x926d13*/
  if ( (a2 & 1) != 0 ) /*0x926d1d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x926d2f*/
      this,
      *((unsigned __int16 *)this + 2),
      0xC);
  return this; /*0x926d34*/
}
