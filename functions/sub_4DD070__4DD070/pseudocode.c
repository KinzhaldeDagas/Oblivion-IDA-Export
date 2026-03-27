NiPoint3 *__thiscall sub_4DD070(TESObjectREFR *this, NiPoint3 *a2, float a3)
{
  double v3; // st7
  double v4; // st6
  NiTransform *v5; // eax
  float v7; // [esp+0h] [ebp-38h]
  _BYTE v8[48]; // [esp+8h] [ebp-30h] BYREF
  float v9; // [esp+40h] [ebp+8h]
  float v10; // [esp+40h] [ebp+8h]

  v9 = this->member.rot.z + a3;
  v3 = v9;
  v4 = dbl_A3D5B0;
  if ( v9 >= 0.0 )
  {
    if ( v4 <= v3 )
    {
      unknown_libname_14(v4, v3);
      v3 = v9;
    }
  }
  else
  {
    v10 = v3 + v4;
    unknown_libname_14(v4, v10);
    v3 = v10;
  }
  a2->x = 0.0;
  a2->y = 1.0;
  a2->z = 0.0;
  v7 = v3;
  NiMatrix33_InitRotationTransform((float *)&v8[0xC], v7);
  v5 = sub_7101F0((NiTransform *)&v8[0xC], (NiTransform *)v8, a2);
  a2->x = v5->rot.data[0][0];
  a2->y = v5->rot.data[0][1];
  a2->z = v5->rot.data[0][2];
  sub_43F350(&a2->x);
  return a2;
}
