char *__thiscall sub_91CC00(char *this, char a2)
{
  sub_91CAB0(this); /*0x91cc03*/
  if ( (a2 & 1) != 0 ) /*0x91cc0d*/
    (*(void (__stdcall **)(char *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91cc1f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91cc24*/
}
