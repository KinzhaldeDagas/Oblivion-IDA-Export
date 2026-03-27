_DWORD *__thiscall sub_8CDFE0(_DWORD *this, float *a2, int a3)
{
  double v3; // st7

  *(this + 3) = a3;
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0;
  *this = &off_A99D60;
  *(this + 4) = *(_DWORD *)a2;
  *(this + 5) = *((_DWORD *)a2 + 1);
  *(this + 6) = *((_DWORD *)a2 + 2);
  *(this + 7) = *((_DWORD *)a2 + 3);
  if ( *((float *)this + 4) >= (double)*((float *)this + 5) )
    v3 = *((float *)this + 5);
  else
    v3 = *((float *)this + 4);
  *((float *)this + 7) = v3;
  if ( v3 > *((float *)this + 6) )
    v3 = *((float *)this + 6);
  *((float *)this + 7) = v3;
  return this;
}
