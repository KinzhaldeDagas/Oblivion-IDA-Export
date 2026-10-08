_DWORD *__thiscall sub_9492A0(_DWORD *this, char a2)
{
  sub_949180(this); /*0x9492a3*/
  if ( (a2 & 1) != 0 ) /*0x9492ad*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x9492bf*/
      this,
      *((unsigned __int16 *)this + 2),
      0x32);
  return this; /*0x9492c4*/
}
