bool *__thiscall sub_90D380(_DWORD *this, bool *a2)
{
  _DWORD *i; // eax

  for ( i = (_DWORD *)*(this + 1); i; i = (_DWORD *)i[1] )
    this = i;
  *a2 = *(this + 3) != 0;
  return a2;
}
