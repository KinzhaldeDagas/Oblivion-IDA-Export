// Verified (Oblivion): animates fillColor_2C into currentFillColor_0C and edgeColor_3C into currentEdgeColor_1C, including independent alpha timing/pulse, then accumulates textureOffsetU_4C/textureOffsetV_50. Fallout's NiColorA names CurrentFillColor/CurrentRimColor and their base FillColor/RimColor at the same offsets, corroborating these grouped fields; Oblivion's source fields use Edge terminology.
void __thiscall TESEffectShader_AnimateTextureEffect(
        TESEffectShader *this,
        OblivionTextureEffectData *textureEffectData,
        float deltaSeconds,
        float visualElapsedSeconds,
        float activeElapsedSeconds,
        bool bFinished)
{
  float fillColorBaseG_30; // ecx
  float fillColorBaseB_34; // edx
  float fillAlphaCurrent_38; // eax
  double v11; // st7
  double fillAlphaOutput_18; // st7
  bool v13; // c0
  bool v14; // c3
  float edgeColorBaseG_40; // edx
  float edgeColorBaseB_44; // eax
  float edgeAlphaCurrent_48; // ecx
  double v18; // st7
  double edgeAlphaOutput_28; // st7
  float textureEffectDataa; // [esp+34h] [ebp+4h]
  float textureEffectDatab; // [esp+34h] [ebp+4h]
  float visualElapsedSecondsa; // [esp+3Ch] [ebp+Ch]
  float visualElapsedSecondsb; // [esp+3Ch] [ebp+Ch]

  if ( textureEffectData ) /*0x4adc9a*/
  {
    textureEffectData->? = TESEffectShader_AnimateValue( /*0x4adce9*/
                             textureEffectData->?,
                             deltaSeconds,
                             visualElapsedSeconds,
                             bFinished,
                             this->Data.fFillAlphaFadeInTime,
                             this->Data.fFillAlphaFadeOutTime,
                             this->Data.fFillAlphaFullTime,
                             this->Data.fFillAlphaFullPercent,
                             this->Data.fFillAlphaPersistentPercent);
    fillColorBaseG_30 = textureEffectData->?; /*0x4adcef*/
    fillColorBaseB_34 = textureEffectData->?; /*0x4adcf6*/
    textureEffectData->currentFillColor_0C = textureEffectData->fillColor_2C; /*0x4adcf9*/
    fillAlphaCurrent_38 = textureEffectData->?; /*0x4adcfc*/
    textureEffectData->? = fillColorBaseG_30; /*0x4adcff*/
    textureEffectData->? = fillColorBaseB_34; /*0x4add03*/
    textureEffectData->? = fillAlphaCurrent_38; /*0x4add0b*/
    textureEffectDataa = TESEffectShader_CalculateFillEffectPulse(this, activeElapsedSeconds) * textureEffectData->? /*0x4add19*/
                       + textureEffectData->?;
    v11 = textureEffectDataa; /*0x4add1d*/
    textureEffectData->? = textureEffectDataa; /*0x4add21*/
    if ( textureEffectDataa < 0.0 ) /*0x4add2f*/
      textureEffectDataa = 0.0; /*0x4add31*/
    if ( textureEffectDataa <= dbl_A2F928 ) /*0x4add4e*/
    {
      v13 = v11 > 0.0; /*0x4add5c*/
      v14 = 0.0 == v11; /*0x4add5c*/
      fillAlphaOutput_18 = 0.0; /*0x4add60*/
      if ( v13 || v14 ) /*0x4add62*/
        fillAlphaOutput_18 = textureEffectData->?; /*0x4add69*/
    }
    else
    {
      fillAlphaOutput_18 = 1.0; /*0x4add56*/
    }
    textureEffectDatab = fillAlphaOutput_18; /*0x4add6c*/
    textureEffectData->? = textureEffectDatab; /*0x4add79*/
    textureEffectData->? = TESEffectShader_AnimateValue( /*0x4addbd*/
                             textureEffectData->?,
                             deltaSeconds,
                             visualElapsedSeconds,
                             bFinished,
                             this->Data.fEdgeAlphaFadeInTime,
                             this->Data.fEdgeAlphaFadeOutTime,
                             this->Data.fEdgeAlphaFullTime,
                             this->Data.fEdgeAlphaFullPercent,
                             this->Data.fEdgeAlphaPersistentPercent);
    edgeColorBaseG_40 = textureEffectData->?; /*0x4addc3*/
    edgeColorBaseB_44 = textureEffectData->?; /*0x4addca*/
    textureEffectData->currentEdgeColor_1C = textureEffectData->edgeColor_3C; /*0x4addcd*/
    edgeAlphaCurrent_48 = textureEffectData->?; /*0x4addd0*/
    textureEffectData->? = edgeColorBaseG_40; /*0x4addd3*/
    textureEffectData->? = edgeColorBaseB_44; /*0x4addd6*/
    textureEffectData->? = edgeAlphaCurrent_48; /*0x4addda*/
    visualElapsedSecondsa = TESEffectShader_CalculateEdgeEffectPulse(this, activeElapsedSeconds) * textureEffectData->? /*0x4addee*/
                          + textureEffectData->?;
    v18 = visualElapsedSecondsa; /*0x4addf2*/
    textureEffectData->? = visualElapsedSecondsa; /*0x4addf6*/
    if ( visualElapsedSecondsa < 0.0 ) /*0x4ade02*/
      visualElapsedSecondsa = 0.0; /*0x4ade06*/
    if ( visualElapsedSecondsa <= dbl_A2F928 ) /*0x4ade23*/
    {
      if ( v18 >= 0.0 ) /*0x4ade34*/
        edgeAlphaOutput_28 = textureEffectData->?; /*0x4ade3a*/
      else
        edgeAlphaOutput_28 = 0.0; /*0x4ade36*/
    }
    else
    {
      edgeAlphaOutput_28 = 1.0; /*0x4ade29*/
    }
    visualElapsedSecondsb = edgeAlphaOutput_28; /*0x4ade3d*/
    textureEffectData->? = visualElapsedSecondsb; /*0x4ade45*/
    textureEffectData->textureOffsetU_4C = this->Data.fFillTextureUAnimSpeed * deltaSeconds /*0x4ade5a*/
                                         + textureEffectData->textureOffsetU_4C;
    textureEffectData->textureOffsetV_50 = deltaSeconds * this->Data.fFillTextureVAnimSpeed /*0x4ade63*/
                                         + textureEffectData->textureOffsetV_50;
  }
}
