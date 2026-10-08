// Verified (Oblivion): returns 1 when the amplitude field at TESEffectShader+0x3C is nonpositive; otherwise returns sin(2π * activeElapsedSeconds * frequency at +0x40) * amplitude. TESEffectShader_AnimateTextureEffect multiplies fill alpha by (1 + this pulse) and clamps the result. Fill-alpha pulse role is direct; field names are Probable from Fallout's corresponding EffectShaderData layout.
float __thiscall TESEffectShader_CalculateFillEffectPulse(TESEffectShader *this, float activeElapsedSeconds)
{
  float activeElapsedSecondsa; // [esp+8h] [ebp+4h]
  float activeElapsedSecondsb; // [esp+8h] [ebp+4h]

  if ( this->Data.fFillAlphaPulseAmplitude <= 0.0 ) /*0x4acded*/
  {
    return 1.0; /*0x4ace20*/
  }
  else
  {
    activeElapsedSecondsa = unk_B3F9A0 * activeElapsedSeconds * this->Data.fFillAlphaPulseFrequency; /*0x4acdfc*/
    activeElapsedSecondsb = sin(activeElapsedSecondsa); /*0x4ace09*/
    return activeElapsedSecondsb * this->Data.fFillAlphaPulseAmplitude; /*0x4ace19*/
  }
}
