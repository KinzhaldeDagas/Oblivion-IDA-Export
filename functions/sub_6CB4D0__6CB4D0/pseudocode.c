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

  v11 = 1.0;
  v7 = -flt_A7DEB4;
  if ( v7 == *(this + 7) )
  {
    v3 = a2;
    *(float *)(a2 + 0x1C) = v7;
  }
  else
  {
    v8 = 1.0 / *(this + 7);
    v3 = a2;
    if ( !_isnan(v8) )
    {
      if ( _finite(v8) )
        *(float *)(a2 + 0x1C) = v8;
    }
    v11 = *(float *)(a2 + 0x1C);
  }
  v9 = -flt_A7DEB4;
  v4 = *(this + 4);
  qmemcpy(&v14.rot.data[1][1], &stru_B26AF0[0xA].unk2C, 0x24u);
  if ( v9 == v4 )
  {
    *(float *)(v3 + 0x10) = v9;
  }
  else
  {
    v5 = sub_714D80((float *)&v14, this + 3);
    sub_471430((_DWORD *)v3, v5);
    sub_47C600((NiTransform *)(v3 + 0xC), (NiTransform *)&v14.rot.data[1][1]);
  }
  v10 = -flt_A7DEB4;
  if ( v10 == *this )
  {
    *(float *)v3 = v10;
  }
  else
  {
    v12.x = -*this;
    v12.y = -*(this + 1);
    v12.z = -*(this + 2);
    v6 = sub_7101F0((NiTransform *)&v14.rot.data[1][1], &v14, &v12);
    v13[0] = v6->rot.data[0][0] * v11;
    v13[1] = v6->rot.data[0][1] * v11;
    v13[2] = v11 * v6->rot.data[0][2];
    sub_471390((_DWORD *)v3, v13);
  }
}
