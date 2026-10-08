_DWORD *__thiscall sub_8993A0(_DWORD *this, char a2)
{
  sub_8DA1D0(this); /*0x8993a3*/
  if ( (a2 & 1) != 0 ) /*0x8993ad*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8993bf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x8993c4*/
}
