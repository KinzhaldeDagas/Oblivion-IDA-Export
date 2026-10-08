_DWORD *__thiscall sub_91E060(_DWORD *this, char a2)
{
  sub_91DFA0(this); /*0x91e063*/
  if ( (a2 & 1) != 0 ) /*0x91e06d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x91e07f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x91e084*/
}
