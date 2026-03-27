int __thiscall sub_76A040(_DWORD *this, float *a2)
{
  double v2; // rt0
  unsigned __int16 v4; // cx
  int result; // eax

  v2 = dbl_A3DDD8;
  HIBYTE(v4) = (int)(a2[3] * v2);
  LOBYTE(v4) = (int)(*a2 * v2);
  result = (unsigned __int8)(int)(v2 * a2[2]);
  *(this + 0x175) = result | (((unsigned __int8)(int)(a2[1] * v2) | (v4 << 8)) << 8);
  return result;
}
