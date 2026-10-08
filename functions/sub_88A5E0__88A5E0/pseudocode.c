_DWORD *__thiscall sub_88A5E0(_DWORD *this, char a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax

  if ( this ) /*0x88a5e5*/
    v3 = this + 4; /*0x88a5e7*/
  else
    v3 = 0; /*0x88a5ec*/
  *v3 = &hkRayShapeCollectionFilter::`vftable'; /*0x88a5f0*/
  if ( this ) /*0x88a5f6*/
    v4 = this + 3; /*0x88a5f8*/
  else
    v4 = 0; /*0x88a5fd*/
  *v4 = &hkShapeCollectionFilter::`vftable'; /*0x88a604*/
  *this = &hkBaseObject::`vftable'; /*0x88a60a*/
  if ( (a2 & 1) != 0 ) /*0x88a610*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x88a625*/
      unk_BA7D98,
      this,
      *((unsigned __int16 *)this + 2),
      0x24);
  return this; /*0x88a629*/
}
