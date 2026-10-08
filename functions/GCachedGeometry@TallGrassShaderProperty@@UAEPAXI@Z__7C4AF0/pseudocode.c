TallGrassShaderProperty::CachedGeometry *__thiscall TallGrassShaderProperty::CachedGeometry::`scalar deleting destructor'(
        TallGrassShaderProperty::CachedGeometry *this,
        char a2)
{
  TallGrassShaderProperty::CachedGeometry::~CachedGeometry(this); /*0x7c4af3*/
  if ( (a2 & 1) != 0 ) /*0x7c4afd*/
    FormHeapFree((unsigned int)this); /*0x7c4b00*/
  return this; /*0x7c4b0a*/
}
