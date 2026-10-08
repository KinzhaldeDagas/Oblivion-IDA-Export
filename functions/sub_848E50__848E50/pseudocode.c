int __stdcall sub_848E50(float *a1)
{
  float v2; // ecx
  float v3; // edx
  int result; // eax
  float v5; // ecx
  double v6; // st6
  float v7; // [esp+0h] [ebp-24h]
  float v8; // [esp+8h] [ebp-1Ch]
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+14h] [ebp-10h]
  float v11; // [esp+18h] [ebp-Ch]
  float v12; // [esp+28h] [ebp+4h]

  if ( a1 ) /*0x848e59*/
  {
    v7 = a1[0xB]; /*0x848e62*/
    v12 = a1[0xC]; /*0x848e68*/
    if ( v12 == 0.0 && 0.0 == v7 ) /*0x848e8b*/
    {
      OB_ShaderConstantStorage_010201A0[0x209] = flt_A93350; /*0x848e9f*/
      OB_ShaderConstantStorage_010201A0[0x20A] = 0.0; /*0x848eb4*/
      v2 = *(float *)&dword_B25AD0; /*0x848ec2*/
      OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x848ec8*/
      v3 = *(float *)&dword_B25AD4; /*0x848ece*/
      OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x848ed4*/
      result = dword_B25AD8; /*0x848ed9*/
      OB_ShaderConstantStorage_010201A0[0x20D] = v2; /*0x848ede*/
      v5 = *(float *)&dword_B25ADC; /*0x848ee4*/
      OB_ShaderConstantStorage_010201A0[0x20E] = v3; /*0x848eea*/
      OB_ShaderConstantStorage_010201A0[0x20F] = *(float *)&result; /*0x848ef0*/
      OB_ShaderConstantStorage_010201A0[0x210] = v5; /*0x848ef5*/
    }
    else
    {
      v11 = v12 - v7; /*0x848f1a*/
      v8 = a1[9]; /*0x848f1e*/
      v9 = a1[0xA]; /*0x848f2a*/
      v6 = a1[8]; /*0x848f36*/
      OB_ShaderConstantStorage_010201A0[0x209] = v12; /*0x848f3a*/
      v10 = v6; /*0x848f44*/
      OB_ShaderConstantStorage_010201A0[0x20A] = v11; /*0x848f4c*/
      OB_ShaderConstantStorage_010201A0[0x20B] = 0.0; /*0x848f5d*/
      OB_ShaderConstantStorage_010201A0[0x20C] = 0.0; /*0x848f6b*/
      OB_ShaderConstantStorage_010201A0[0x20D] = v10; /*0x848f79*/
      OB_ShaderConstantStorage_010201A0[0x20E] = v8; /*0x848f82*/
      OB_ShaderConstantStorage_010201A0[0x20F] = v9; /*0x848f88*/
      OB_ShaderConstantStorage_010201A0[0x210] = 0.0; /*0x848f8e*/
      *(float *)&result = 0.0; /*0x848f7e*/
    }
  }
  return result; /*0x848efb*/
}
