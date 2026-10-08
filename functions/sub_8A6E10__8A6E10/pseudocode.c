int *__thiscall sub_8A6E10(int *this, char a2)
{
  sub_8A6900(this); /*0x8a6e13*/
  if ( (a2 & 1) != 0 ) /*0x8a6e1d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a6e2f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2A);
  return this; /*0x8a6e34*/
}
