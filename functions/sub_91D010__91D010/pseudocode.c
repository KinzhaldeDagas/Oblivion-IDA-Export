char *__thiscall sub_91D010(char *this, char a2)
{
  sub_91CE50(this); /*0x91d013*/
  if ( (a2 & 1) != 0 ) /*0x91d01d*/
    (*(void (__stdcall **)(char *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91d02f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91d034*/
}
