_DWORD *__thiscall sub_943620(_DWORD *this, char a2)
{
  *(this + 2) = 0; /*0x943628*/
  *this = &hkBaseObject::`vftable'; /*0x94362f*/
  if ( (a2 & 1) != 0 ) /*0x943635*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x943647*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x25);
  return this; /*0x94364c*/
}
