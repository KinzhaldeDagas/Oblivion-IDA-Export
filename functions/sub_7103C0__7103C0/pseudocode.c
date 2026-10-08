float *__thiscall sub_7103C0(float *this, float *a2)
{
  bool v2; // zf
  float *result; // eax

  v2 = sub_7102B0(this, a2) == 0; /*0x7103cb*/
  result = a2; /*0x7103cd*/
  if ( v2 ) /*0x7103cf*/
  {
    *a2 = 0.0; /*0x7103d3*/
    a2[3] = 0.0; /*0x7103d5*/
    a2[6] = 0.0; /*0x7103d8*/
    a2[1] = 0.0; /*0x7103db*/
    a2[4] = 0.0; /*0x7103de*/
    a2[7] = 0.0; /*0x7103e1*/
    a2[2] = 0.0; /*0x7103e4*/
    a2[5] = 0.0; /*0x7103e7*/
    a2[8] = 0.0; /*0x7103ea*/
  }
  return result; /*0x7103ed*/
}
