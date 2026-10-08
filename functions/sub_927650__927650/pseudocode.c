_DWORD *__thiscall sub_927650(_DWORD *this, char a2)
{
  sub_927540(this); /*0x927653*/
  if ( (a2 & 1) != 0 ) /*0x92765d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92766f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x927674*/
}
