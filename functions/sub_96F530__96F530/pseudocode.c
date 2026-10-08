void __thiscall sub_96F530(int this, float *a2, float *a3)
{
  float *v4; // eax
  float v5; // ecx
  float v6; // edx
  bool v7; // zf
  float v8; // eax
  double y; // st7
  double z; // st7
  double v11; // st5
  double v12; // st7
  double v13; // st7
  double v14; // rtt
  double v15; // st6
  double v16; // st7
  double v17; // st7
  float v18; // [esp+8h] [ebp-34h]
  NiPoint3 v19; // [esp+Ch] [ebp-30h] BYREF
  NiPoint3 other; // [esp+18h] [ebp-24h] BYREF
  float v21; // [esp+24h] [ebp-18h]
  float v22; // [esp+28h] [ebp-14h]
  float v23; // [esp+2Ch] [ebp-10h]
  float v24; // [esp+30h] [ebp-Ch]
  float v25; // [esp+34h] [ebp-8h]
  float v26; // [esp+38h] [ebp-4h]
  float v27; // [esp+40h] [ebp+4h]

  sub_976A50((float *)(*(_DWORD *)(this + 0x38) + 0x20), &v19.x, *(float *)(this + 0x44)); /*0x96f548*/
  v4 = *(float **)(this + 0x3C); /*0x96f54d*/
  v5 = v4[1]; /*0x96f550*/
  v6 = v4[2]; /*0x96f553*/
  v7 = *(_DWORD *)(this + 0x18) == 2; /*0x96f559*/
  v8 = v4[3]; /*0x96f55d*/
  other.x = v5; /*0x96f560*/
  other.y = v6; /*0x96f564*/
  other.z = v8; /*0x96f568*/
  if ( v7 ) /*0x96f56c*/
  {
    v18 = *(float *)(this + 0x1C); /*0x96f579*/
    v21 = *a2 * v18; /*0x96f58d*/
    v22 = a2[1] * v18; /*0x96f596*/
    v23 = v18 * a2[2]; /*0x96f5a1*/
    v19.x = v21 + v19.x; /*0x96f5ad*/
    v19.y = v19.y + v22; /*0x96f5b9*/
    v19.z = v19.z + v23; /*0x96f5c5*/
    v27 = *(float *)(this + 0x1C); /*0x96f5cc*/
    v21 = *a3 * v27; /*0x96f5dc*/
    v22 = a3[1] * v27; /*0x96f5e5*/
    v23 = v27 * a3[2]; /*0x96f5ec*/
    other.x = v21 + other.x; /*0x96f5f8*/
    other.y = other.y + v22; /*0x96f604*/
    other.z = other.z + v23; /*0x96f610*/
    v21 = other.x - v19.x; /*0x96f61c*/
    y = other.y; /*0x96f624*/
    *(float *)(this + 0x2C) = v21; /*0x96f628*/
    v22 = y - v19.y; /*0x96f630*/
    z = other.z; /*0x96f638*/
    *(float *)(this + 0x30) = v22; /*0x96f63c*/
    v23 = z - v19.z; /*0x96f643*/
    *(float *)(this + 0x34) = v23; /*0x96f64b*/
    Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x96f64e*/
    v11 = *(float *)(*(_DWORD *)(this + 0x38) + 0x38); /*0x96f665*/
    v21 = *(float *)(this + 0x2C) * v11; /*0x96f66b*/
    v22 = *(float *)(this + 0x30) * v11; /*0x96f674*/
    v23 = v11 * *(float *)(this + 0x34); /*0x96f67b*/
    other.x = v21 + v19.x; /*0x96f688*/
    v12 = v22; /*0x96f690*/
    *(float *)(this + 0x20) = other.x; /*0x96f694*/
    other.y = v12 + v19.y; /*0x96f69b*/
    v13 = v23; /*0x96f6a3*/
    *(float *)(this + 0x24) = other.y; /*0x96f6a7*/
    other.z = v13 + v19.z; /*0x96f6ae*/
    *(float *)(this + 0x28) = other.z; /*0x96f6b6*/
  }
  else
  {
    v21 = other.x + v19.x; /*0x96f6c8*/
    v22 = other.y + v19.y; /*0x96f6d4*/
    v23 = other.z + v19.z; /*0x96f6e0*/
    v14 = dbl_A2FAA0; /*0x96f6f0*/
    v24 = v21 * v14; /*0x96f6f2*/
    v15 = v22; /*0x96f6fa*/
    *(float *)(this + 0x20) = v24; /*0x96f6fe*/
    v25 = v15 * v14; /*0x96f708*/
    *(float *)(this + 0x24) = v25; /*0x96f710*/
    v26 = v14 * v23; /*0x96f717*/
    *(float *)(this + 0x28) = v26; /*0x96f71f*/
    if ( NiPoint3__NotEqual(&v19, &other) ) /*0x96f726*/
    {
      v24 = other.x - v19.x; /*0x96f73a*/
      v16 = other.y; /*0x96f742*/
      *(float *)(this + 0x2C) = v24; /*0x96f746*/
      v25 = v16 - v19.y; /*0x96f74c*/
      v17 = other.z; /*0x96f754*/
      *(float *)(this + 0x30) = v25; /*0x96f758*/
      v26 = v17 - v19.z; /*0x96f75f*/
      *(float *)(this + 0x34) = v26; /*0x96f767*/
      Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x96f76a*/
    }
    else
    {
      *(float *)(this + 0x2C) = rhs.x; /*0x96f77e*/
      *(float *)(this + 0x30) = rhs.y; /*0x96f787*/
      *(float *)(this + 0x34) = rhs.z; /*0x96f78f*/
    }
  }
}
