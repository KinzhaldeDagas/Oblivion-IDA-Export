float *__thiscall sub_9767D0(
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

  sub_96F0E0(this, a6, a7, a8, a9); /*0x9767f5*/
  *(_DWORD *)this = &NiSphereTriIntersector::`vftable'; /*0x976802*/
  *((_DWORD *)this + 0xE) = a2; /*0x976808*/
  *(this + 0xF) = *a3; /*0x97680d*/
  *(this + 0x10) = a3[1]; /*0x976813*/
  *(this + 0x11) = a3[2]; /*0x976819*/
  v13 = *a4 - *a3; /*0x976824*/
  v15 = a4[1] - a3[1]; /*0x97682e*/
  v10 = a4[2] - a3[2]; /*0x976839*/
  *(this + 0x12) = v13; /*0x97683c*/
  *(this + 0x13) = v15; /*0x976843*/
  v17 = v10; /*0x976846*/
  *(this + 0x14) = v17; /*0x97684e*/
  v14 = *a5 - *a3; /*0x976859*/
  v16 = a5[1] - a3[1]; /*0x976863*/
  v11 = a5[2] - a3[2]; /*0x97686e*/
  *(this + 0x15) = v14; /*0x976875*/
  *(this + 0x16) = v16; /*0x976878*/
  v18 = v11; /*0x97687b*/
  *(this + 0x17) = v18; /*0x976883*/
  *(this + 0x18) = 1.0 / (*(float *)(a2 + 0x10) * *(float *)(a2 + 0x10)); /*0x976891*/
  *(this + 0x19) = flt_A7DEB4; /*0x97689a*/
  *(this + 0x1A) = flt_A7DEB4; /*0x9768a3*/
  return this; /*0x9768a7*/
}
