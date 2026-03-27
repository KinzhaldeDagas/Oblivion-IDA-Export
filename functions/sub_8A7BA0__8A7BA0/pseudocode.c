void __thiscall sub_8A7BA0(float *this, float *a2)
{
  double v3; // st6
  double v4; // st6
  double v5; // st6
  double v6; // st7
  float v7; // [esp+0h] [ebp-8h]
  float v8; // [esp+0h] [ebp-8h]
  float v9; // [esp+0h] [ebp-8h]
  float v10; // [esp+4h] [ebp-4h]
  float v11; // [esp+4h] [ebp-4h]
  float v12; // [esp+4h] [ebp-4h]
  float v13; // [esp+Ch] [ebp+4h]
  float v14; // [esp+Ch] [ebp+4h]
  float v15; // [esp+Ch] [ebp+4h]
  float v16; // [esp+Ch] [ebp+4h]
  float v17; // [esp+Ch] [ebp+4h]
  float v18; // [esp+Ch] [ebp+4h]
  float v19; // [esp+Ch] [ebp+4h]
  float v20; // [esp+Ch] [ebp+4h]
  float v21; // [esp+Ch] [ebp+4h]
  float v22; // [esp+Ch] [ebp+4h]
  float v23; // [esp+Ch] [ebp+4h]
  float v24; // [esp+Ch] [ebp+4h]

  v7 = *(this + 0x28);
  v10 = *(this + 0x20);
  v3 = *a2;
  if ( v3 >= 0.0 )
  {
    v15 = v3 + v7;
    v16 = v15 - v10;
    if ( v16 > 0.0 )
      *a2 = *a2 - v16;
  }
  else
  {
    v13 = v3 - v7;
    v14 = v13 + v10;
    if ( v14 < 0.0 )
      *a2 = *a2 - v14;
  }
  v8 = *(this + 0x29);
  v11 = *(this + 0x21);
  v4 = a2[1];
  if ( v4 >= 0.0 )
  {
    v19 = v4 + v8;
    v20 = v19 - v11;
    if ( v20 > 0.0 )
      a2[1] = a2[1] - v20;
  }
  else
  {
    v17 = v4 - v8;
    v18 = v17 + v11;
    if ( v18 < 0.0 )
      a2[1] = a2[1] - v18;
  }
  v9 = *(this + 0x2A);
  v12 = *(this + 0x22);
  v5 = a2[2];
  if ( v5 < 0.0 )
  {
    v21 = v5 - v9;
    v22 = v21 + v12;
    v6 = v22;
    if ( v22 >= 0.0 )
      return;
    goto LABEL_13;
  }
  v23 = v5 + v9;
  v24 = v23 - v12;
  v6 = v24;
  if ( v24 > 0.0 )
LABEL_13:
    a2[2] = a2[2] - v6;
}
