int *__thiscall sub_946F80(int *this, char a2)
{
  sub_946CB0(this); /*0x946f83*/
  if ( (a2 & 1) != 0 ) /*0x946f8d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x946f9f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x946fa4*/
}
