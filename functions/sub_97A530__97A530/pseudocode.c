signed int __thiscall sub_97A530(int this, int a2, int a3, int a4, int a5, int a6, _BYTE *a7)
{
  float *v8; // eax
  float v9; // edx
  float *v10; // eax
  double v11; // rt0
  float v13; // [esp+4h] [ebp-58h]
  float v14; // [esp+4h] [ebp-58h]
  float v15; // [esp+8h] [ebp-54h]
  float v16; // [esp+Ch] [ebp-50h]
  float v17; // [esp+Ch] [ebp-50h]
  float v18; // [esp+10h] [ebp-4Ch]
  float v19; // [esp+14h] [ebp-48h]
  float v20; // [esp+18h] [ebp-44h]
  _DWORD v21[4]; // [esp+1Ch] [ebp-40h] BYREF
  float v22; // [esp+2Ch] [ebp-30h] BYREF
  float v23[3]; // [esp+30h] [ebp-2Ch] BYREF
  float v24[3]; // [esp+3Ch] [ebp-20h] BYREF
  float v25[5]; // [esp+48h] [ebp-14h] BYREF

  v21[0] = a3; /*0x97a53b*/
  v21[3] = a6; /*0x97a543*/
  v8 = *(float **)(this + 0x7C); /*0x97a54e*/
  v25[3] = 0.0; /*0x97a551*/
  v25[4] = 0.0; /*0x97a559*/
  v21[1] = a4; /*0x97a561*/
  v21[2] = a5; /*0x97a565*/
  v9 = v8[5]; /*0x97a56c*/
  v13 = v8[4]; /*0x97a572*/
  v16 = v8[6]; /*0x97a587*/
  v10 = *(float **)(a2 + 0x7C); /*0x97a58d*/
  if ( g_zeroNiPoint3.x == v13 /*0x97a617*/
    && g_zeroNiPoint3.y == v9
    && g_zeroNiPoint3.z == v16
    && v10[4] == g_zeroNiPoint3.x
    && v10[5] == g_zeroNiPoint3.y
    && v10[6] == g_zeroNiPoint3.z )
  {
    v22 = 0.0; /*0x97a61b*/
    v18 = *(float *)(a2 + 0x40) + *(float *)(this + 0x40); /*0x97a625*/
    v19 = *(float *)(a2 + 0x44) + *(float *)(this + 0x44); /*0x97a62f*/
    v20 = *(float *)(a2 + 0x48) + *(float *)(this + 0x48); /*0x97a639*/
    v11 = dbl_A2FAA0; /*0x97a649*/
    v14 = v18 * v11; /*0x97a64b*/
    v23[0] = v14; /*0x97a657*/
    v15 = v19 * v11; /*0x97a65d*/
    v23[1] = v15; /*0x97a665*/
    v17 = v11 * v20; /*0x97a66d*/
    v23[2] = v17; /*0x97a675*/
LABEL_9:
    *a7 = 1; /*0x97a69f*/
    sub_980240((float *)(this + 4), v23, v24); /*0x97a6b3*/
    sub_980240((float *)(a2 + 4), v23, v25); /*0x97a6c5*/
    return sub_97A470(v21); /*0x97a6db*/
  }
  if ( sub_97CBE0(this + 4, (int)&v22, a2 + 4, &v22, v23) ) /*0x97a696*/
    goto LABEL_9; /*0x97a69d*/
  return 0; /*0x97a6d7*/
}
