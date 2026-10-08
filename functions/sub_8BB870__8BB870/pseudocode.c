int *__thiscall sub_8BB870(int *this, char a2)
{
  sub_8BB8A0(this); /*0x8bb873*/
  if ( (a2 & 1) != 0 ) /*0x8bb87d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bb88f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x15);
  return this; /*0x8bb894*/
}
