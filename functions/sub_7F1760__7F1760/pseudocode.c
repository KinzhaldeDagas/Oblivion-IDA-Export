// Updates one global SpeedTree wind matrix. Builds yaw/pitch rotation, transposes it, writes WindMatrixes + 0x40*index; valid indices are 0..3.
char __cdecl OB_SpeedTreeLeafShader_SetWindMatrix_010201A0(unsigned int a1, int a2, int a3)
{
  float v4[16]; // [esp+18h] [ebp-40h] BYREF

  if ( a1 >= 4 ) /*0x7f176b*/
    return 0; /*0x7f176d*/
  v4[0xE] = 0.0; /*0x7f1777*/
  v4[0xD] = 0.0; /*0x7f177e*/
  v4[0xC] = 0.0; /*0x7f1786*/
  v4[0xB] = 0.0; /*0x7f178a*/
  v4[9] = 0.0; /*0x7f178e*/
  v4[8] = 0.0; /*0x7f1792*/
  v4[7] = 0.0; /*0x7f1796*/
  v4[6] = 0.0; /*0x7f179a*/
  v4[4] = 0.0; /*0x7f179e*/
  v4[3] = 0.0; /*0x7f17a2*/
  v4[2] = 0.0; /*0x7f17a6*/
  v4[1] = 0.0; /*0x7f17aa*/
  v4[0xF] = 1.0; /*0x7f17b0*/
  v4[0xA] = 1.0; /*0x7f17b4*/
  v4[5] = 1.0; /*0x7f17b8*/
  v4[0] = 1.0; /*0x7f17bc*/
  D3DXMatrixRotationYawPitchRoll_0((int)v4, a2, a3, COERCE_INT(0.0)); /*0x7f17d4*/
  D3DXMatrixTranspose_0((int)v4, (int)v4); /*0x7f17e1*/
  qmemcpy(&OB_ShaderConstantStorage_010201A0[0x10 * a1 + 0x269], v4, 0x40u); /*0x7f17f8*/
  return 1; /*0x7f176f*/
}
