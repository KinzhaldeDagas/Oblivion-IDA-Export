int *__thiscall sub_7ABDE0(_DWORD *this, int *a2)
{
  int *result; // eax
  _DWORD *v4; // ecx

  result = (int *)*(this + 3);
  if ( result )
    *(this + 3) = *result;
  else
    result = sub_44D810();
  result[2] = *a2;
  *result = 0;
  result[1] = *(this + 2);
  v4 = (_DWORD *)*(this + 2);
  if ( v4 )
  {
    *v4 = result;
    ++*(this + 4);
  }
  else
  {
    ++*(this + 4);
    *(this + 1) = result;
  }
  *(this + 2) = result;
  return result;
}
