_DWORD *__thiscall sub_90F1D0(_DWORD *this, char a2)
{
  sub_90F130(this); /*0x90f1d3*/
  if ( (a2 & 1) != 0 ) /*0x90f1dd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90f1ef*/
      this,
      *((unsigned __int16 *)this + 2),
      0xC);
  return this; /*0x90f1f4*/
}
