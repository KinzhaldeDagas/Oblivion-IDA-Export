int *__thiscall sub_8E8720(int *this, char a2)
{
  *this = (int)&off_A9ABC4; /*0x8e8723*/
  sub_8E8A10(this); /*0x8e8729*/
  if ( (a2 & 1) != 0 ) /*0x8e8733*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e8745*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8e874a*/
}
