double __thiscall sub_9742C0(int this, int a2, float *a3, float a4)
{
  double v4; // st6
  int v5; // eax
  double v6; // st6
  float v8; // [esp+4h] [ebp-60h]
  float v9; // [esp+4h] [ebp-60h]
  float v10; // [esp+8h] [ebp-5Ch]
  float v11; // [esp+8h] [ebp-5Ch]
  float v12; // [esp+Ch] [ebp-58h]
  float v13; // [esp+Ch] [ebp-58h]
  float v14; // [esp+10h] [ebp-54h] BYREF
  float v15; // [esp+14h] [ebp-50h]
  float v16; // [esp+18h] [ebp-4Ch]
  int v17; // [esp+1Ch] [ebp-48h]
  int v18; // [esp+20h] [ebp-44h]
  int v19; // [esp+24h] [ebp-40h]
  float v20[15]; // [esp+28h] [ebp-3Ch] BYREF

  v8 = *(float *)a2 * a4; /*0x9742de*/
  v4 = *(float *)(a2 + 4) * a4; /*0x9742ee*/
  qmemcpy(v20, (const void *)(*(_DWORD *)(this + 0x38) + 4), sizeof(v20)); /*0x9742f0*/
  v10 = v4; /*0x9742f2*/
  v12 = *(float *)(a2 + 8) * a4; /*0x9742fb*/
  v5 = *(_DWORD *)(this + 0x3C) + 0x20; /*0x97430a*/
  v20[0] = v8 + v20[0]; /*0x97430d*/
  v20[1] = v20[1] + v10; /*0x974319*/
  v20[2] = v20[2] + v12; /*0x974325*/
  v14 = *(float *)v5; /*0x97432b*/
  v15 = *(float *)(v5 + 4); /*0x974332*/
  v16 = *(float *)(v5 + 8); /*0x974339*/
  v17 = *(_DWORD *)(v5 + 0xC); /*0x974340*/
  v18 = *(_DWORD *)(v5 + 0x10); /*0x974347*/
  v6 = *a3; /*0x974352*/
  v19 = *(_DWORD *)(v5 + 0x14); /*0x974354*/
  v9 = v6 * a4; /*0x974360*/
  v11 = a3[1] * a4; /*0x974369*/
  v13 = a4 * a3[2]; /*0x974375*/
  v14 = v9 + v14; /*0x97438c*/
  v15 = v15 + v11; /*0x97439d*/
  v16 = v16 + v13; /*0x9743a9*/
  *(float *)&a2 = sub_975AA0( /*0x9743be*/
                    &v14,
                    v20,
                    (float *)&a2,
                    (float *)(this + 0x44),
                    (float *)(this + 0x48),
                    (float *)(this + 0x4C))
                * *(float *)(this + 0x40)
                - dbl_A2F928;
  return *(float *)&a2; /*0x9743c8*/
}
