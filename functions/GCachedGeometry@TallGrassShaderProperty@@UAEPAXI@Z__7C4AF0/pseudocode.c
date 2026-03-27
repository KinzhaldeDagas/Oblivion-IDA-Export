TallGrassShaderProperty::CachedGeometry *__thiscall TallGrassShaderProperty::CachedGeometry::`scalar deleting destructor'(
        TallGrassShaderProperty::CachedGeometry *this,
        char a2)
{
  TallGrassShaderProperty::CachedGeometry::~CachedGeometry(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
