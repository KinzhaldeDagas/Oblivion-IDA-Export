_DWORD *__thiscall sub_8E7B70(_DWORD *this, _WORD *a2, int a3, int a4)
{
  _WORD *v5; // ecx

  *(this + 4) = a4;
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 5) = 0;
  *this = &off_A9A77C;
  *(this + 6) = a2;
  *(this + 7) = a3;
  if ( a3 )
  {
    if ( !a2 )
      goto LABEL_6;
  }
  else if ( !a2 )
  {
    return this;
  }
  sub_8BC720(a2);
LABEL_6:
  v5 = (_WORD *)*(this + 7);
  if ( v5 )
    sub_8BC720(v5);
  return this;
}
