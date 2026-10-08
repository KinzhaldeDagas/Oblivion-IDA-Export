char *__thiscall sub_8E03F0(char *this, char a2)
{
  sub_8E0240(this); /*0x8e03f3*/
  if ( (a2 & 1) != 0 ) /*0x8e03fd*/
    (*(void (__stdcall **)(char *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e040f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x8e0414*/
}
