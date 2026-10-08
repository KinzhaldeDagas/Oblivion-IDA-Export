int __thiscall sub_8EADE0(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  int result; // eax

  v2 = *(this + 0x3F); /*0x8eade0*/
  v3 = a2[0xA]; /*0x8eadea*/
  v4 = a2[5]; /*0x8eaded*/
  result = *(_DWORD *)a2; /*0x8eadf0*/
  *(this + 0x3C) = *a2; /*0x8eadf2*/
  *(this + 0x3D) = v4; /*0x8eadf8*/
  *(this + 0x3E) = v3; /*0x8eadfe*/
  *(this + 0x3F) = v2; /*0x8eae04*/
  return result; /*0x8eae0a*/
}
