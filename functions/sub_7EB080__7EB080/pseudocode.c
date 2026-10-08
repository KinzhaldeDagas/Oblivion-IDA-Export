// CustomAnimSupport evidence: HitShader Enum event ultimately triggers shader/effect strength here.
void __cdecl sub_7EB080(float a1)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-4h]

  if ( byte_B2D91C ) /*0x7eb081*/
  {
    v2 = (a1 - 1.0) * dbl_A2FC80 + 1.0; /*0x7eb09e*/
    v1 = a1 * OB_ShaderConstantStorage_010201A0[0xC5]; /*0x7eb0a1*/
    if ( OB_ShaderConstantStorage_010201A0[0xC4] > v1 ) /*0x7eb0b4*/
      v1 = OB_ShaderConstantStorage_010201A0[0xC4]; /*0x7eb0b6*/
    OB_ShaderConstantStorage_010201A0[0xC4] = v1; /*0x7eb0bc*/
    OB_ShaderConstantStorage_010201A0[0xC3] = v2; /*0x7eb0c5*/
    flt_B2D918 = v2; /*0x7eb0cb*/
  }
}
