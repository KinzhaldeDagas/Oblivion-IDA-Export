unsigned int **__thiscall sub_7916D0(unsigned int *this, int *a2)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  _DWORD *v5; // edi
  unsigned int **result; // eax
  char *v7; // ebx
  unsigned int *v8; // [esp+8h] [ebp-8h] BYREF

  v3 = *(this + 1);
  if ( v3 )
    v4 = (int)(*(this + 2) - v3) / 0x18;
  else
    v4 = 0;
  if ( v3 && v4 < (int)(*(this + 3) - v3) / 0x18 )
  {
    v5 = (_DWORD *)*(this + 2);
    LOBYTE(v8) = 0;
    result = (unsigned int **)sub_7848E0(v8, v5, 1, a2);
    *(this + 2) = (unsigned int)(v5 + 6);
  }
  else
  {
    v7 = (char *)*(this + 2);
    if ( v3 > (unsigned int)v7 )
      _invalid_parameter_noinfo();
    return sub_791510(this, &v8, this, v7, a2);
  }
  return result;
}
