_DWORD *__thiscall sub_943030(_DWORD *this, char a2)
{
  sub_8B0E60(this + 2); /*0x943036*/
  *this = &hkBaseObject::`vftable'; /*0x943040*/
  if ( (a2 & 1) != 0 ) /*0x943046*/
    (*(void (__stdcall **)(_DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x943058*/
      this,
      *((unsigned __int16 *)this + 2),
      0x12);
  return this; /*0x94305d*/
}
