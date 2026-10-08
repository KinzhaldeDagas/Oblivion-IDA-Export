_DWORD *__thiscall sub_8BC2B0(_DWORD *this, char a2)
{
  sub_8BC2E0(this); /*0x8bc2b3*/
  if ( (a2 & 1) != 0 ) /*0x8bc2bd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8bc2cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x17);
  return this; /*0x8bc2d4*/
}
