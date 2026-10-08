void __stdcall sub_848C40(float *a1)
{
  double v1; // st7
  double v2; // st6
  double v3; // st5
  double v4; // st4
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+14h] [ebp+4h]

  v1 = a1[0x10]; /*0x848c53*/
  v2 = a1[0x12]; /*0x848c6a*/
  v3 = a1[0x11]; /*0x848c71*/
  if ( stru_B3FA90.x != v1 || stru_B3FA90.y != v3 || stru_B3FA90.z != v2 ) /*0x848c97*/
  {
    if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x848c9d*/
    {
      if ( OB_RendererGlobalState_010201A0.pad_1DB[0] ) /*0x848ca6*/
        v4 = unk_B4320C; /*0x848caf*/
      else
        v4 = unk_B43208; /*0x848cb7*/
      v11 = v4; /*0x848cbd*/
      v5 = v1 * v11; /*0x848ccb*/
      v7 = v3 * v11; /*0x848cd0*/
      v9 = v11 * v2; /*0x848cd6*/
      v1 = v5; /*0x848ce5*/
      v3 = v7; /*0x848ce7*/
      v2 = v9; /*0x848ce7*/
    }
    v6 = v1 + flt_B46498; /*0x848d15*/
    v8 = v3 + flt_B4649C; /*0x848d20*/
    v10 = v2 + flt_B464A0[0]; /*0x848d28*/
    if ( !OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x848c9d*/
    {
      if ( v6 >= 1.0 ) /*0x848d38*/
        v6 = 1.0; /*0x848d3a*/
      if ( v8 >= 1.0 ) /*0x848d46*/
        v8 = 1.0; /*0x848d48*/
      if ( v10 >= 1.0 ) /*0x848d55*/
        v10 = 1.0; /*0x848d57*/
    }
    OB_BSShader_SetSharedFloat4Constant_010201A0(0, LODWORD(v6), LODWORD(v8), LODWORD(v10), LODWORD(flt_B464A0[1])); /*0x848d7c*/
  }
}
