hkRayShapeCollectionFilter *__thiscall hkRayShapeCollectionFilter::`scalar deleting destructor'(
        hkRayShapeCollectionFilter *this,
        char a2)
{
  *(_DWORD *)this = &hkRayShapeCollectionFilter::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
