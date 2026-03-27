ExtraCellCanopyShadowMask *__thiscall ExtraCellCanopyShadowMask::`scalar deleting destructor'(
        ExtraCellCanopyShadowMask *this,
        char a2)
{
  ExtraCellCanopyShadowMask::~ExtraCellCanopyShadowMask(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
