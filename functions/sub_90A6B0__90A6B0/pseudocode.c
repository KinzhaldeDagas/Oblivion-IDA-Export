_DWORD *__thiscall sub_90A6B0(_DWORD *this, char a2)
{
  sub_90A430(this); /*0x90a6b3*/
  if ( (a2 & 1) != 0 ) /*0x90a6bd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x90a6cf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x1C);
  return this; /*0x90a6d4*/
}
