int *__thiscall sub_8A9910(int *this, char a2)
{
  sub_8A9830(this); /*0x8a9913*/
  if ( (a2 & 1) != 0 ) /*0x8a991d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a992f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2A);
  return this; /*0x8a9934*/
}
