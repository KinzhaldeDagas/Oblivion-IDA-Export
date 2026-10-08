int *__thiscall sub_8ED330(int *this, char a2)
{
  sub_8ED000(this); /*0x8ed333*/
  if ( (a2 & 1) != 0 ) /*0x8ed33d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8ed34f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this; /*0x8ed354*/
}
