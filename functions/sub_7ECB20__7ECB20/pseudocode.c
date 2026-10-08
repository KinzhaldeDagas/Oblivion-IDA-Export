//
// DX11 source-state audit 2026-10-01: this GENERIC bank reset writes color B464A8..B46527 and data B465A8..B46627 (8 float4 rows each), plus B46138..B46157 and one-time default B466C8..B466D8. It does NOT clear Lighting30 ConstantGroup color/data pairs B47008/B47018+20h*slot. Therefore unvisited Lighting30 slots must retain their prior current source words; do not reset them to generic defaults.
void __cdecl OB_BSShader_ResetLightConstantSlots_010201A0()
{
  double v0; // st7
  float v1; // ebx
  float v2; // ebp
  float v3; // esi
  int v4; // edx
  float v5; // edi
  float *v6; // eax
  float *v7; // eax

  if ( (LOBYTE(OB_ShaderConstantStorage_010201A0[0x231]) & 1) == 0 ) /*0x7ecb27*/
  {
    v0 = flt_A37080; /*0x7ecb29*/
    LODWORD(OB_ShaderConstantStorage_010201A0[0x231]) |= 1u; /*0x7ecb2f*/
    OB_ShaderConstantStorage_010201A0[0x22D] = v0; /*0x7ecb36*/
    OB_ShaderConstantStorage_010201A0[0x22E] = 0.0; /*0x7ecb3e*/
    OB_ShaderConstantStorage_010201A0[0x22F] = 0.0; /*0x7ecb44*/
    OB_ShaderConstantStorage_010201A0[0x230] = 0.0; /*0x7ecb4a*/
  }
  v1 = OB_ShaderConstantStorage_010201A0[0x22E]; /*0x7ecb51*/
  v2 = OB_ShaderConstantStorage_010201A0[0x22D]; /*0x7ecb58*/
  v3 = OB_ShaderConstantStorage_010201A0[0x230]; /*0x7ecb5f*/
  v4 = 0; /*0x7ecb65*/
  v5 = OB_ShaderConstantStorage_010201A0[0x22F]; /*0x7ecb6a*/
  OB_ShaderConstantStorage_010201A0[0xC9] = 0.0; /*0x7ecb70*/
  OB_ShaderConstantStorage_010201A0[0xCA] = 0.0; /*0x7ecb75*/
  OB_ShaderConstantStorage_010201A0[0xCB] = 0.0; /*0x7ecb7a*/
  OB_ShaderConstantStorage_010201A0[0xCC] = 0.0; /*0x7ecb7f*/
  OB_ShaderConstantStorage_010201A0[0xCD] = 0.0; /*0x7ecb84*/
  OB_ShaderConstantStorage_010201A0[0xCE] = 0.0; /*0x7ecb89*/
  OB_ShaderConstantStorage_010201A0[0xCF] = 0.0; /*0x7ecb8e*/
  OB_ShaderConstantStorage_010201A0[0xD0] = 0.0; /*0x7ecb93*/
  do /*0x7ecbf3*/
  {
    v6 = &OB_ShaderConstantStorage_010201A0[4 * (unsigned __int16)(v4 + 0x11) + 0x1A1];// Reset source light-vector slots 0..7. Slot 0 becomes (0.001,0,0,0), so this source bank is not stale after reset. /*0x7ecbac*/
    *v6 = v2; /*0x7ecbb1*/
    v6[1] = v1; /*0x7ecbb3*/
    v6[2] = v5; /*0x7ecbb9*/
    v6[3] = v3; /*0x7ecbbc*/
    v7 = &OB_ShaderConstantStorage_010201A0[4 * (unsigned __int16)(v4 + 1) + 0x1A1];// Reset shared diffuse slots 0..7 from dword_B25AD0..ADC = (0,0,0,1). Leaf c6/c7 are therefore black until present lights rebuild them. /*0x7ecbcb*/
    *(_DWORD *)v7 = dword_B25AD0; /*0x7ecbd0*/
    *((_DWORD *)v7 + 1) = dword_B25AD4; /*0x7ecbd8*/
    *((_DWORD *)v7 + 2) = dword_B25AD8; /*0x7ecbe1*/
    ++v4; /*0x7ecbea*/
    *((_DWORD *)v7 + 3) = dword_B25ADC; /*0x7ecbf0*/
  }
  while ( v4 < 8 ); /*0x7ecbf3*/
}
