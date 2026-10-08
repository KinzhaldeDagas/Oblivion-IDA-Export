// Lighting30 per-light pixel constant writer. Slot 0 maps to pixel c10 LightData. On the mode-5 point-light caster path, LightData.w is the underlying light +0xF8 range/control consumed by SM3026 as the view-space depth divisor.
float *__cdecl Lighting30Shader_WriteLightDataConstant(unsigned int lightSlot, float x, float y, float z, float w)
{
  float *result; // eax

  result = (float *)lightSlot; /*0x7faad0*/
  if ( lightSlot <= 0x13 ) /*0x7faad7*/
  {
    result = &OB_ShaderConstantStorage_010201A0[8 * lightSlot + 0x481];// LightData bank slot 0 is pixel c10. SM3026 consumes c10.w as its caster depth divisor. /*0x7faae4*/
    *result = x; /*0x7faae9*/
    result[1] = y; /*0x7faaef*/
    result[2] = z; /*0x7faaf6*/
    result[3] = w; /*0x7faaf9*/
  }
  return result; /*0x7faafc*/
}
