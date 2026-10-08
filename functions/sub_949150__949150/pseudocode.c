_DWORD *__thiscall sub_949150(_DWORD *this, char a2)
{
  sub_948D90(this); /*0x949153*/
  if ( (a2 & 1) != 0 ) /*0x94915d*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x94916f*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x949174*/
}
