BSShaderLightingProperty *__thiscall BSShaderLightingProperty::`scalar deleting destructor'(
        BSShaderLightingProperty *this,
        char a2)
{
  BSShaderLightingProperty::~BSShaderLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
