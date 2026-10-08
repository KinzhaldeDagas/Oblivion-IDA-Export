_DWORD *__thiscall sub_8EA0B0(_DWORD *this, char a2)
{
  sub_8B3540(this); /*0x8ea0b3*/
  if ( (a2 & 1) != 0 ) /*0x8ea0bd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8ea0cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x2B);
  return this; /*0x8ea0d4*/
}
