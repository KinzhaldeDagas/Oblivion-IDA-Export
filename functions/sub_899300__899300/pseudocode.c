_DWORD *__thiscall sub_899300(_DWORD *this, char a2)
{
  *(this + 2) = &hkBaseObject::`vftable'; /*0x899308*/
  *this = &hkBaseObject::`vftable'; /*0x89930f*/
  if ( (a2 & 1) != 0 ) /*0x899315*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x899327*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      4);
  return this; /*0x89932c*/
}
