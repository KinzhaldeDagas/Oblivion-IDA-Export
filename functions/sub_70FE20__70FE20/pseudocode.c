void __thiscall sub_70FE20(float *this, float a2, float a3, float a4, float a5)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st5
  double v9; // st3
  double v10; // st2
  float v11; // [esp+0h] [ebp-Ch]
  float v12; // [esp+0h] [ebp-Ch]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+10h] [ebp+4h]
  float v17; // [esp+10h] [ebp+4h]
  float v18; // [esp+10h] [ebp+4h]
  float v19; // [esp+14h] [ebp+8h]
  float v20; // [esp+18h] [ebp+Ch]
  float v21; // [esp+18h] [ebp+Ch]
  float v22; // [esp+1Ch] [ebp+10h]

  v11 = cos(a2); /*0x70fe29*/
  v13 = sin(a2); /*0x70fe2c*/
  v5 = v11; /*0x70fe30*/
  v16 = 1.0 - v11; /*0x70fe39*/
  v6 = a3; /*0x70fe3d*/
  v7 = a4; /*0x70fe43*/
  v8 = v16; /*0x70fe53*/
  v12 = a3 * a4 * v16; /*0x70fe55*/
  v9 = a5; /*0x70fe66*/
  v19 = a3 * a5 * v16; /*0x70fe68*/
  v15 = a4 * a5 * v16; /*0x70fe72*/
  v10 = v13; /*0x70fe76*/
  v14 = v13 * v6; /*0x70fe7e*/
  v17 = v10 * a4; /*0x70fe86*/
  v22 = v10 * a5; /*0x70fe8c*/
  v20 = v6 * v6; /*0x70fe96*/
  *this = v20 * v8 + v5; /*0x70fea2*/
  *(this + 1) = v22 + v12; /*0x70feb3*/
  *(this + 2) = v19 - v17; /*0x70febe*/
  *(this + 3) = v12 - v22; /*0x70fec3*/
  v21 = v7 * v7; /*0x70fec8*/
  *(this + 4) = v21 * v8 + v5; /*0x70fed4*/
  *(this + 5) = v14 + v15; /*0x70fee7*/
  *(this + 6) = v17 + v19; /*0x70fef2*/
  *(this + 7) = v15 - v14; /*0x70fef7*/
  v18 = v9 * v9; /*0x70ff00*/
  *(this + 8) = v5 + v8 * v18; /*0x70ff0a*/
}
