// Verified (Oblivion): returns 1 when the amplitude field at TESEffectShader+0x64 is nonpositive; otherwise returns sin(2π * activeElapsedSeconds * frequency at +0x68) * amplitude. TESEffectShader_AnimateTextureEffect multiplies edge alpha by (1 + this pulse) and clamps the result. Edge-alpha pulse role is direct; field names are Probable from Fallout's corresponding EffectShaderData layout.
float __thiscall TESEffectShader_CalculateEdgeEffectPulse(TESEffectShader *this, float activeElapsedSeconds)
{
  float activeElapsedSecondsa; // [esp+8h] [ebp+4h]
  float activeElapsedSecondsb; // [esp+8h] [ebp+4h]

  if ( this->Data.fEdgeAlphaPulseAmplitude <= 0.0 ) /*0x4acd9d*/
  {
    return 1.0; /*0x4acdd0*/
  }
  else
  {
    activeElapsedSecondsa = unk_B3F9A0 * activeElapsedSeconds * this->Data.fEdgeAlphaPulseFrequency; /*0x4acdac*/
    activeElapsedSecondsb = sin(activeElapsedSecondsa); /*0x4acdb9*/
    return activeElapsedSecondsb * this->Data.fEdgeAlphaPulseAmplitude; /*0x4acdc9*/
  }
}
