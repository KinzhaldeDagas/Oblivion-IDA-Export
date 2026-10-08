int __thiscall sub_769F90(_DWORD *this, float *a2)
{
  double v2; // rt0
  int result; // eax

  v2 = dbl_A3DDD8; /*0x769fb0*/
  result = (unsigned __int8)(int)(v2 * a2[2]); /*0x76a021*/
  *(this + 0x175) = result | (((unsigned __int8)(int)(a2[1] * v2) | (((int)(*a2 * v2) | 0xFFFFFF00) << 8)) << 8); /*0x76a02a*/
  return result; /*0x76a032*/
}
