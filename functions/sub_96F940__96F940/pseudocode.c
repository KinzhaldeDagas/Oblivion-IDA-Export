void __thiscall sub_96F940(int this, float *a2, float *a3)
{
  double y; // st7
  double z; // st7
  double v6; // st5
  double v7; // st7
  double v8; // st7
  double v9; // rtt
  double v10; // st6
  double v11; // st7
  double v12; // st7
  float v13; // [esp+8h] [ebp-34h]
  NiPoint3 other; // [esp+Ch] [ebp-30h] BYREF
  NiPoint3 v15; // [esp+18h] [ebp-24h] BYREF
  float v16; // [esp+24h] [ebp-18h]
  float v17; // [esp+28h] [ebp-14h]
  float v18; // [esp+2Ch] [ebp-10h]
  float v19; // [esp+30h] [ebp-Ch]
  float v20; // [esp+34h] [ebp-8h]
  float v21; // [esp+38h] [ebp-4h]
  float v22; // [esp+40h] [ebp+4h]

  sub_976A50((float *)(*(_DWORD *)(this + 0x38) + 0x20), &other.x, *(float *)(this + 0x44)); /*0x96f958*/
  sub_976A50((float *)(*(_DWORD *)(this + 0x3C) + 0x20), &v15.x, *(float *)(this + 0x48)); /*0x96f96f*/
  if ( *(_DWORD *)(this + 0x18) == 2 ) /*0x96f978*/
  {
    v13 = *(float *)(this + 0x1C); /*0x96f985*/
    v16 = *a2 * v13; /*0x96f999*/
    v17 = a2[1] * v13; /*0x96f9a2*/
    v18 = v13 * a2[2]; /*0x96f9ad*/
    other.x = v16 + other.x; /*0x96f9b9*/
    other.y = other.y + v17; /*0x96f9c5*/
    other.z = other.z + v18; /*0x96f9d1*/
    v22 = *(float *)(this + 0x1C); /*0x96f9d8*/
    v16 = *a3 * v22; /*0x96f9e8*/
    v17 = a3[1] * v22; /*0x96f9f1*/
    v18 = v22 * a3[2]; /*0x96f9f8*/
    v15.x = v16 + v15.x; /*0x96fa04*/
    v15.y = v15.y + v17; /*0x96fa10*/
    v15.z = v15.z + v18; /*0x96fa1c*/
    v16 = v15.x - other.x; /*0x96fa28*/
    y = v15.y; /*0x96fa30*/
    *(float *)(this + 0x2C) = v16; /*0x96fa34*/
    v17 = y - other.y; /*0x96fa3a*/
    z = v15.z; /*0x96fa42*/
    *(float *)(this + 0x30) = v17; /*0x96fa46*/
    v18 = z - other.z; /*0x96fa4d*/
    *(float *)(this + 0x34) = v18; /*0x96fa55*/
    Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x96fa5a*/
    v6 = *(float *)(*(_DWORD *)(this + 0x38) + 0x38); /*0x96fa71*/
    v16 = *(float *)(this + 0x2C) * v6; /*0x96fa77*/
    v17 = *(float *)(this + 0x30) * v6; /*0x96fa80*/
    v18 = v6 * *(float *)(this + 0x34); /*0x96fa87*/
    v15.x = v16 + other.x; /*0x96fa94*/
    v7 = v17; /*0x96fa9c*/
    *(float *)(this + 0x20) = v15.x; /*0x96faa0*/
    v15.y = v7 + other.y; /*0x96faa7*/
    v8 = v18; /*0x96faaf*/
    *(float *)(this + 0x24) = v15.y; /*0x96fab3*/
    v15.z = v8 + other.z; /*0x96faba*/
    *(float *)(this + 0x28) = v15.z; /*0x96fac2*/
  }
  else
  {
    v16 = v15.x + other.x; /*0x96fad4*/
    v17 = v15.y + other.y; /*0x96fae0*/
    v18 = v15.z + other.z; /*0x96faec*/
    v9 = dbl_A2FAA0; /*0x96fafc*/
    v19 = v16 * v9; /*0x96fafe*/
    v10 = v17; /*0x96fb06*/
    *(float *)(this + 0x20) = v19; /*0x96fb0a*/
    v20 = v10 * v9; /*0x96fb14*/
    *(float *)(this + 0x24) = v20; /*0x96fb1c*/
    v21 = v9 * v18; /*0x96fb27*/
    *(float *)(this + 0x28) = v21; /*0x96fb2f*/
    if ( NiPoint3__NotEqual(&v15, &other) ) /*0x96fb32*/
    {
      v19 = v15.x - other.x; /*0x96fb46*/
      v11 = v15.y; /*0x96fb4e*/
      *(float *)(this + 0x2C) = v19; /*0x96fb52*/
      v20 = v11 - other.y; /*0x96fb58*/
      v12 = v15.z; /*0x96fb60*/
      *(float *)(this + 0x30) = v20; /*0x96fb64*/
      v21 = v12 - other.z; /*0x96fb6b*/
      *(float *)(this + 0x34) = v21; /*0x96fb73*/
      Vector3_NormalizeInPlace((float *)(this + 0x2C)); /*0x96fb76*/
    }
    else
    {
      *(float *)(this + 0x2C) = rhs.x; /*0x96fb89*/
      *(float *)(this + 0x30) = rhs.y; /*0x96fb92*/
      *(float *)(this + 0x34) = rhs.z; /*0x96fb9b*/
    }
  }
}
