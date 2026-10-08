void __thiscall sub_7152A0(float *this)
{
  double v1; // st7
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v2 = fabs(*(this + 1)); /*0x7152a6*/
  v1 = flt_A7E738; /*0x7152b6*/
  if ( v1 >= v2 && 0.0 != *(this + 1) ) /*0x7152c7*/
    *(this + 1) = 0.0; /*0x7152c9*/
  v3 = fabs(*(this + 2)); /*0x7152d1*/
  if ( v3 <= v1 && 0.0 != *(this + 2) ) /*0x7152e8*/
    *(this + 2) = 0.0; /*0x7152ea*/
  v4 = fabs(*(this + 3)); /*0x7152f2*/
  if ( v4 <= v1 && 0.0 != *(this + 3) ) /*0x715309*/
    *(this + 3) = 0.0; /*0x71530b*/
  v5 = fabs(*this); /*0x715312*/
  if ( v5 <= v1 && 0.0 != *this ) /*0x71532a*/
    *this = 0.0; /*0x71532c*/
}
