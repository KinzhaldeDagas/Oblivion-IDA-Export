void __thiscall sub_75C1C0(float *this, float *a2)
{
  float *v2; // esi

  *(this + 0x10) = *a2; /*0x75c1c6*/
  *(this + 0x11) = a2[1]; /*0x75c1cc*/
  *(this + 0x12) = a2[2]; /*0x75c1d2*/
  v2 = this + 0x13; /*0x75c1d6*/
  *(this + 0x13) = *a2; /*0x75c1db*/
  *(this + 0x14) = a2[1]; /*0x75c1e0*/
  *(this + 0x15) = a2[2]; /*0x75c1e8*/
  Vector3_NormalizeInPlace(this + 0x13); /*0x75c1eb*/
  if ( g_zeroNiPoint3.x == *v2 && g_zeroNiPoint3.y == v2[1] && g_zeroNiPoint3.z == v2[2] ) /*0x75c225*/
  {
    *v2 = stru_B258D0.x; /*0x75c22d*/
    v2[1] = stru_B258D0.y; /*0x75c235*/
    v2[2] = stru_B258D0.z; /*0x75c23d*/
  }
}
