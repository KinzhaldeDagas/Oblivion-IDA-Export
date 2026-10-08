BSTempEffectDecalLayout_t *__thiscall BSTempEffectDecal::`scalar deleting destructor'(
        BSTempEffectDecalLayout_t *this,
        char a2)
{
  BSTempEffectDecal::~BSTempEffectDecal(this); /*0x56cb53*/
  if ( (a2 & 1) != 0 ) /*0x56cb5d*/
    FormHeapFree((unsigned int)this); /*0x56cb60*/
  return this; /*0x56cb6a*/
}
