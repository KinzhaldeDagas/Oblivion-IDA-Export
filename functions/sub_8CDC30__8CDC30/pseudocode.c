int *__thiscall sub_8CDC30(int *this, char a2)
{
  sub_8CDAA0(this); /*0x8cdc33*/
  if ( (a2 & 1) != 0 ) /*0x8cdc3d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8cdc4f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this; /*0x8cdc54*/
}
