SpeedTreeShaderPPLightingProperty *__thiscall SpeedTreeShaderPPLightingProperty::`scalar deleting destructor'(
        SpeedTreeShaderPPLightingProperty *this,
        char a2)
{
  SpeedTreeShaderPPLightingProperty::~SpeedTreeShaderPPLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
