BSTempEffectGeometryDecal *__thiscall BSTempEffectGeometryDecal::`scalar deleting destructor'(
        BSTempEffectGeometryDecal *this,
        char a2)
{
  BSTempEffectGeometryDecal_Dtor((BSTempEffectGeometryDecalLayout_t *)this); /*0x570693*/
  if ( (a2 & 1) != 0 ) /*0x57069d*/
    FormHeapFree((unsigned int)this); /*0x5706a0*/
  return this; /*0x5706aa*/
}
