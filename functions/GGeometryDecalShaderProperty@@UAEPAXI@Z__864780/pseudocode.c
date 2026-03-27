GeometryDecalShaderProperty *__thiscall GeometryDecalShaderProperty::`scalar deleting destructor'(
        GeometryDecalShaderProperty *this,
        char a2)
{
  *(_DWORD *)this = &GeometryDecalShaderProperty::`vftable';
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
