signed int __cdecl sub_6F5CB0(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v6; // esi
  unsigned int v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned __int8 *v9; // edx
  unsigned int v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // edx
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  signed int result; // eax

  v3 = a3;
  if ( a3 < 4 )
  {
LABEL_4:
    if ( !v3 )
      return 0;
  }
  else
  {
    while ( *a1 == *a2 )
    {
      v3 -= 4;
      ++a2;
      ++a1;
      if ( v3 < 4 )
        goto LABEL_4;
    }
  }
  v6 = *(unsigned __int8 *)a1 - *(unsigned __int8 *)a2;
  if ( !v6 )
  {
    v7 = v3 - 1;
    v8 = (unsigned __int8 *)a2 + 1;
    v9 = (unsigned __int8 *)a1 + 1;
    if ( !v7 )
      return 0;
    v6 = *v9 - *v8;
    if ( !v6 )
    {
      v10 = v7 - 1;
      v11 = v8 + 1;
      v12 = v9 + 1;
      if ( !v10 )
        return 0;
      v6 = *v12 - *v11;
      if ( !v6 )
      {
        v13 = v11 + 1;
        v14 = v12 + 1;
        if ( v10 == 1 )
          return 0;
        v6 = *v14 - *v13;
        if ( !v6 )
          return 0;
      }
    }
  }
  result = 1;
  if ( v6 <= 0 )
    return 0xFFFFFFFF;
  return result;
}
