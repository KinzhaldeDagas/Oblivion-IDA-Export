int __stdcall sub_7C8520(float *a1)
{
  int result; // eax
  float v2; // [esp+14h] [ebp-8Ch] BYREF
  float v3; // [esp+18h] [ebp-88h]
  float v4; // [esp+1Ch] [ebp-84h]
  float v5[16]; // [esp+20h] [ebp-80h] BYREF
  NiTransform v6; // [esp+60h] [ebp-40h] BYREF
  _BYTE v7[12]; // [esp+94h] [ebp-Ch] BYREF

  v5[0xB] = 0.0;
  v5[7] = 0.0;
  v5[3] = 0.0;
  sub_718A80(a1, &v6);
  v5[0] = v6.rot.data[0][0] * v6.scale;
  v5[1] = v6.rot.data[1][0] * v6.scale;
  v5[2] = v6.rot.data[2][0] * v6.scale;
  v5[4] = v6.rot.data[0][1] * v6.scale;
  v5[5] = v6.rot.data[1][1] * v6.scale;
  v5[6] = v6.rot.data[2][1] * v6.scale;
  v5[8] = v6.rot.data[0][2] * v6.scale;
  v5[9] = v6.rot.data[1][2] * v6.scale;
  v5[0xA] = v6.scale * v6.rot.data[2][2];
  v5[0xC] = v6.pos.x;
  v5[0xD] = v6.pos.y;
  v5[0xE] = v6.pos.z;
  v5[0xF] = 1.0;
  v2 = -flt_B465A8;
  v3 = -flt_B465AC;
  v4 = -flt_B465B0;
  D3DXVec3TransformNormal_0(v7, &v2, v5);
  result = D3DXVec3Normalize_0(&v2, v7);
  flt_B454D8 = v2;
  flt_B454DC = v3;
  flt_B454E0 = v4;
  flt_B454E4 = 0.0;
  return result;
}
