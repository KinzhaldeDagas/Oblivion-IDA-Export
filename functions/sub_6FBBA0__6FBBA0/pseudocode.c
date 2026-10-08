NiPoint3 *__thiscall sub_6FBBA0(const NiPoint3 *this, NiPoint3 *out)
{
  double v3; // st7
  float v4; // [esp+4h] [ebp-8h]
  float v5; // [esp+8h] [ebp-4h]
  float v6; // [esp+8h] [ebp-4h]
  float v7; // [esp+8h] [ebp-4h]

  v4 = fabs(this->x); /*0x6fbbac*/
  v5 = fabs(this->y); /*0x6fbbb5*/
  if ( v5 <= (double)v4 ) /*0x6fbbc8*/
  {
    v3 = v5; /*0x6fbc0a*/
    v7 = fabs(this->z); /*0x6fbc11*/
    if ( v7 < v3 ) /*0x6fbc20*/
      goto LABEL_3; /*0x6fbc20*/
    NiPoint3__NormalizedCrossProduct(this, out, &stru_B258DC); /*0x6fbc28*/
    return out; /*0x6fbc2d*/
  }
  else
  {
    v6 = fabs(this->z); /*0x6fbbd1*/
    if ( v6 < (double)v4 ) /*0x6fbbe0*/
    {
LABEL_3:
      NiPoint3__NormalizedCrossProduct(this, out, &rhs); /*0x6fbbe2*/
      return out; /*0x6fbbf3*/
    }
    NiPoint3__NormalizedCrossProduct(this, out, &stru_B258D0); /*0x6fbbfc*/
    return out; /*0x6fbc01*/
  }
}
