int __thiscall sub_8D2BD0(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st7
  int result; // eax

  v2 = -a2[1]; /*0x8d2bd9*/
  v3 = a2[2]; /*0x8d2bdb*/
  *this = 0.0; /*0x8d2bde*/
  *(this + 1) = v3; /*0x8d2be0*/
  *(this + 2) = v2; /*0x8d2be3*/
  *(this + 3) = 0.0; /*0x8d2be6*/
  v4 = *a2; /*0x8d2be9*/
  *(this + 4) = -a2[2]; /*0x8d2bf0*/
  *(this + 5) = 0.0; /*0x8d2bf3*/
  *(this + 6) = v4; /*0x8d2bf6*/
  *(this + 7) = 0.0; /*0x8d2bf9*/
  v5 = *a2; /*0x8d2bfc*/
  result = *((_DWORD *)a2 + 1); /*0x8d2bfe*/
  *((_DWORD *)this + 8) = result; /*0x8d2c01*/
  *(this + 9) = -v5; /*0x8d2c06*/
  *(this + 0xA) = 0.0; /*0x8d2c09*/
  *(this + 0xB) = 0.0; /*0x8d2c0c*/
  return result; /*0x8d2c0f*/
}
