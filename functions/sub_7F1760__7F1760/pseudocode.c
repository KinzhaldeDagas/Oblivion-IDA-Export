char __cdecl sub_7F1760(unsigned int a1, float a2, float a3)
{
  float v4[16]; // [esp+18h] [ebp-40h] BYREF

  if ( a1 >= 4 )
    return 0;
  v4[0xE] = 0.0;
  v4[0xD] = 0.0;
  v4[0xC] = 0.0;
  v4[0xB] = 0.0;
  v4[9] = 0.0;
  v4[8] = 0.0;
  v4[7] = 0.0;
  v4[6] = 0.0;
  v4[4] = 0.0;
  v4[3] = 0.0;
  v4[2] = 0.0;
  v4[1] = 0.0;
  v4[0xF] = 1.0;
  v4[0xA] = 1.0;
  v4[5] = 1.0;
  v4[0] = 1.0;
  D3DXMatrixRotationYawPitchRoll_0(v4, LODWORD(a2), LODWORD(a3), 0.0);
  D3DXMatrixTranspose_0(v4, v4);
  qmemcpy((char *)&WindMatrixes + 0x40 * a1, v4, 0x40u);
  return 1;
}
