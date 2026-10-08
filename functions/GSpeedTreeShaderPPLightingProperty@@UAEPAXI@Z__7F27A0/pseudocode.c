SpeedTreeShaderPPLightingProperty *__thiscall SpeedTreeShaderPPLightingProperty::`scalar deleting destructor'(
        SpeedTreeShaderPPLightingProperty *this,
        char a2)
{
  OB_SpeedTreeShaderPPLightingProperty_dtor_010201A0(this); /*0x7f27a3*/
  if ( (a2 & 1) != 0 ) /*0x7f27ad*/
    FormHeapFree((unsigned int)this); /*0x7f27b0*/
  return this; /*0x7f27ba*/
}
