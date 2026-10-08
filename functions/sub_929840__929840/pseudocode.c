int *__thiscall sub_929840(int *this, char a2)
{
  sub_929870(this); /*0x929843*/
  if ( (a2 & 1) != 0 ) /*0x92984d*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92985f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x929864*/
}
