// Updates global SpeedTree leaf wind scalar constants: RockPArams, RsutleParams, and accumulative phase/scalar globals flt_B4672C/flt_B46730.
void __cdecl OB_SpeedTreeLeafShader_UpdateWindScalars_010201A0(float a1, float a2, float a3, float a4)
{
  OB_ShaderConstantStorage_010201A0[0x259] = a1; /*0x7f0214*/
  OB_ShaderConstantStorage_010201A0[0x25D] = a2; /*0x7f021e*/
  OB_ShaderConstantStorage_010201A0[0x246] = OB_ShaderConstantStorage_010201A0[0x246] + a3; /*0x7f022e*/
  OB_ShaderConstantStorage_010201A0[0x247] = OB_ShaderConstantStorage_010201A0[0x247] + a4; /*0x7f023e*/
}
