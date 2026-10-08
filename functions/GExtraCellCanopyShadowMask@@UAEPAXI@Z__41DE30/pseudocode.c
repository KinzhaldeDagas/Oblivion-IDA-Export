ExtraCellCanopyShadowMask *__thiscall ExtraCellCanopyShadowMask::`scalar deleting destructor'(
        ExtraCellCanopyShadowMask *this,
        char a2)
{
  ExtraCellCanopyShadowMask::~ExtraCellCanopyShadowMask(this); /*0x41de33*/
  if ( (a2 & 1) != 0 ) /*0x41de3d*/
    FormHeapFree((unsigned int)this); /*0x41de40*/
  return this; /*0x41de4a*/
}
