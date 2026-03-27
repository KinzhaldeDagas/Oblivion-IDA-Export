int __cdecl sub_6FA410(char *a1, char *C)
{
  char v2; // al
  char *v3; // esi
  int result; // eax
  int v5; // edi
  char *v6; // edi
  char v7; // cl
  char *i; // ebp
  char v9; // bl
  bool j; // cl
  char v11; // al
  int v12; // edi
  unsigned __int8 v13; // al
  char v14; // al
  char v15; // bl
  char Ca; // [esp+Ch] [ebp+8h]
  bool Cb; // [esp+Ch] [ebp+8h]

  v2 = *C;
  v3 = C + 1;
  Ca = *C;
  if ( !Ca )
    return *a1 == 0;
  if ( v2 == 0x3F )
  {
    if ( a1 )
      return sub_6FA410((int)(a1 + 1), (int)v3);
    else
      return 0;
  }
  if ( v2 == 0x2A )
  {
    if ( !*v3 )
      return 1;
    v5 = (int)a1;
    if ( !*a1 )
      return 2;
    while ( 1 )
    {
      result = sub_6FA410(v5, (int)v3);
      if ( result )
        break;
      if ( !*(_BYTE *)++v5 )
        return 2;
    }
    return result;
  }
  if ( v2 != 0x5B )
  {
    if ( v2 != 0x5C || (v14 = *v3, ++v3, (Ca = v14) != 0) )
    {
      v15 = sub_6FA3F0(*a1);
      if ( (unsigned __int8)sub_6FA3F0(Ca) == v15 )
        return sub_6FA410((int)(a1 + 1), (int)v3);
    }
    return 0;
  }
  v6 = a1;
  if ( !*a1 )
    return 0;
  Cb = *v3 == 0x5E;
  if ( *v3 == 0x5E )
    ++v3;
  v7 = 0;
  for ( i = v3; *i; ++i )
  {
    if ( v7 )
    {
      v7 = 0;
    }
    else if ( *i == 0x5C )
    {
      v7 = 1;
    }
    else if ( *i == 0x5D )
    {
      goto LABEL_26;
    }
  }
  if ( *i != 0x5D )
    return 0;
LABEL_26:
  v9 = 0;
  for ( j = *v3 == 0x2D; v3 < i; ++v3 )
  {
    if ( !j )
    {
      if ( *v3 == 0x5C )
      {
        j = 1;
        continue;
      }
      if ( *v3 == 0x2D )
      {
        v9 = v3[0xFFFFFFFF];
        continue;
      }
    }
    v11 = *v6;
    if ( (byte_B3F480 & 1) == 0 )
      v11 = toupper(v11);
    if ( v3[1] != 0x2D )
    {
      if ( !v9 )
        v9 = *v3;
      if ( v9 <= *v3 )
      {
        v12 = v11;
        while ( 1 )
        {
          v13 = v9;
          if ( (byte_B3F480 & 1) == 0 )
            v13 = toupper(v9);
          if ( v13 == v12 )
            break;
          if ( ++v9 > *v3 )
          {
            v6 = a1;
            goto LABEL_44;
          }
        }
        if ( !Cb )
          return sub_6FA410((int)(a1 + 1), (int)(i + 1));
        return 0;
      }
    }
LABEL_44:
    j = 0;
    v9 = 0;
  }
  if ( !Cb )
    return 0;
  return sub_6FA410((int)(v6 + 1), (int)(i + 1));
}
