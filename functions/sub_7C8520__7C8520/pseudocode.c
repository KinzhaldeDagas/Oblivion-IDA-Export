int __stdcall sub_7C8520(float *a1)
{
  int result; // eax
  float v2; // [esp+14h] [ebp-8Ch] BYREF
  float v3; // [esp+18h] [ebp-88h]
  float v4; // [esp+1Ch] [ebp-84h]
  float v5[16]; // [esp+20h] [ebp-80h] BYREF
  NiTransform v6; // [esp+60h] [ebp-40h] BYREF
  _BYTE v7[12]; // [esp+94h] [ebp-Ch] BYREF

  v5[0xB] = 0.0; /*0x7c8540*/
  v5[7] = 0.0; /*0x7c854c*/
  v5[3] = 0.0; /*0x7c8558*/
  sub_718A80(a1, &v6); /*0x7c8576*/
  v5[0] = v6.rot.data[0][0] * v6.scale; /*0x7c859b*/
  v5[1] = v6.rot.data[1][0] * v6.scale; /*0x7c85a5*/
  v5[2] = v6.rot.data[2][0] * v6.scale; /*0x7c85af*/
  v5[4] = v6.rot.data[0][1] * v6.scale; /*0x7c85b9*/
  v5[5] = v6.rot.data[1][1] * v6.scale; /*0x7c85c3*/
  v5[6] = v6.rot.data[2][1] * v6.scale; /*0x7c85cd*/
  v5[8] = v6.rot.data[0][2] * v6.scale; /*0x7c85d7*/
  v5[9] = v6.rot.data[1][2] * v6.scale; /*0x7c85e1*/
  v5[0xA] = v6.scale * v6.rot.data[2][2]; /*0x7c85e9*/
  v5[0xC] = v6.pos.x; /*0x7c85f1*/
  v5[0xD] = v6.pos.y; /*0x7c85fc*/
  v5[0xE] = v6.pos.z; /*0x7c8607*/
  v5[0xF] = 1.0; /*0x7c860d*/
  v2 = -flt_B464A0[0x42]; /*0x7c8619*/
  v3 = -flt_B464A0[0x43]; /*0x7c8625*/
  v4 = -flt_B464A0[0x44]; /*0x7c8631*/
  D3DXVec3TransformNormal_0((int)v7, (int)&v2, (int)v5); /*0x7c8635*/
  result = D3DXVec3Normalize_0((int)&v2, (int)v7); /*0x7c8647*/
  unk_B454D8 = v2; /*0x7c864f*/
  unk_B454DC = v3; /*0x7c8659*/
  unk_B454E0 = v4; /*0x7c8663*/
  unk_B454E4 = 0.0; /*0x7c866b*/
  return result; /*0x7c8671*/
}
