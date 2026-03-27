_DWORD *__thiscall sub_8F5750(_DWORD *this, _WORD *a2, int a3)
{
  *(this + 4) = a3;
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 5) = 0;
  *this = &off_A9B370;
  *(this + 6) = a2;
  if ( a2 )
    sub_8BC720(a2);
  return this;
}
