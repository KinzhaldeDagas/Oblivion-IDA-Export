_DWORD *__thiscall sub_88A5E0(_DWORD *this, char a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( this )
    v3 = this + 4;
  else
    v3 = 0;
  *v3 = &hkRayShapeCollectionFilter::`vftable';
  if ( this )
    v4 = this + 3;
  else
    v4 = 0;
  *v4 = &hkShapeCollectionFilter::`vftable';
  *this = &hkBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
      dword_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this;
}
