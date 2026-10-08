BSShaderPPLightingProperty::TangentSpaceData *__thiscall BSShaderPPLightingProperty::TangentSpaceData::`scalar deleting destructor'(
        BSShaderPPLightingProperty::TangentSpaceData *this,
        char a2)
{
  BSShaderPPLightingProperty::TangentSpaceData::~TangentSpaceData(this); /*0x7d7883*/
  if ( (a2 & 1) != 0 ) /*0x7d788d*/
    FormHeapFree((unsigned int)this); /*0x7d7890*/
  return this; /*0x7d789a*/
}
