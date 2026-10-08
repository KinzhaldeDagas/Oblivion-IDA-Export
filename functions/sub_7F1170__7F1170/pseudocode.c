// Leaf shader global leafData updater: copies camera/right/up style vectors from dword_B43124 into B46758..B46774.
int __cdecl OB_SpeedTreeLeafShader_UpdateBillboardAxes_010201A0()
{
  int result; // eax
  float v1; // [esp+4h] [ebp-14h]
  float v2; // [esp+8h] [ebp-10h]
  float v3; // [esp+Ch] [ebp-Ch]
  float v4; // [esp+10h] [ebp-8h]
  float v5; // [esp+14h] [ebp-4h]

  result = unk_B43124; /*0x7f1173*/
  v1 = *(float *)(unk_B43124 + 0x74); /*0x7f1181*/
  v2 = *(float *)(unk_B43124 + 0x80); /*0x7f118b*/
  v3 = *(float *)(unk_B43124 + 0x6C); /*0x7f1192*/
  v4 = *(float *)(unk_B43124 + 0x78); /*0x7f1199*/
  v5 = *(float *)(unk_B43124 + 0x84); /*0x7f11a3*/
  OB_ShaderConstantStorage_010201A0[0x255] = *(float *)(unk_B43124 + 0x68); /*0x7f11aa*/
  OB_ShaderConstantStorage_010201A0[0x256] = v1; /*0x7f11b4*/
  OB_ShaderConstantStorage_010201A0[0x257] = v2; /*0x7f11be*/
  OB_ShaderConstantStorage_010201A0[0x258] = 0.0; /*0x7f11c6*/
  OB_ShaderConstantStorage_010201A0[0x251] = v3; /*0x7f11d0*/
  OB_ShaderConstantStorage_010201A0[0x252] = v4; /*0x7f11da*/
  OB_ShaderConstantStorage_010201A0[0x253] = v5; /*0x7f11e4*/
  OB_ShaderConstantStorage_010201A0[0x254] = 0.0; /*0x7f11ea*/
  return result; /*0x7f11f0*/
}
