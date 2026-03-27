hkShapeCollectionFilter *__thiscall hkShapeCollectionFilter::`scalar deleting destructor'(
        hkShapeCollectionFilter *this,
        char a2)
{
  *(_DWORD *)this = &hkShapeCollectionFilter::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
