void __thiscall sub_6CB4D0(float *this, int a2)
{
  int v3; // ebp
  double v4; // st7
  float *v5; // eax
  NiTransform *v6; // eax
  float v7; // [esp+10h] [ebp-54h]
  float v8; // [esp+10h] [ebp-54h]
  float v9; // [esp+10h] [ebp-54h]
  float v10; // [esp+10h] [ebp-54h]
  float v11; // [esp+14h] [ebp-50h]
  NiPoint3 v12; // [esp+18h] [ebp-4Ch] BYREF
  float v13[3]; // [esp+24h] [ebp-40h] BYREF
  NiTransform v14; // [esp+30h] [ebp-34h] BYREF

  v11 = 1.0; /*0x6cb4d6*/
  v7 = -flt_A7DEB4; /*0x6cb4e5*/
  if ( v7 == *(this + 7) ) /*0x6cb4fb*/
  {
    v3 = a2; /*0x6cb4fd*/
    *(float *)(a2 + 0x1C) = v7; /*0x6cb501*/
  }
  else
  {
    v8 = 1.0 / *(this + 7); /*0x6cb512*/
    v3 = a2; /*0x6cb522*/
    if ( !_isnan(v8) ) /*0x6cb51d*/
    {
      if ( _finite(v8) ) /*0x6cb537*/
        *(float *)(a2 + 0x1C) = v8; /*0x6cb547*/
    }
    v11 = *(float *)(a2 + 0x1C); /*0x6cb54d*/
  }
  v9 = -flt_A7DEB4; /*0x6cb55b*/
  v4 = *(this + 4); /*0x6cb564*/
  qmemcpy(&v14.rot.data[1][1], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x6cb576*/
  if ( v9 == v4 ) /*0x6cb583*/
  {
    *(float *)(v3 + 0x10) = v9; /*0x6cb585*/
  }
  else
  {
    v5 = sub_714D80((float *)&v14, this + 3); /*0x6cb595*/
    sub_471430((_DWORD *)v3, v5); /*0x6cb5a0*/
    sub_47C600((NiTransform *)(v3 + 0xC), (NiTransform *)&v14.rot.data[1][1]); /*0x6cb5ad*/
  }
  v10 = -flt_A7DEB4; /*0x6cb5ba*/
  if ( v10 == *this ) /*0x6cb5cf*/
  {
    *(float *)v3 = v10; /*0x6cb5d1*/
  }
  else
  {
    v12.x = -*this; /*0x6cb5eb*/
    v12.y = -*(this + 1); /*0x6cb5f9*/
    v12.z = -*(this + 2); /*0x6cb602*/
    v6 = sub_7101F0((NiTransform *)&v14.rot.data[1][1], &v14, &v12); /*0x6cb606*/
    v13[0] = v6->rot.data[0][0] * v11; /*0x6cb61e*/
    v13[1] = v6->rot.data[0][1] * v11; /*0x6cb627*/
    v13[2] = v11 * v6->rot.data[0][2]; /*0x6cb62e*/
    sub_471390((_DWORD *)v3, v13); /*0x6cb632*/
  }
}
