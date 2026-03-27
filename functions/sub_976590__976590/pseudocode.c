double __thiscall sub_976590(int this, float *a2, float *a3, float a4)
{
  double v4; // st7
  double v5; // st6
  float v7; // [esp+4h] [ebp-3Ch]
  float v8; // [esp+4h] [ebp-3Ch]
  float v9; // [esp+8h] [ebp-38h]
  float v10; // [esp+8h] [ebp-38h]
  float v11; // [esp+Ch] [ebp-34h]
  float v12; // [esp+Ch] [ebp-34h]
  float v13[3]; // [esp+10h] [ebp-30h] BYREF
  float v14[9]; // [esp+1Ch] [ebp-24h] BYREF
  float v15; // [esp+44h] [ebp+4h]
  float v17; // [esp+4Ch] [ebp+Ch]

  v4 = a4;
  v7 = *a2 * a4;
  v9 = a2[1] * a4;
  v11 = a2[2] * a4;
  v15 = *(float *)(*(_DWORD *)(this + 0x38) + 8) + v9;
  v17 = *(float *)(*(_DWORD *)(this + 0x38) + 0xC) + v11;
  v5 = *(float *)(*(_DWORD *)(this + 0x38) + 4) + v7;
  qmemcpy(v14, (const void *)(this + 0x3C), sizeof(v14));
  v13[0] = v5;
  v13[1] = v15;
  v13[2] = v17;
  v8 = *a3 * v4;
  v10 = a3[1] * v4;
  v12 = v4 * a3[2];
  v14[0] = v8 + v14[0];
  v14[1] = v14[1] + v10;
  v14[2] = v14[2] + v12;
  return (float)(sub_975DF0(v13, v14, (float *)(this + 0x64), (float *)(this + 0x68)) * *(float *)(this + 0x60)
               - dbl_A2F928);
}
