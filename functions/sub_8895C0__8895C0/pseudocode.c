_DWORD *__thiscall sub_8895C0(_DWORD *this)
{
  _DWORD *result; // eax

  if ( this ) /*0x8895c2*/
    result = this + 4; /*0x8895c4*/
  else
    result = 0; /*0x8895c9*/
  *result = &hkRayShapeCollectionFilter::`vftable'; /*0x8895cd*/
  if ( this ) /*0x8895d3*/
  {
    *(this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x8895d5*/
    *this = &hkBaseObject::`vftable'; /*0x8895dc*/
  }
  else
  {
    *(_DWORD *)0 = &hkShapeCollectionFilter::`vftable'; /*0x8895e5*/
    *(_DWORD *)0 = &hkBaseObject::`vftable'; /*0x8895eb*/
    return 0; /*0x8895e3*/
  }
  return result; /*0x8895e2*/
}
