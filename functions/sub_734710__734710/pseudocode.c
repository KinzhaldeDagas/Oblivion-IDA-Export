char *__thiscall sub_734710(char *this)
{
  double v1; // st7
  double v2; // st6
  unsigned int v3; // edx
  char *v4; // esi
  double v5; // st5

  v1 = dbl_A492F0; /*0x734710*/
  v2 = dbl_A3DDD8; /*0x734719*/
  v3 = 0; /*0x73471f*/
  *(_DWORD *)this = 0; /*0x734722*/
  *((_DWORD *)this + 1) = sub_733F90; /*0x734724*/
  *((_DWORD *)this + 2) = 0; /*0x73472b*/
  *((_DWORD *)this + 3) = 0; /*0x73472e*/
  v4 = this + 0x11; /*0x734731*/
  do /*0x7347c5*/
  {
    v4[0xFFFFFFFF] = (int)((double)(v3 & 0xF) / v1 * v2); /*0x73476e*/
    v5 = (double)((unsigned __int8)v3++ >> 4); /*0x734783*/
    v4 += 2; /*0x734794*/
    v4[0xFFFFFFFE] = (int)(v5 / v1 * v2); /*0x7347be*/
  }
  while ( v3 < 0x100 ); /*0x7347c5*/
  return this; /*0x7347d1*/
}
