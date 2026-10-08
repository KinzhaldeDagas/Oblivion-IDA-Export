hkRayShapeCollectionFilter *__thiscall hkRayShapeCollectionFilter::`scalar deleting destructor'(
        hkRayShapeCollectionFilter *this,
        char a2)
{
  *(_DWORD *)this = &hkRayShapeCollectionFilter::`vftable'; /*0x889558*/
  if ( (a2 & 1) != 0 ) /*0x88955e*/
    FormHeapFree((unsigned int)this); /*0x889561*/
  return this; /*0x88956b*/
}
