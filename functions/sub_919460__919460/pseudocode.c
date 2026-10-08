int *__thiscall sub_919460(int *this, char a2)
{
  sub_919290(this); /*0x919463*/
  if ( (a2 & 1) != 0 ) /*0x91946d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91947f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x919484*/
}
