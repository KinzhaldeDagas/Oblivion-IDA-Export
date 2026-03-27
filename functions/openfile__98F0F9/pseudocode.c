_DWORD *__usercall _openfile@<eax>(int a1@<edi>, LPCSTR lpFileName, char *a3, int a4, _DWORD *a5)
{
  char v6; // al
  int v8; // ecx
  char *v9; // esi
  char v10; // al
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  size_t v21; // [esp-8h] [ebp-20h]
  int v22; // [esp+8h] [ebp-10h] BYREF
  int v23; // [esp+Ch] [ebp-Ch]
  int v24; // [esp+10h] [ebp-8h]
  unsigned int v25; // [esp+14h] [ebp-4h]
  unsigned int v26; // [esp+24h] [ebp+Ch]

  v25 = dword_BAA7B8;
  v23 = 0;
  v24 = 0;
  v22 = 0;
  while ( *a3 == 0x20 )
    ++a3;
  v6 = *a3;
  if ( *a3 == 0x61 )
  {
    v26 = 0x109;
LABEL_11:
    v25 |= 2u;
    goto LABEL_12;
  }
  if ( v6 != 0x72 )
  {
    if ( v6 != 0x77 )
    {
      *_errno() = 0x16;
      _invalid_parameter(0, a1, (int)a3);
      return 0;
    }
    v26 = 0x301;
    goto LABEL_11;
  }
  v25 |= 1u;
  v26 = 0;
LABEL_12:
  v8 = 1;
  v9 = a3 + 1;
  v10 = *v9;
  HIDWORD(v21) = a1;
  if ( !*v9 )
    goto LABEL_62;
  a1 = 0x4000;
  while ( v8 )
  {
    if ( v10 > 0x53 )
    {
      v16 = v10 - 0x54;
      if ( !v16 )
      {
        if ( (v26 & 0x1000) == 0 )
        {
          v26 |= 0x1000u;
          goto LABEL_49;
        }
        goto LABEL_47;
      }
      v17 = v16 - 0xE;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          v19 = v18 - 0xB;
          if ( v19 )
          {
            if ( v19 != 6 )
              goto LABEL_64;
            if ( (v26 & 0xC000) != 0 )
              goto LABEL_47;
            v26 |= 0x4000u;
          }
          else
          {
            if ( v23 )
              goto LABEL_47;
            v25 &= ~0x4000u;
            v23 = 1;
          }
        }
        else
        {
          if ( v23 )
            goto LABEL_47;
          v25 |= 0x4000u;
          v23 = 1;
        }
      }
      else
      {
        if ( (v26 & 0xC000) != 0 )
          goto LABEL_47;
        v26 |= 0x8000u;
      }
    }
    else if ( v10 == 0x53 )
    {
      if ( v24 )
        goto LABEL_47;
      v26 |= 0x20u;
      v24 = 1;
    }
    else
    {
      v11 = v10 - 0x20;
      if ( v11 )
      {
        v12 = v11 - 0xB;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( !v13 )
          {
            v22 = 1;
LABEL_47:
            v8 = 0;
            goto LABEL_49;
          }
          v14 = v13 - 0x18;
          if ( v14 )
          {
            v15 = v14 - 0xA;
            if ( v15 )
            {
              if ( v15 != 4 )
                goto LABEL_64;
              if ( v24 )
                goto LABEL_47;
              v26 |= 0x10u;
              v24 = 1;
            }
            else
            {
              v26 |= 0x80u;
            }
          }
          else
          {
            if ( (v26 & 0x40) != 0 )
              goto LABEL_47;
            v26 |= 0x40u;
          }
        }
        else
        {
          if ( (v26 & 2) != 0 )
            goto LABEL_47;
          v26 = v26 & 0xFFFFFFFC | 2;
          v25 = v25 & 0xFFFFFF7C | 0x80;
        }
      }
    }
LABEL_49:
    v10 = *++v9;
    if ( !*v9 )
      break;
  }
  if ( !v22 )
    goto LABEL_62;
  while ( *v9 == 0x20 )
    ++v9;
  LODWORD(v21) = 4;
  if ( sub_9868DD(0x4000, (int)v9, "ccs=", v9, v21) )
    goto LABEL_64;
  v9 += 4;
  if ( !_mbsicmp((const unsigned __int8 *)v9, "UTF-8") )
  {
    v9 += 5;
    v26 |= 0x40000u;
    goto LABEL_62;
  }
  if ( !_mbsicmp((const unsigned __int8 *)v9, "UTF-16LE") )
  {
    v9 += 8;
    v26 |= 0x20000u;
    goto LABEL_62;
  }
  if ( _mbsicmp((const unsigned __int8 *)v9, "UNICODE") )
    goto LABEL_64;
  v9 += 7;
  v26 |= 0x10000u;
LABEL_62:
  while ( *v9 == 0x20 )
    ++v9;
  if ( *v9 )
  {
LABEL_64:
    *_errno() = 0x16;
    _invalid_parameter(0, a1, (int)v9);
    return 0;
  }
  if ( _wsopen_s((int)&v22, lpFileName, v26, a4, 0x180) )
    return 0;
  ++dword_BA9E14;
  a5[3] = v25;
  v20 = v22;
  a5[1] = 0;
  *a5 = 0;
  a5[2] = 0;
  a5[7] = 0;
  a5[4] = v20;
  return a5;
}
