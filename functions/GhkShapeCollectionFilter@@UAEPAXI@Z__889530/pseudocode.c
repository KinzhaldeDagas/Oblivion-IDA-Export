hkShapeCollectionFilter *__thiscall hkShapeCollectionFilter::`scalar deleting destructor'(
        hkShapeCollectionFilter *this,
        char a2)
{
  *(_DWORD *)this = &hkShapeCollectionFilter::`vftable'; /*0x889538*/
  if ( (a2 & 1) != 0 ) /*0x88953e*/
    FormHeapFree((unsigned int)this); /*0x889541*/
  return this; /*0x88954b*/
}
