SpeedTreeShaderLightingProperty *__thiscall SpeedTreeShaderLightingProperty::`scalar deleting destructor'(
        SpeedTreeShaderLightingProperty *this,
        char a2)
{
  SpeedTreeShaderLightingProperty::~SpeedTreeShaderLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
