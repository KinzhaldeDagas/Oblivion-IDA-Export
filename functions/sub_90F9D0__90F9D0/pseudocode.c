int *__thiscall sub_90F9D0(int *this, char a2)
{
  sub_90F5C0(this); /*0x90f9d3*/
  if ( (a2 & 1) != 0 ) /*0x90f9dd*/
    (*(void (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90f9ef*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2E);
  return this; /*0x90f9f4*/
}
