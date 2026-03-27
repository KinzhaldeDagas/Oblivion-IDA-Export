float *__thiscall sub_696460(float *this, float a2, void **a3)
{
  void **v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  void *v6; // edx
  _DWORD *v7; // eax
  float *v8; // eax
  double v9; // st7
  void *v10; // ecx
  void *v11; // ecx
  float *result; // eax
  int v13; // [esp+Ch] [ebp-4Ch]
  float v14; // [esp+Ch] [ebp-4Ch]
  float v15; // [esp+28h] [ebp-30h]
  float v16; // [esp+2Ch] [ebp-2Ch]
  float v17; // [esp+30h] [ebp-28h]
  float v18[9]; // [esp+34h] [ebp-24h] BYREF
  float v19; // [esp+60h] [ebp+8h]
  float v20; // [esp+60h] [ebp+8h]

  v3 = a3;
  v4 = a3[5];
  v5 = a3[1];
  if ( v4 )
  {
    v6 = (void *)v4[0x22];
    v7 = v4 + 0x22;
    a3[2] = v6;
    a3[3] = (void *)v7[1];
    a3[4] = (void *)v7[2];
  }
  v5[0x15] = a3[2];
  v5[0x16] = a3[3];
  v5[0x17] = a3[4];
  v8 = (float *)a3[6];
  v9 = v8[0x22];
  v8 += 0x22;
  v15 = v9 - *((float *)a3 + 2);
  v16 = v8[1] - *((float *)a3 + 3);
  v17 = v8[2] - *((float *)a3 + 4);
  LOBYTE(a3) = fShockBranchLifetime < *(this + 0x1E) - *(this + 0x28);
  v13 = (int)a3;
  v19 = v15 * v15 + v16 * v16 + v17 * v17;
  v20 = sqrt(v19);
  sub_7F3300(*v3, a2, v20, *(this + 0x17), v13);
  sub_98598A(v10);
  v14 = -v17;
  sub_98598A(v11);
  result = sub_7118E0(v18, v15, 0.0, v14);
  qmemcpy(v5 + 0xC, v18, 0x24u);
  return result;
}
