// Lighting30 per-light pixel constant writer. For lightSlot 0..19 writes four floats to ConstantGroup global slot 0x47D+8*slot, mapping slot 0 to pixel c9 (LightColor), slot 1 to c11, and so on.
float *__cdecl Lighting30Shader_WriteLightColorConstant(unsigned int lightSlot, float x, float y, float z, float w)
{
  float *result; // eax

  result = (float *)lightSlot; /*0x7fab00*/
  if ( lightSlot <= 0x13 ) /*0x7fab07*/
  {
    result = &OB_ShaderConstantStorage_010201A0[8 * lightSlot + 0x47D];// Write LightColor bank: slot 0 maps to pixel c9, slot 1 to c11, through slot 19. /*0x7fab14*/
    *result = x; /*0x7fab19*/
    result[1] = y; /*0x7fab1f*/
    result[2] = z; /*0x7fab26*/
    result[3] = w; /*0x7fab29*/
  }
  return result; /*0x7fab2c*/
}
