int __thiscall sub_54BE80(int this, char a2)
{
  int result; // eax

  *(float *)(this + 0x170) = g_zeroNiPoint3.x; /*0x54be85*/
  *(float *)(this + 0x174) = g_zeroNiPoint3.y; /*0x54be91*/
  result = LODWORD(g_zeroNiPoint3.z); /*0x54be97*/
  *(float *)(this + 0x178) = g_zeroNiPoint3.z; /*0x54bea0*/
  *(_BYTE *)(this + 0x1D4) = a2; /*0x54bea6*/
  return result; /*0x54beac*/
}
