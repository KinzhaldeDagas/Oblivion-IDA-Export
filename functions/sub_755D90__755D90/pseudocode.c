_DWORD *__thiscall sub_755D90(float *this, float a2, _DWORD *a3, int a4)
{
  float *v5; // edx
  double v6; // st7
  double v7; // st5
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  double v11; // st6
  double v12; // st6
  double v13; // st5
  double v14; // st4
  float v16; // [esp+0h] [ebp-2Ch]
  float v17; // [esp+14h] [ebp-18h]
  float v18; // [esp+18h] [ebp-14h]
  float v19; // [esp+1Ch] [ebp-10h]
  float v20; // [esp+20h] [ebp-Ch]
  float v21; // [esp+24h] [ebp-8h]
  float v22; // [esp+28h] [ebp-4h]
  float v23; // [esp+38h] [ebp+Ch]
  float v24; // [esp+38h] [ebp+Ch]
  float v25; // [esp+38h] [ebp+Ch]
  float v26; // [esp+38h] [ebp+Ch]
  float v27; // [esp+38h] [ebp+Ch]

  v5 = (float *)(a3[0x17] + 0x1C * (unsigned __int16)a4); /*0x755daf*/
  v23 = *(this + 0x17) * v5[1] + *v5 * *(this + 0x16) + *(this + 0x18) * v5[2]; /*0x755dc4*/
  v6 = v23; /*0x755dd3*/
  v17 = *(this + 0x16) * v23; /*0x755dd5*/
  v18 = *(this + 0x17) * v23; /*0x755dde*/
  v19 = *(this + 0x18) * v23; /*0x755de7*/
  if ( a2 != *(this + 8) ) /*0x755dfd*/
  {
    v10 = a2; /*0x755e2b*/
    goto LABEL_5; /*0x755e2b*/
  }
  v7 = flt_A86938; /*0x755dff*/
  v8 = v7 < v6; /*0x755e05*/
  v9 = v7 == v6; /*0x755e05*/
  v10 = a2; /*0x755e09*/
  if ( v8 || v9 ) /*0x755e0b*/
  {
LABEL_5:
    v20 = v17 + v17; /*0x755e2d*/
    v21 = v18 + v18; /*0x755e3d*/
    v22 = v19 + v19; /*0x755e47*/
    v24 = *v5 - v20; /*0x755e51*/
    v12 = v24; /*0x755e55*/
    *v5 = v24; /*0x755e59*/
    v25 = v5[1] - v21; /*0x755e62*/
    v13 = v25; /*0x755e66*/
    v5[1] = v25; /*0x755e6a*/
    v26 = v5[2] - v22; /*0x755e74*/
    v14 = v26; /*0x755e78*/
    v5[2] = v26; /*0x755e7c*/
    v27 = *(this + 2); /*0x755e82*/
    *v5 = v12 * v27; /*0x755e90*/
    v5[1] = v13 * v27; /*0x755e98*/
    v11 = v27 * v14; /*0x755e9b*/
    goto LABEL_6; /*0x755e9b*/
  }
  *v5 = *v5 - v17; /*0x755e16*/
  v5[1] = v5[1] - v18; /*0x755e1f*/
  v11 = v5[2] - v19; /*0x755e25*/
LABEL_6:
  v5[2] = v11; /*0x755e9d*/
  v16 = v10; /*0x755ea3*/
  return sub_75EC40((int)this, v16, a3, a4); /*0x755eab*/
}
