int *__thiscall sub_8DB0F0(int *this, char a2)
{
  sub_8DAD30(this); /*0x8db0f3*/
  if ( (a2 & 1) != 0 ) /*0x8db0fd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8db10f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8db114*/
}
