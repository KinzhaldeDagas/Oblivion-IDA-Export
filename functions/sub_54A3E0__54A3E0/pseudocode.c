char __thiscall sub_54A3E0(_DWORD *this, unsigned int a2, float a3)
{
  int v3; // ecx
  double v4; // st7
  float *v5; // ecx

  if ( a2 >= *(this + 4) ) /*0x54a3e7*/
    return 0; /*0x54a3e7*/
  v3 = *(this + 3); /*0x54a3e9*/
  v4 = *(float *)(v3 + 4 * a2); /*0x54a3ec*/
  v5 = (float *)(v3 + 4 * a2); /*0x54a3ef*/
  if ( a3 == v4 ) /*0x54a401*/
    return 0; /*0x54a40c*/
  *v5 = a3; /*0x54a403*/
  return 1; /*0x54a407*/
}
