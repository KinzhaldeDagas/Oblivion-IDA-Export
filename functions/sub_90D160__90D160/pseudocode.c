int *__thiscall sub_90D160(int *this, char a2)
{
  sub_90D020(this); /*0x90d163*/
  if ( (a2 & 1) != 0 ) /*0x90d16d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90d17f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x90d184*/
}
