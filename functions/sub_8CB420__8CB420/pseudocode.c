int *__thiscall sub_8CB420(int *this, char a2)
{
  sub_8CB330(this); /*0x8cb423*/
  if ( (a2 & 1) != 0 ) /*0x8cb42d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8cb43f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x8cb444*/
}
