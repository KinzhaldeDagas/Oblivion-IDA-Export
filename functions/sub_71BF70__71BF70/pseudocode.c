void *__stdcall sub_71BF70(int *a1, int a2, int a3)
{
  int v3; // edx
  bool v4; // bl
  unsigned int v5; // eax
  _DWORD *v6; // ecx
  char v7; // al
  int v8; // eax
  void *result; // eax
  int v10; // eax
  bool v11; // zf
  char v12; // al

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 == 2 || v3 == 3 )
  {
    v4 = v3 == 3;
  }
  else
  {
    v5 = 0;
    v6 = (_DWORD *)(a2 + 0x14);
    while ( *v6 != 3 )
    {
      ++v5;
      v6 += 3;
      if ( v5 >= 4 )
      {
        v7 = 0;
        goto LABEL_8;
      }
    }
    v7 = *(_BYTE *)(a2 + 0xC * v5 + 0x1C);
LABEL_8:
    v4 = v7 != 0;
  }
  if ( v3 >= 4 && v3 <= 6 )
    v4 = 1;
  v8 = *a1;
  if ( *a1 == 0xD )
    return &unk_B26088;
  switch ( v8 )
  {
    case 0xC:
      return &unk_B260D0;
    case 2:
      return &unk_B265E0;
    case 1:
      goto LABEL_19;
    case 0:
    case 5:
      result = &unk_B26040;
      goto LABEL_41;
    case 3:
      v10 = *(_DWORD *)(a3 + 4);
      goto LABEL_25;
    case 4:
      return &unk_B25F68;
  }
  if ( v8 != 6 )
    return &unk_B265E0;
  if ( !sub_71B480((_DWORD *)a3) && !sub_70E240((int *)a3) )
  {
    v12 = *(_BYTE *)(a3 + 1);
    switch ( v12 )
    {
      case 0x10:
LABEL_19:
        result = &unk_B26508;
        if ( !v4 )
          return &unk_B263E8;
        return result;
      case 0x40:
        return &unk_B260D0;
      case 0x80:
        return &unk_B26088;
    }
    return &unk_B265E0;
  }
  v10 = *(_DWORD *)(a3 + 4);
LABEL_25:
  if ( v10 == 4 )
    return &unk_B25FB0;
  if ( v10 == 5 )
    return &unk_B25FF8;
  v11 = v10 == 6;
  result = &unk_B26040;
  if ( !v11 )
  {
LABEL_41:
    if ( v4 )
      return result;
    return &unk_B25FB0;
  }
  return result;
}
