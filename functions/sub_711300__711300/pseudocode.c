char __thiscall sub_711300(float *this, float *a2, float *a3, float *a4)
{
  long double v5; // st7
  double v6; // st7
  double v7; // st6
  float v9; // [esp+0h] [ebp-10h]
  float v10; // [esp+0h] [ebp-10h]
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+Ch] [ebp-4h]
  float v13; // [esp+Ch] [ebp-4h]
  float v14; // [esp+18h] [ebp+8h]
  float v15; // [esp+18h] [ebp+8h]

  v5 = *(this + 2);
  if ( v5 <= dbl_A3D360 )
  {
    v6 = -flt_B3F99C;
  }
  else if ( v5 >= 1.0 )
  {
    v6 = flt_B3F99C;
  }
  else
  {
    v11 = asin(v5);
    v6 = v11;
  }
  v12 = v6;
  v13 = -v12;
  *a3 = v13;
  v7 = flt_B3F99C;
  if ( v7 <= v13 )
  {
    v15 = sub_7070B0(*(this + 3), *(this + 4));
    *a4 = 0.0;
    *a2 = 0.0 - v15;
    return 0;
  }
  else if ( -v7 >= v13 )
  {
    v14 = sub_7070B0(*(this + 3), *(this + 4));
    *a4 = 0.0;
    *a2 = v14 - dbl_A2FC68;
    return 0;
  }
  else
  {
    v9 = -*(this + 5);
    *a2 = -sub_7070B0(v9, *(this + 8));
    v10 = -*(this + 1);
    *a4 = -sub_7070B0(v10, *this);
    return 1;
  }
}
