unsigned int **__thiscall sub_799780(unsigned int *this, unsigned int **a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  unsigned int **result; // eax
  char *v6; // edi
  int v7; // [esp+4h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) >> 2;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(*(this + 3) - v3) >> 2 )
  {
    result = (unsigned int **)(*(this + 2) + 4);
    result[0xFFFFFFFF] = *a2;
    *(this + 2) = (unsigned int)result;
  }
  else
  {
    v6 = (char *)*(this + 2);
    if ( v3 > (unsigned int)v6 )
      _invalid_parameter_noinfo();
    return sub_7996F0(this, (unsigned int **)&v7, this, v6, a2);
  }
  return result;
}
