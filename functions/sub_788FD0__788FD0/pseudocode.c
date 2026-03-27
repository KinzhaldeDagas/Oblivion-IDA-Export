_DWORD *__thiscall sub_788FD0(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // esi
  char *v3; // edi
  char *v4; // ebx
  int v5; // [esp+0h] [ebp-8h] BYREF

  result = (_DWORD *)*(this + 1);
  if ( result )
  {
    v2 = result + 0x16;
    v3 = (char *)result[0x18];
    if ( result[0x17] > (unsigned int)v3 )
      _invalid_parameter_noinfo();
    v4 = (char *)v2[1];
    if ( (unsigned int)v4 > v2[2] )
      _invalid_parameter_noinfo();
    return sub_439050(v2, (int)v4, &v5, (int)v2, v4, (int)v2, v3);
  }
  return result;
}
