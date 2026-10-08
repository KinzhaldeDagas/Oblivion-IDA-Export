_DWORD *__thiscall sub_9179B0(_DWORD *this, int a2, _OWORD *a3)
{
  _DWORD *result; // eax
  double v4; // st7
  int v5; // ecx

  result = this; /*0x9179b0*/
  v4 = *(float *)(a2 + 0xC); /*0x9179b6*/
  *(this + 4) = a2; /*0x9179b9*/
  *((float *)this + 3) = v4; /*0x9179c0*/
  *((_WORD *)this + 3) = 1; /*0x9179c3*/
  *(this + 2) = 0; /*0x9179c9*/
  *this = &off_A9D0E8; /*0x9179d0*/
  *((_OWORD *)this + 2) = *a3; /*0x9179d9*/
  *((_OWORD *)this + 3) = a3[1]; /*0x9179e1*/
  *((_OWORD *)this + 4) = a3[2]; /*0x9179e9*/
  *((_OWORD *)this + 5) = a3[3]; /*0x9179f1*/
  v5 = *(this + 4); /*0x9179f5*/
  if ( *(_WORD *)(v5 + 4) ) /*0x9179f8*/
    ++*(_WORD *)(v5 + 6); /*0x9179ff*/
  return result; /*0x917a03*/
}
