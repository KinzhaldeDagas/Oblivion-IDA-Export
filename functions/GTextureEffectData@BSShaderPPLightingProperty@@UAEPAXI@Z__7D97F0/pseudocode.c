BSShaderPPLightingProperty::TextureEffectData *__thiscall BSShaderPPLightingProperty::TextureEffectData::`scalar deleting destructor'(
        BSShaderPPLightingProperty::TextureEffectData *this,
        char a2)
{
  BSShaderPPLightingProperty::TextureEffectData::~TextureEffectData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
