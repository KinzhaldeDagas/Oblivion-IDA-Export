_DWORD *__thiscall sub_9179B0(_DWORD *this, int a2, _OWORD *a3)
{
  _DWORD *result; // eax
  double v4; // st7
  int v5; // ecx

  result = this;
  v4 = *(float *)(a2 + 0xC);
  *(this + 4) = a2;
  *((float *)this + 3) = v4;
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0;
  *this = &off_A9D0E8;
  *((_OWORD *)this + 2) = *a3;
  *((_OWORD *)this + 3) = a3[1];
  *((_OWORD *)this + 4) = a3[2];
  *((_OWORD *)this + 5) = a3[3];
  v5 = *(this + 4);
  if ( *(_WORD *)(v5 + 4) )
    ++*(_WORD *)(v5 + 6);
  return result;
}
