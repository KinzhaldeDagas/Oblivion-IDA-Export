int __thiscall sub_6FEFE0(float *this)
{
  int result; // eax

  *(this + 9) = g_zeroNiPoint3.x; /*0x6fefe5*/
  *(this + 0xA) = g_zeroNiPoint3.y; /*0x6fefee*/
  result = LODWORD(g_zeroNiPoint3.z); /*0x6feff1*/
  *(this + 0xB) = g_zeroNiPoint3.z; /*0x6feff6*/
  return result; /*0x6feff9*/
}
