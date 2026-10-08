int __thiscall sub_718A50(float *this)
{
  int result; // eax
  float z; // edx

  sub_70FD10(this); /*0x718a53*/
  result = LODWORD(g_zeroNiPoint3.x); /*0x718a5a*/
  *(this + 9) = g_zeroNiPoint3.x; /*0x718a5f*/
  *(this + 0xA) = g_zeroNiPoint3.y; /*0x718a68*/
  z = g_zeroNiPoint3.z; /*0x718a6b*/
  *(this + 0xC) = 1.0; /*0x718a71*/
  *(this + 0xB) = z; /*0x718a74*/
  return result; /*0x718a77*/
}
