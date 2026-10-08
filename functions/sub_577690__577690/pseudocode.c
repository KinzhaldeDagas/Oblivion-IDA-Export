void __thiscall sub_577690(float *this)
{
  float v2; // ecx
  double v3; // st7
  float v4; // [esp+Ch] [ebp-8h]

  v2 = flt_A68A8C; /*0x5776ae*/
  v3 = flt_A68A88; /*0x5776b2*/
  *(this + 2) = flt_A68A90; /*0x5776b8*/
  v4 = v3; /*0x5776bb*/
  *(this + 3) = v2; /*0x5776c5*/
  *(this + 4) = v4; /*0x5776cc*/
  *this = 0.0; /*0x5776d3*/
  *(this + 5) = 1.0; /*0x5776d9*/
  *((_DWORD *)this + 6) = 1; /*0x5776dc*/
  FormHeapFree(*((_DWORD *)this + 7)); /*0x5776e7*/
  *(this + 7) = 0.0; /*0x5776f3*/
  *((_WORD *)this + 0x11) = 0; /*0x5776fa*/
  *((_WORD *)this + 0x10) = 0; /*0x577700*/
  sub_577120((int *)this, 0x20); /*0x577706*/
}
