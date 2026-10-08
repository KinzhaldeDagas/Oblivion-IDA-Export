NiPoint3 *__thiscall sub_4DD070(TESObjectREFR *this, NiPoint3 *a2, float a3)
{
  double v3; // st7
  double v4; // st6
  NiTransform *v5; // eax
  float angleZ; // [esp+0h] [ebp-38h]
  _BYTE v8[48]; // [esp+8h] [ebp-30h] BYREF
  float v9; // [esp+40h] [ebp+8h]
  float v10; // [esp+40h] [ebp+8h]

  v9 = this->member.rot.z + a3; /*0x4dd07a*/
  v3 = v9; /*0x4dd088*/
  v4 = dbl_A3D5B0; /*0x4dd08d*/
  if ( v9 >= 0.0 ) /*0x4dd093*/
  {
    if ( v4 <= v3 ) /*0x4dd0c1*/
    {
      unknown_libname_14(v4, v3); /*0x4dd0c3*/
      v3 = v9; /*0x4dd0d4*/
    }
  }
  else
  {
    v10 = v3 + v4; /*0x4dd099*/
    unknown_libname_14(v4, v10); /*0x4dd0a3*/
    v3 = v10; /*0x4dd0b4*/
  }
  a2->x = 0.0; /*0x4dd0e3*/
  a2->y = 1.0; /*0x4dd0e8*/
  a2->z = 0.0; /*0x4dd0ef*/
  angleZ = v3; /*0x4dd0f2*/
  NiMatrix33_InitRotationZ((NiMatrix33 *)&v8[0xC], angleZ); /*0x4dd0f5*/
  v5 = sub_7101F0((NiTransform *)&v8[0xC], (NiTransform *)v8, a2); /*0x4dd104*/
  a2->x = v5->rot.data[0][0]; /*0x4dd10b*/
  a2->y = v5->rot.data[0][1]; /*0x4dd110*/
  a2->z = v5->rot.data[0][2]; /*0x4dd118*/
  Vector3_NormalizeInPlace(&a2->x); /*0x4dd11b*/
  return a2; /*0x4dd125*/
}
