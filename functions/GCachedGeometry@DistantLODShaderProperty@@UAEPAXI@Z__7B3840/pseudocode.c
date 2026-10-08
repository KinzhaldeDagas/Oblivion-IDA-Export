DistantLODShaderProperty::CachedGeometry *__thiscall DistantLODShaderProperty::CachedGeometry::`scalar deleting destructor'(
        DistantLODShaderProperty::CachedGeometry *this,
        char a2)
{
  DistantLODShaderProperty::CachedGeometry::~CachedGeometry(this); /*0x7b3843*/
  if ( (a2 & 1) != 0 ) /*0x7b384d*/
    FormHeapFree((unsigned int)this); /*0x7b3850*/
  return this; /*0x7b385a*/
}
