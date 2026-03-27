unsigned int **__thiscall sub_78D4E0(unsigned int *this, _BYTE *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // edx
  _BYTE *v5; // eax
  unsigned int **result; // eax
  char *v7; // edi
  int v8; // [esp+4h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = *(this + 2) - v3;
  else
    v4 = 0;
  if ( v3 && v4 < *(this + 3) - v3 )
  {
    v5 = (_BYTE *)*(this + 2);
    *v5 = *a2;
    result = (unsigned int **)(v5 + 1);
    *(this + 2) = (unsigned int)result;
  }
  else
  {
    v7 = (char *)*(this + 2);
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return sub_78C860(this, (unsigned int **)&v8, this, v7, a2);
  }
  return result;
}
