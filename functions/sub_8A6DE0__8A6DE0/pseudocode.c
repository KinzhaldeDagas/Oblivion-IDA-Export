int *__thiscall sub_8A6DE0(int *this, char a2)
{
  sub_8A66A0(this); /*0x8a6de3*/
  if ( (a2 & 1) != 0 ) /*0x8a6ded*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8a6dff*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x8a6e04*/
}
