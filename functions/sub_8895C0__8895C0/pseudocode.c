_DWORD *__thiscall sub_8895C0(_DWORD *this)
{
  _DWORD *result; // eax

  if ( this )
    result = this + 4;
  else
    result = 0;
  *result = &hkRayShapeCollectionFilter::`vftable';
  if ( this )
  {
    *(this + 3) = &hkShapeCollectionFilter::`vftable';
    *this = &hkBaseObject::`vftable';
  }
  else
  {
    *(_DWORD *)0 = &hkShapeCollectionFilter::`vftable';
    *(_DWORD *)0 = &hkBaseObject::`vftable';
    return 0;
  }
  return result;
}
