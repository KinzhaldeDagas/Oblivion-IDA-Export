double __thiscall sub_6C5FC0(int this, float a2, char a3)
{
  double v4; // st6
  double v5; // st6
  double v6; // st7
  double v7; // rt1
  double v8; // st6
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st6
  double v13; // rtt
  double v14; // rt0
  double v15; // st6
  float v17; // [esp+4h] [ebp-Ch]
  float v18; // [esp+4h] [ebp-Ch]
  float v19; // [esp+4h] [ebp-Ch]
  float v20; // [esp+4h] [ebp-Ch]
  float v21; // [esp+8h] [ebp-8h]
  float v22; // [esp+8h] [ebp-8h]
  float v23; // [esp+Ch] [ebp-4h]

  v21 = *(float *)(this + 0x38);
  if ( -flt_A7DEB4 == *(float *)(this + 0x34) )
  {
    v21 = 0.0;
    v4 = a2;
  }
  else
  {
    v4 = a2 - *(float *)(this + 0x34);
  }
  v17 = v4;
  v22 = *(float *)(this + 0x28) * v17 + v21;
  v5 = v22;
  v18 = v22;
  if ( *(_DWORD *)(this + 0x24) )
  {
    v9 = v22;
    goto LABEL_12;
  }
  v23 = *(float *)(this + 0x30) - *(float *)(this + 0x2C);
  v6 = v23;
  if ( v23 == 0.0 )
  {
    v9 = v22;
    v8 = *(float *)(this + 0x2C);
    goto LABEL_11;
  }
  v19 = v5 - *(float *)(this + 0x2C);
  if ( v6 == v19 )
  {
    v20 = *(float *)(this + 0x30);
  }
  else
  {
    unknown_libname_14(v23, v19);
    v20 = v19 + *(float *)(this + 0x2C);
    v6 = v23;
    v5 = v22;
  }
  if ( *(float *)(this + 0x2C) > (double)v20 )
  {
    v7 = v5;
    v8 = v6 + v20;
    v9 = v7;
LABEL_11:
    v18 = v8;
LABEL_12:
    v5 = v9;
    v10 = v18;
    goto LABEL_13;
  }
  v10 = v20;
LABEL_13:
  if ( *(float *)(this + 0x30) >= v10 )
  {
    if ( *(float *)(this + 0x2C) <= v10 )
    {
      v13 = v5;
      v12 = v10;
      v11 = v13;
    }
    else
    {
      v11 = v5;
      v12 = *(float *)(this + 0x2C);
    }
  }
  else
  {
    v11 = v5;
    v12 = *(float *)(this + 0x30);
  }
  if ( !a3 )
    return v12;
  v14 = v12;
  v15 = v11;
  *(float *)(this + 0x38) = v15;
  *(float *)(this + 0x34) = a2;
  *(float *)(this + 0x3C) = v14;
  return v14;
}
