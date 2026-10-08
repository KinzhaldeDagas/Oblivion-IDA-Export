bhkWorldCinfo *__thiscall bhkWorldCinfo::`scalar deleting destructor'(bhkWorldCinfo *this, char a2)
{
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x88a548*/
  if ( (a2 & 1) != 0 ) /*0x88a54e*/
    (*(void (__thiscall **)(int, bhkWorldCinfo *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x88a563*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x2C);
  return this; /*0x88a567*/
}
