_DWORD *__thiscall sub_901A10(_DWORD *this, char a2)
{
  sub_9017B0(this); /*0x901a13*/
  if ( (a2 & 1) != 0 ) /*0x901a1d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x901a2f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x901a34*/
}
