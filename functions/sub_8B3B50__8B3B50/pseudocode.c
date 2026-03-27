float *__thiscall sub_8B3B50(float *this, float *a2, float *a3)
{
  int v3; // ecx
  double v4; // st7
  double v5; // st6
  float *result; // eax
  float *v7; // edx
  double v8; // st4
  double v9; // st1
  double v10; // st0
  double v11; // st3
  double v12; // st2
  double v13; // st4
  double v14; // st3
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+1Ch] [ebp+8h]

  sub_8B3850(this, (int)a2);
  v4 = -(*a2 * *a3) - a2[1] * a3[1] - a2[2] * a3[2];
  v5 = fConstant_1 / a3[*(_DWORD *)(v3 + 8)];
  result = &a3[*(_DWORD *)(v3 + 4)];
  v7 = &a3[*(_DWORD *)v3];
  v19 = v5 * v5 * v5;
  *(float *)(v3 + 0x34) = v5 * *(float *)(v3 + 0x10);
  *(float *)(v3 + 0x38) = v5 * *(float *)(v3 + 0x14);
  v8 = v4 * *(float *)(v3 + 0xC);
  *(float *)(v3 + 0x3C) = -((*v7 * *(float *)(v3 + 0x10) + *(float *)(v3 + 0x14) * *result + v8) * (v5 * v5));
  *(float *)(v3 + 0x40) = v5 * *(float *)(v3 + 0x18);
  *(float *)(v3 + 0x44) = v5 * *(float *)(v3 + 0x20);
  v9 = *v7 * *(float *)(v3 + 0x10) + *(float *)(v3 + 0x14) * *result;
  v10 = *v7 * *result * *(float *)(v3 + 0x1C);
  *(float *)(v3 + 0x48) = ((v9 + v9 + v8) * v4
                         + v10
                         + v10
                         + *v7 * *(float *)(v3 + 0x18) * *v7
                         + *result * *result * *(float *)(v3 + 0x20))
                        * v19;
  *(float *)(v3 + 0x4C) = v5 * *(float *)(v3 + 0x24);
  *(float *)(v3 + 0x50) = v5 * *(float *)(v3 + 0x30);
  v11 = *v7;
  v18 = *v7;
  v17 = *result;
  v12 = v11 * *result * *(float *)(v3 + 0x1C);
  v15 = *v7;
  v16 = *result;
  *(float *)(v3 + 0x54) = -((((v12 + v12 + v15 * *(float *)(v3 + 0x18) * v15 + v16 * v16 * *(float *)(v3 + 0x20))
                            * *(float *)&dword_A46C30
                            + ((v11 * *(float *)(v3 + 0x10) + *(float *)(v3 + 0x14) * *result) * *(float *)&dword_A46C30
                             + v8)
                            * v4)
                           * v4
                           + v11 * *(float *)(v3 + 0x2C) * v17 * v17 * *(float *)&dword_A46C30
                           + v17 * *(float *)(v3 + 0x30) * v17 * v17
                           + v18 * *(float *)(v3 + 0x28) * v18 * *result * *(float *)&dword_A46C30
                           + v11 * v11 * v11 * *(float *)(v3 + 0x24))
                          * (v19
                           * v5));
  *(float *)(v3 + 0x58) = v5 * *(float *)(v3 + 0x28);
  *(float *)(v3 + 0x5C) = -((*v7 * *(float *)(v3 + 0x2C) + *(float *)(v3 + 0x30) * *result + v4 * *(float *)(v3 + 0x20))
                          * (v5
                           * v5));
  v13 = *v7 * *(float *)(v3 + 0x18) + *result * *(float *)(v3 + 0x1C);
  v14 = *v7 * *(float *)(v3 + 0x28) * *result;
  *(float *)(v3 + 0x60) = ((v13 + v13 + v4 * *(float *)(v3 + 0x10)) * v4
                         + v14
                         + v14
                         + *result * *(float *)(v3 + 0x2C) * *result
                         + *v7 * *v7 * *(float *)(v3 + 0x24))
                        * v19;
  return result;
}
