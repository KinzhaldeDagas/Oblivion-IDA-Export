unsigned int __thiscall sub_7A8980(unsigned int *this, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int *v3; // edx
  unsigned int v4; // ecx
  _DWORD *v5; // esi
  unsigned int v6; // edi
  unsigned int result; // eax
  char *v8; // ebp
  unsigned int v9; // ebx
  char *v10; // ebx
  int v11; // ebx
  int v12; // ecx
  unsigned int v13; // edi
  int v15[2]; // [esp+Ch] [ebp-8h] BYREF

  v2 = a2;
  v3 = this;
  v4 = *(this + 2);
  v5 = v3 + 1;
  v6 = (a2 + 0x1F) >> 5;
  if ( v4 )
  {
    result = (int)(v3[3] - v4) >> 2;
    if ( v6 < result )
    {
      v8 = (char *)v3[3];
      if ( v4 > (unsigned int)v8 )
        _invalid_parameter_noinfo();
      v9 = v5[1];
      if ( v9 > v5[2] )
        _invalid_parameter_noinfo();
      v15[1] = v9;
      v10 = (char *)(v9 + 4 * v6);
      if ( (unsigned int)v10 > v5[2] || (unsigned int)v10 < v5[1] )
        _invalid_parameter_noinfo();
      result = (unsigned int)sub_439050(v5, (int)v10, v15, (int)v5, v10, (int)v5, v8);
      v3 = this;
      v2 = a2;
    }
  }
  *v3 = v2;
  v11 = v2 & 0x1F;
  if ( v11 )
  {
    v12 = v5[1];
    v13 = v6 - 1;
    if ( !v12 || v13 >= (v5[2] - v12) >> 2 )
      _invalid_parameter_noinfo();
    result = v5[1] + 4 * v13;
    *(_DWORD *)result &= (1 << v11) - 1;
  }
  return result;
}
