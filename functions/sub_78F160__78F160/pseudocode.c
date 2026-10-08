// Standalone axis-angle 3x3 matrix builder used by branch generation.
void __thiscall OB_Mat3_AxisAngleBuild_010201A0(float *this, float a2, double a3, float a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st4
  double v7; // st5
  double v8; // st3
  double v9; // st5
  double v10; // st3
  double v11; // st6
  float v12; // [esp+0h] [ebp-10h]
  float v13; // [esp+0h] [ebp-10h]
  float v14; // [esp+0h] [ebp-10h]
  double v15; // [esp+0h] [ebp-10h]
  double v16; // [esp+8h] [ebp-8h]
  float v17; // [esp+14h] [ebp+4h]
  double v18; // [esp+18h] [ebp+8h]

  v12 = a2 / dbl_A8BA48; /*0x78f170*/
  v17 = sin(v12); /*0x78f17d*/
  v13 = cos(v12); /*0x78f192*/
  v4 = v13; /*0x78f19e*/
  v14 = 1.0 - v13; /*0x78f1a8*/
  v5 = *(float *)&a3; /*0x78f1ac*/
  v6 = v14; /*0x78f1b2*/
  v7 = *(float *)&a3 * v14; /*0x78f1b8*/
  *this = *(float *)&a3 * v7 + v4; /*0x78f1c0*/
  v8 = *((float *)&a3 + 1); /*0x78f1c2*/
  v15 = *((float *)&a3 + 1) * v7; /*0x78f1ca*/
  v18 = a4 * v17; /*0x78f1d8*/
  *(this + 1) = v18 + v15; /*0x78f1e0*/
  v9 = v7 * a4; /*0x78f1e5*/
  v16 = v8 * v17; /*0x78f1ed*/
  *(this + 2) = v9 - v16; /*0x78f1f3*/
  *(this + 3) = v15 - v18; /*0x78f1fe*/
  *(this + 4) = v8 * (v8 * v6) + v4; /*0x78f20d*/
  v10 = v8 * v6 * a4; /*0x78f212*/
  v11 = v5 * v17; /*0x78f218*/
  *(this + 5) = v11 + v10; /*0x78f21e*/
  *(this + 6) = v9 + v16; /*0x78f229*/
  *(this + 7) = v10 - v11; /*0x78f230*/
  *(this + 8) = v4 + v6 * a4 * a4; /*0x78f23b*/
}
