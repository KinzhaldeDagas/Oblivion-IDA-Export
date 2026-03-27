BSShaderPPLightingProperty::TangentSpaceData *__thiscall BSShaderPPLightingProperty::TangentSpaceData::`scalar deleting destructor'(
        BSShaderPPLightingProperty::TangentSpaceData *this,
        char a2)
{
  BSShaderPPLightingProperty::TangentSpaceData::~TangentSpaceData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
