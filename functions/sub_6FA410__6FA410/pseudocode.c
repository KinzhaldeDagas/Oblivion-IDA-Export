int __cdecl sub_6FA410(char *a1, char *C)
{
  char v2; // al
  char *v3; // esi
  int result; // eax
  char *v5; // edi
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

  v2 = *C; /*0x6fa415*/
  v3 = C + 1; /*0x6fa417*/
  Ca = *C; /*0x6fa41c*/
  if ( !Ca ) /*0x6fa420*/
    return *a1 == 0; /*0x6fa42e*/
  if ( v2 == 0x3F ) /*0x6fa431*/
  {
    if ( a1 ) /*0x6fa439*/
      return sub_6FA410(a1 + 1, v3); /*0x6fa440*/
    else
      return 0; /*0x6fa44a*/
  }
  if ( v2 == 0x2A ) /*0x6fa451*/
  {
    if ( !*v3 ) /*0x6fa453*/
      return 1; /*0x6fa459*/
    v5 = a1; /*0x6fa460*/
    if ( !*a1 ) /*0x6fa464*/
      return 2; /*0x6fa489*/
    while ( 1 ) /*0x6fa472*/
    {
      result = sub_6FA410(v5, v3); /*0x6fa472*/
      if ( result ) /*0x6fa47c*/
        break; /*0x6fa47c*/
      if ( !*++v5 ) /*0x6fa485*/
        return 2; /*0x6fa487*/
    }
    return result; /*0x6fa45f*/
  }
  if ( v2 != 0x5B ) /*0x6fa494*/
  {
    if ( v2 != 0x5C || (v14 = *v3, ++v3, (Ca = v14) != 0) ) /*0x6fa5c5*/
    {
      v15 = sub_6FA3F0(*a1); /*0x6fa5d9*/
      if ( (unsigned __int8)sub_6FA3F0(Ca) == v15 ) /*0x6fa5e5*/
        return sub_6FA410(a1 + 1, v3); /*0x6fa5f7*/
    }
    return 0; /*0x6fa5e5*/
  }
  v6 = a1; /*0x6fa49a*/
  if ( !*a1 ) /*0x6fa4a1*/
    return 0; /*0x6fa5fa*/
  Cb = *v3 == 0x5E; /*0x6fa4af*/
  if ( *v3 == 0x5E ) /*0x6fa4b3*/
    ++v3; /*0x6fa4b5*/
  v7 = 0; /*0x6fa4ba*/
  for ( i = v3; *i; ++i ) /*0x6fa4b8*/
  {
    if ( v7 ) /*0x6fa4c5*/
    {
      v7 = 0; /*0x6fa4c7*/
    }
    else if ( *i == 0x5C ) /*0x6fa4d0*/
    {
      v7 = 1; /*0x6fa4d2*/
    }
    else if ( *i == 0x5D ) /*0x6fa4d8*/
    {
      goto LABEL_26; /*0x6fa4d8*/
    }
  }
  if ( *i != 0x5D ) /*0x6fa4e7*/
    return 0; /*0x6fa4e7*/
LABEL_26:
  v9 = 0; /*0x6fa4ed*/
  for ( j = *v3 == 0x2D; v3 < i; ++v3 ) /*0x6fa4f7*/
  {
    if ( !j ) /*0x6fa502*/
    {
      if ( *v3 == 0x5C ) /*0x6fa508*/
      {
        j = 1; /*0x6fa50a*/
        continue; /*0x6fa50c*/
      }
      if ( *v3 == 0x2D ) /*0x6fa510*/
      {
        v9 = v3[0xFFFFFFFF]; /*0x6fa512*/
        continue; /*0x6fa515*/
      }
    }
    v11 = *v6; /*0x6fa51e*/
    if ( (unk_B3F480 & 1) == 0 ) /*0x6fa520*/
      v11 = toupper(v11); /*0x6fa526*/
    if ( v3[1] != 0x2D ) /*0x6fa532*/
    {
      if ( !v9 ) /*0x6fa536*/
        v9 = *v3; /*0x6fa538*/
      if ( v9 <= *v3 ) /*0x6fa53c*/
      {
        v12 = v11; /*0x6fa53e*/
        while ( 1 ) /*0x6fa548*/
        {
          v13 = v9; /*0x6fa548*/
          if ( (unk_B3F480 & 1) == 0 ) /*0x6fa54b*/
            v13 = toupper(v9); /*0x6fa54e*/
          if ( v13 == v12 ) /*0x6fa55b*/
            break; /*0x6fa55b*/
          if ( ++v9 > *v3 ) /*0x6fa562*/
          {
            v6 = a1; /*0x6fa564*/
            goto LABEL_44; /*0x6fa564*/
          }
        }
        if ( !Cb ) /*0x6fa594*/
          return sub_6FA410(a1 + 1, i + 1); /*0x6fa5ae*/
        return 0; /*0x6fa5b5*/
      }
    }
LABEL_44:
    j = 0; /*0x6fa568*/
    v9 = 0; /*0x6fa56a*/
  }
  if ( !Cb ) /*0x6fa578*/
    return 0; /*0x6fa578*/
  return sub_6FA410(v6 + 1, i + 1); /*0x6fa42a*/
}
