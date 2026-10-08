char __thiscall sub_70D300(float *this, int a2, int a3, float *a4, float a5)
{
  double v6; // st7
  double v7; // st6
  float v9; // [esp+4h] [ebp-10h]
  float *v10; // [esp+Ch] [ebp-8h]

  if ( !renderer ) /*0x70d303*/
    return 0; /*0x70d303*/
  if ( !sub_701540(renderer, a2, a3, (float *)&a3, (float *)&a2) ) /*0x70d325*/
    return 0; /*0x70d325*/
  v6 = *(float *)&a3; /*0x70d332*/
  if ( *(this + 0x45) < (double)*(float *)&a3 ) /*0x70d343*/
    return 0; /*0x70d343*/
  if ( *(this + 0x44) > v6 ) /*0x70d356*/
    return 0; /*0x70d356*/
  v7 = *(float *)&a2; /*0x70d35c*/
  if ( *(this + 0x46) < (double)*(float *)&a2 || *(this + 0x47) > v7 ) /*0x70d380*/
    return 0; /*0x70d41b*/
  v10 = (float *)LODWORD(a5); /*0x70d3a0*/
  a5 = (v7 - *(this + 0x47)) / (*(this + 0x46) - *(this + 0x47)); /*0x70d3a9*/
  a5 = a5 * (*(this + 0x3D) - *(this + 0x3E)) + *(this + 0x3E); /*0x70d3c5*/
  v9 = a5; /*0x70d3cd*/
  a5 = (v6 - *(this + 0x44)) / (*(this + 0x45) - *(this + 0x44)); /*0x70d3e5*/
  a5 = a5 * (*(this + 0x3C) - *(this + 0x3B)) + *(this + 0x3B); /*0x70d401*/
  sub_70C4D0((int)this, a5, v9, a4, v10); /*0x70d40c*/
  return 1; /*0x70d413*/
}
