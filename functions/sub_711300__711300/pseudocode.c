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

  v5 = *(this + 2); /*0x71130b*/
  if ( v5 <= dbl_A3D360 ) /*0x71131a*/
  {
    v6 = -unk_B3F99C; /*0x711348*/
  }
  else if ( v5 >= 1.0 ) /*0x711325*/
  {
    v6 = unk_B3F99C; /*0x711338*/
  }
  else
  {
    v11 = asin(v5); /*0x71132c*/
    v6 = v11; /*0x711330*/
  }
  v12 = v6; /*0x71134e*/
  v13 = -v12; /*0x71135b*/
  *a3 = v13; /*0x711363*/
  v7 = unk_B3F99C; /*0x711365*/
  if ( v7 <= v13 ) /*0x711372*/
  {
    v15 = sub_7070B0(*(this + 3), *(this + 4)); /*0x711416*/
    *a4 = 0.0; /*0x711420*/
    *a2 = 0.0 - v15; /*0x71142e*/
    return 0; /*0x711430*/
  }
  else if ( -v7 >= v13 ) /*0x711381*/
  {
    v14 = sub_7070B0(*(this + 3), *(this + 4)); /*0x7113da*/
    *a4 = 0.0; /*0x7113e4*/
    *a2 = v14 - dbl_A2FC68; /*0x7113f6*/
    return 0; /*0x7113ed*/
  }
  else
  {
    v9 = -*(this + 5); /*0x71138f*/
    *a2 = -sub_7070B0(v9, *(this + 8)); /*0x71139d*/
    v10 = -*(this + 1); /*0x7113aa*/
    *a4 = -sub_7070B0(v10, *this); /*0x7113bb*/
    return 1; /*0x7113bd*/
  }
}
