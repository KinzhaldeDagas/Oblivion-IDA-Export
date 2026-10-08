int *__thiscall sub_8E8750(int *this, char a2)
{
  sub_8E8A10(this); /*0x8e8753*/
  if ( (a2 & 1) != 0 ) /*0x8e875d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e876f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8e8774*/
}
