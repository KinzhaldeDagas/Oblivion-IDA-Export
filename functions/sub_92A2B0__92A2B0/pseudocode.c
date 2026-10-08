_DWORD *__thiscall sub_92A2B0(_DWORD *this, char a2)
{
  sub_90C880(this); /*0x92a2b3*/
  if ( (a2 & 1) != 0 ) /*0x92a2bd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92a2cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92a2d4*/
}
