int *__thiscall sub_8DA1A0(int *this, char a2)
{
  sub_8D9F00(this); /*0x8da1a3*/
  if ( (a2 & 1) != 0 ) /*0x8da1ad*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8da1bf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2C);
  return this; /*0x8da1c4*/
}
