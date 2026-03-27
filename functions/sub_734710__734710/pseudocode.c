char *__thiscall sub_734710(char *this)
{
  double v1; // st7
  double v2; // st6
  unsigned int v3; // edx
  char *v4; // esi
  double v5; // st5

  v1 = dbl_A492F0;
  v2 = dbl_A3DDD8;
  v3 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = sub_733F90;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v4 = this + 0x11;
  do
  {
    v4[0xFFFFFFFF] = (int)((double)(v3 & 0xF) / v1 * v2);
    v5 = (double)((unsigned __int8)v3++ >> 4);
    v4 += 2;
    v4[0xFFFFFFFE] = (int)(v5 / v1 * v2);
  }
  while ( v3 < 0x100 );
  return this;
}
