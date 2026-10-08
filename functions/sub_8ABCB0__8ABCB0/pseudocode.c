int *__thiscall sub_8ABCB0(int *this, char a2)
{
  sub_8DE8B0(this); /*0x8abcb3*/
  if ( (a2 & 1) != 0 ) /*0x8abcbd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8abccf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this; /*0x8abcd4*/
}
