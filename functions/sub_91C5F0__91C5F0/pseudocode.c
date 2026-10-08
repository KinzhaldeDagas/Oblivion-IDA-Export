int *__thiscall sub_91C5F0(int *this, char a2)
{
  sub_91C520(this); /*0x91c5f3*/
  if ( (a2 & 1) != 0 ) /*0x91c5fd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91c60f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91c614*/
}
