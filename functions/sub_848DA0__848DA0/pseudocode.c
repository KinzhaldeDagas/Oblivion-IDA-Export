float *__stdcall sub_848DA0(float *a1)
{
  double v1; // st7
  float v3; // [esp+0h] [ebp-1Ch]
  float v4; // [esp+4h] [ebp-18h]
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+20h] [ebp+4h]

  v3 = a1[0x10]; /*0x848db7*/
  v4 = a1[0x11]; /*0x848dba*/
  v5 = a1[0x12]; /*0x848dbe*/
  if ( OB_RendererGlobalState_010201A0.bHighDynamicRangeMode ) /*0x848da3*/
  {
    if ( OB_RendererGlobalState_010201A0.pad_1DB[0] ) /*0x848dc4*/
      v1 = unk_B4320C; /*0x848dcd*/
    else
      v1 = unk_B43208; /*0x848dd5*/
    v6 = v1; /*0x848ddb*/
    v3 = v6 * v3; /*0x848de8*/
    v4 = v6 * v4; /*0x848df1*/
    v5 = v6 * v5; /*0x848df9*/
  }
  return OB_BSShader_SetSharedFloat4Constant_010201A0( /*0x848e44*/
           0x19u,
           LODWORD(v3),
           LODWORD(v4),
           LODWORD(v5),
           COERCE_UNSIGNED_INT(1.0));
}
