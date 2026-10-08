float *__thiscall sub_974110(
        float *this,
        int a2,
        float *a3,
        float *a4,
        float *a5,
        float a6,
        float a7,
        float a8,
        int a9)
{
  double v10; // st7
  double v11; // st7
  float v13; // [esp+14h] [ebp-Ch]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+18h] [ebp-8h]
  float v17; // [esp+1Ch] [ebp-4h]
  float v18; // [esp+1Ch] [ebp-4h]

  sub_96F0E0(this, a6, a7, a8, a9); /*0x974135*/
  *(_DWORD *)this = &NiCapsuleTriIntersector::`vftable'; /*0x974142*/
  *((_DWORD *)this + 0xE) = a2; /*0x974148*/
  *(this + 0xF) = *a3; /*0x97414d*/
  *(this + 0x10) = a3[1]; /*0x974153*/
  *(this + 0x11) = a3[2]; /*0x974159*/
  v13 = *a4 - *a3; /*0x974164*/
  v15 = a4[1] - a3[1]; /*0x97416e*/
  v10 = a4[2] - a3[2]; /*0x974179*/
  *(this + 0x12) = v13; /*0x97417c*/
  *(this + 0x13) = v15; /*0x974183*/
  v17 = v10; /*0x974186*/
  *(this + 0x14) = v17; /*0x97418e*/
  v14 = *a5 - *a3; /*0x974199*/
  v16 = a5[1] - a3[1]; /*0x9741a3*/
  v11 = a5[2] - a3[2]; /*0x9741ae*/
  *(this + 0x15) = v14; /*0x9741b5*/
  *(this + 0x16) = v16; /*0x9741b8*/
  v18 = v11; /*0x9741bb*/
  *(this + 0x17) = v18; /*0x9741c3*/
  *(this + 0x18) = 1.0 / (*(float *)(a2 + 0x38) * *(float *)(a2 + 0x38)); /*0x9741d1*/
  *(this + 0x19) = flt_A7DEB4; /*0x9741da*/
  *(this + 0x1A) = flt_A7DEB4; /*0x9741e3*/
  return this; /*0x9741e7*/
}
