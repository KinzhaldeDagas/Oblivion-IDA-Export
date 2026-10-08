_DWORD *__thiscall sub_903C20(_DWORD *this, char a2)
{
  sub_903910(this); /*0x903c23*/
  if ( (a2 & 1) != 0 ) /*0x903c2d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x903c3f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x903c44*/
}
