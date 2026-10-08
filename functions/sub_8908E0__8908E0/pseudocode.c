double __thiscall sub_8908E0(float *this, float a2, float a3)
{
  double v3; // st7
  float v5; // [esp+4h] [ebp+4h]
  float v6; // [esp+4h] [ebp+4h]

  v3 = a2; /*0x8908e0*/
  if ( *(this + 0xC2) <= 0.0 ) /*0x8908f5*/
  {
    *(this + 0xC1) = 0.0; /*0x890955*/
    return a2; /*0x89095b*/
  }
  else
  {
    if ( *(this + 0xC2) <= (double)a3 ) /*0x89090a*/
      v5 = *(this + 0xC2); /*0x890918*/
    else
      v5 = a3; /*0x89090c*/
    v6 = v3 + *(this + 0xC1) * v5; /*0x89092a*/
    *(this + 0xC2) = *(this + 0xC2) - a3; /*0x890934*/
    *(this + 0xC1) = *(this + 0xC1) - dbl_A68610; /*0x890946*/
    return v6; /*0x89094c*/
  }
}
