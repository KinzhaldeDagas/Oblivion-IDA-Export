BSShaderPPLightingProperty *__thiscall BSShaderPPLightingProperty::`scalar deleting destructor'(
        BSShaderPPLightingProperty *this,
        char a2)
{
  BSShaderPPLightingProperty::~BSShaderPPLightingProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
