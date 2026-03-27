int __thiscall sub_80DDA0(char **this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  float v11; // edx
  float v12; // eax
  double v13; // st7
  double v14; // st7
  float v16; // [esp+30h] [ebp-BCh]
  float v17; // [esp+34h] [ebp-B8h]
  float v18; // [esp+3Ch] [ebp-B0h] BYREF
  float v19; // [esp+40h] [ebp-ACh]
  float v20; // [esp+44h] [ebp-A8h]
  float v21[3]; // [esp+48h] [ebp-A4h] BYREF
  float v22[3]; // [esp+54h] [ebp-98h] BYREF
  float v23[16]; // [esp+60h] [ebp-8Ch] BYREF
  _BYTE v24[12]; // [esp+A0h] [ebp-4Ch] BYREF
  _BYTE v25[64]; // [esp+ACh] [ebp-40h] BYREF

  sub_765480((NiDX9Renderer *)*(this + 5), a8, 0);
  v23[0] = a8[0xC] * *a8;
  v23[1] = a8[3] * a8[0xC];
  v23[2] = a8[6] * a8[0xC];
  v23[4] = a8[1] * a8[0xC];
  v23[5] = a8[4] * a8[0xC];
  v23[6] = a8[7] * a8[0xC];
  v23[8] = a8[2] * a8[0xC];
  v23[9] = a8[5] * a8[0xC];
  v23[0xA] = a8[8] * a8[0xC];
  v23[0xC] = a8[9];
  v23[0xD] = a8[0xA];
  v23[0xE] = a8[0xB];
  v23[3] = 0.0;
  v23[7] = 0.0;
  v23[0xB] = 0.0;
  v23[0xF] = 1.0;
  D3DXMatrixInverse_0(v25, 0, v23);
  v18 = -flt_B465A8;
  v19 = -flt_B465AC;
  v20 = -flt_B465B0;
  D3DXVec3TransformNormal_0(v24, &v18, v25);
  D3DXVec3Normalize_0(&v18, v24);
  v11 = v19;
  v12 = v20;
  *((float *)this + 0x2A) = v18;
  *((float *)this + 0x2B) = v11;
  *((float *)this + 0x2C) = v12;
  *((float *)this + 0x2D) = 0.0;
  v22[0] = flt_B46528;
  v22[1] = flt_B4652C;
  v22[2] = flt_B46530;
  D3DXVec3TransformCoord_0(v21, v22, v25);
  v13 = v21[1];
  *(this + 0x26) = (char *)LODWORD(v21[0]);
  v16 = v13;
  v14 = v21[2];
  *((float *)this + 0x27) = v16;
  v17 = v14;
  *((float *)this + 0x28) = v17;
  *((float *)this + 0x29) = 1.0;
  return 0;
}
