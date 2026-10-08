int *__thiscall sub_926D60(int *this, char a2)
{
  sub_926D90(this); /*0x926d63*/
  if ( (a2 & 1) != 0 ) /*0x926d6d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x926d7f*/
      this,
      *((unsigned __int16 *)this + 2),
      0xC);
  return this; /*0x926d84*/
}
