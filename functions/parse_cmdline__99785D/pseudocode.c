char **__usercall parse_cmdline@<eax>(char *a1@<edx>, _DWORD *a2@<edi>, char **a3, char *a4, _DWORD *a5)
{
  _DWORD *v5; // ecx
  char *v7; // edx
  char **v8; // ebx
  char v9; // bl
  char *v10; // ecx
  char **v11; // eax
  int v12; // ebx
  unsigned int v13; // ecx
  char v14; // al
  char *v15; // ecx
  char *v16; // ecx
  char **result; // eax
  unsigned int v18; // [esp-4h] [ebp-10h]
  BOOL v19; // [esp+8h] [ebp-4h]
  BOOL v20; // [esp+8h] [ebp-4h]

  v5 = a5;
  *a2 = 0;
  v7 = a4;
  *a5 = 1;
  if ( a3 )
  {
    v8 = a3++;
    *v8 = a4;
  }
  v19 = 0;
  do
  {
    if ( *a1 == 0x22 )
    {
      v9 = 0x22;
      ++a1;
      v19 = !v19;
    }
    else
    {
      ++*a2;
      if ( v7 )
      {
        *v7 = *a1;
        a4 = v7 + 1;
      }
      v9 = *a1;
      v18 = (unsigned __int8)*a1++;
      if ( _ismbblead(v18) )
      {
        ++*a2;
        if ( a4 )
        {
          v10 = a4++;
          *v10 = *a1;
        }
        ++a1;
      }
      v7 = a4;
      v5 = a5;
      if ( !v9 )
      {
        --a1;
        goto LABEL_18;
      }
    }
  }
  while ( v19 || v9 != 0x20 && v9 != 9 );
  if ( v7 )
    v7[0xFFFFFFFF] = 0;
LABEL_18:
  v20 = 0;
  while ( *a1 )
  {
    while ( *a1 == 0x20 || *a1 == 9 )
      ++a1;
    if ( !*a1 )
      break;
    if ( a3 )
    {
      v11 = a3++;
      *v11 = v7;
    }
    ++*v5;
    while ( 1 )
    {
      v12 = 1;
      v13 = 0;
      while ( *a1 == 0x5C )
      {
        ++a1;
        ++v13;
      }
      if ( *a1 == 0x22 )
      {
        if ( (v13 & 1) == 0 )
        {
          if ( v20 && a1[1] == 0x22 )
          {
            ++a1;
          }
          else
          {
            v12 = 0;
            v20 = !v20;
          }
        }
        v13 >>= 1;
      }
      if ( v13 )
      {
        do
        {
          --v13;
          if ( v7 )
            *v7++ = 0x5C;
          ++*a2;
        }
        while ( v13 );
        a4 = v7;
      }
      v14 = *a1;
      if ( !*a1 || !v20 && (v14 == 0x20 || v14 == 9) )
        break;
      if ( v12 )
      {
        if ( v7 )
        {
          if ( _ismbblead(v14) )
          {
            v15 = a4++;
            *v15 = *a1++;
            ++*a2;
          }
          v16 = a4++;
          *v16 = *a1;
        }
        else if ( _ismbblead(v14) )
        {
          ++a1;
          ++*a2;
        }
        ++*a2;
        v7 = a4;
      }
      ++a1;
    }
    if ( v7 )
    {
      *v7++ = 0;
      a4 = v7;
    }
    ++*a2;
    v5 = a5;
  }
  result = a3;
  if ( a3 )
    *a3 = 0;
  ++*v5;
  return result;
}
