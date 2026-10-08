_DWORD *__thiscall sub_92B3F0(_DWORD *this, char a2)
{
  sub_92B420(this); /*0x92b3f3*/
  if ( (a2 & 1) != 0 ) /*0x92b3fd*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x92b40f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x92b414*/
}
