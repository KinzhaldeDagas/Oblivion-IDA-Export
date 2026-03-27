DistantLODShaderProperty::CachedGeometry *__thiscall DistantLODShaderProperty::CachedGeometry::`scalar deleting destructor'(
        DistantLODShaderProperty::CachedGeometry *this,
        char a2)
{
  DistantLODShaderProperty::CachedGeometry::~CachedGeometry(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
