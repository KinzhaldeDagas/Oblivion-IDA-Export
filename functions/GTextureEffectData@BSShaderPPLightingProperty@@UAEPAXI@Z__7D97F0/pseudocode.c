BSShaderPPLightingProperty::TextureEffectData *__thiscall BSShaderPPLightingProperty::TextureEffectData::`scalar deleting destructor'(
        BSShaderPPLightingProperty::TextureEffectData *this,
        char a2)
{
  BSShaderPPLightingProperty::TextureEffectData::~TextureEffectData(this); /*0x7d97f3*/
  if ( (a2 & 1) != 0 ) /*0x7d97fd*/
    FormHeapFree((unsigned int)this); /*0x7d9800*/
  return this; /*0x7d980a*/
}
