_DWORD *__thiscall sub_789030(unsigned int **this)
{
  unsigned int *v2; // esi
  _DWORD *result; // eax
  _DWORD *v4; // esi
  char *v5; // ebp
  char *v6; // ebx
  int v7; // edi
  _DWORD *v8; // esi
  char *v9; // edi
  char *v10; // ebx
  int v11[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = *(this + 0x14);
  if ( v2 )
  {
    if ( v2[0xF] >= 0x10 )
      FormHeapFree(v2[0xA]);
    v2[0xF] = 0xF;
    v2[0xE] = 0;
    *((_BYTE *)v2 + 0x28) = 0;
    FormHeapFree((unsigned int)v2);
    *(this + 0x14) = 0;
  }
  result = *(this + 1);
  if ( result )
  {
    v4 = result + 0x3A;
    v5 = (char *)result[0x3C];
    if ( result[0x3B] > (unsigned int)v5 )
      _invalid_parameter_noinfo();
    v6 = (char *)v4[1];
    if ( (unsigned int)v6 > v4[2] )
      _invalid_parameter_noinfo();
    result = sub_439050(v4, (int)v6, v11, (int)v4, v6, (int)v4, v5);
  }
  v7 = (int)*(this + 0x18);
  if ( v7 )
  {
    v8 = (_DWORD *)(v7 + 0xE8);
    v9 = *(char **)(v7 + 0xF0);
    if ( v8[1] > (unsigned int)v9 )
      _invalid_parameter_noinfo();
    v10 = (char *)v8[1];
    if ( (unsigned int)v10 > v8[2] )
      _invalid_parameter_noinfo();
    return sub_439050(v8, (int)v10, v11, (int)v8, v10, (int)v8, v9);
  }
  return result;
}
