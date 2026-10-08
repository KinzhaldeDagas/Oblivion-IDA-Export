char __thiscall sub_711440(float *this, float *a2, float *a3, float *a4)
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

  v5 = *(this + 7); /*0x71144b*/
  if ( v5 <= dbl_A3D360 ) /*0x71145a*/
  {
    v6 = -unk_B3F99C; /*0x711488*/
  }
  else if ( v5 >= 1.0 ) /*0x711465*/
  {
    v6 = unk_B3F99C; /*0x711478*/
  }
  else
  {
    v11 = asin(v5); /*0x71146c*/
    v6 = v11; /*0x711470*/
  }
  v12 = v6; /*0x71148e*/
  v13 = -v12; /*0x71149b*/
  *a3 = v13; /*0x7114a3*/
  v7 = unk_B3F99C; /*0x7114a5*/
  if ( v7 <= v13 ) /*0x7114b2*/
  {
    v15 = sub_7070B0(*(this + 2), *this); /*0x711555*/
    *a4 = 0.0; /*0x71155f*/
    *a2 = 0.0 - v15; /*0x71156d*/
    return 0; /*0x71156f*/
  }
  else if ( -v7 >= v13 ) /*0x7114c1*/
  {
    v14 = sub_7070B0(*(this + 2), *this); /*0x71151a*/
    *a4 = 0.0; /*0x711524*/
    *a2 = v14 - dbl_A2FC68; /*0x711536*/
    return 0; /*0x71152d*/
  }
  else
  {
    v9 = -*(this + 1); /*0x7114cf*/
    *a2 = -sub_7070B0(v9, *(this + 4)); /*0x7114dd*/
    v10 = -*(this + 6); /*0x7114eb*/
    *a4 = -sub_7070B0(v10, *(this + 8)); /*0x7114fc*/
    return 1; /*0x7114fe*/
  }
}
