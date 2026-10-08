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

  v25 = dword_BA9E10[0x26A]; /*0x98f10b*/
  v23 = 0; /*0x98f10e*/
  v24 = 0; /*0x98f111*/
  v22 = 0; /*0x98f114*/
  while ( *a3 == 0x20 ) /*0x98f11d*/
    ++a3; /*0x98f119*/
  v6 = *a3; /*0x98f11f*/
  if ( *a3 == 0x61 ) /*0x98f123*/
  {
    v26 = 0x109; /*0x98f15e*/
LABEL_11:
    v25 |= 2u; /*0x98f165*/
    goto LABEL_12; /*0x98f165*/
  }
  if ( v6 != 0x72 ) /*0x98f127*/
  {
    if ( v6 != 0x77 ) /*0x98f12b*/
    {
      *_errno() = 0x16; /*0x98f137*/
      _invalid_parameter(0, a1, (int)a3); /*0x98f13d*/
      return 0; /*0x98f147*/
    }
    v26 = 0x301; /*0x98f14c*/
    goto LABEL_11; /*0x98f153*/
  }
  v25 |= 1u; /*0x98f155*/
  v26 = 0; /*0x98f159*/
LABEL_12:
  v8 = 1; /*0x98f169*/
  v9 = a3 + 1; /*0x98f16c*/
  v10 = *v9; /*0x98f16d*/
  HIDWORD(v21) = a1; /*0x98f171*/
  if ( !*v9 ) /*0x98f172*/
    goto LABEL_62; /*0x98f172*/
  a1 = 0x4000; /*0x98f17d*/
  while ( v8 ) /*0x98f184*/
  {
    if ( v10 > 0x53 ) /*0x98f190*/
    {
      v16 = v10 - 0x54; /*0x98f238*/
      if ( !v16 ) /*0x98f23b*/
      {
        if ( (v26 & 0x1000) == 0 ) /*0x98f29d*/
        {
          v26 |= 0x1000u; /*0x98f2a3*/
          goto LABEL_49; /*0x98f2a3*/
        }
        goto LABEL_47; /*0x98f29d*/
      }
      v17 = v16 - 0xE; /*0x98f23d*/
      if ( v17 ) /*0x98f240*/
      {
        v18 = v17 - 1; /*0x98f242*/
        if ( v18 ) /*0x98f243*/
        {
          v19 = v18 - 0xB; /*0x98f245*/
          if ( v19 ) /*0x98f248*/
          {
            if ( v19 != 6 ) /*0x98f24d*/
              goto LABEL_64; /*0x98f24d*/
            if ( (v26 & 0xC000) != 0 ) /*0x98f259*/
              goto LABEL_47; /*0x98f259*/
            v26 |= 0x4000u; /*0x98f25b*/
          }
          else
          {
            if ( v23 ) /*0x98f263*/
              goto LABEL_47; /*0x98f263*/
            v25 &= ~0x4000u; /*0x98f265*/
            v23 = 1; /*0x98f26c*/
          }
        }
        else
        {
          if ( v23 ) /*0x98f278*/
            goto LABEL_47; /*0x98f278*/
          v25 |= 0x4000u; /*0x98f27a*/
          v23 = 1; /*0x98f27d*/
        }
      }
      else
      {
        if ( (v26 & 0xC000) != 0 ) /*0x98f28c*/
          goto LABEL_47; /*0x98f28c*/
        v26 |= 0x8000u; /*0x98f28e*/
      }
    }
    else if ( v10 == 0x53 ) /*0x98f196*/
    {
      if ( v24 ) /*0x98f229*/
        goto LABEL_47; /*0x98f229*/
      v26 |= 0x20u; /*0x98f22b*/
      v24 = 1; /*0x98f22f*/
    }
    else
    {
      v11 = v10 - 0x20; /*0x98f19c*/
      if ( v11 ) /*0x98f19f*/
      {
        v12 = v11 - 0xB; /*0x98f1a5*/
        if ( v12 ) /*0x98f1a8*/
        {
          v13 = v12 - 1; /*0x98f1aa*/
          if ( !v13 ) /*0x98f1ab*/
          {
            v22 = 1; /*0x98f1f4*/
LABEL_47:
            v8 = 0; /*0x98f29f*/
            goto LABEL_49; /*0x98f2a1*/
          }
          v14 = v13 - 0x18; /*0x98f1ad*/
          if ( v14 ) /*0x98f1b0*/
          {
            v15 = v14 - 0xA; /*0x98f1b2*/
            if ( v15 ) /*0x98f1b5*/
            {
              if ( v15 != 4 ) /*0x98f1ba*/
                goto LABEL_64; /*0x98f1ba*/
              if ( v24 ) /*0x98f1c3*/
                goto LABEL_47; /*0x98f1c3*/
              v26 |= 0x10u; /*0x98f1c9*/
              v24 = 1; /*0x98f1cd*/
            }
            else
            {
              v26 |= 0x80u; /*0x98f1d9*/
            }
          }
          else
          {
            if ( (v26 & 0x40) != 0 ) /*0x98f1e5*/
              goto LABEL_47; /*0x98f1e5*/
            v26 |= 0x40u; /*0x98f1eb*/
          }
        }
        else
        {
          if ( (v26 & 2) != 0 ) /*0x98f204*/
            goto LABEL_47; /*0x98f204*/
          v26 = v26 & 0xFFFFFFFC | 2; /*0x98f213*/
          v25 = v25 & 0xFFFFFF7C | 0x80; /*0x98f21e*/
        }
      }
    }
LABEL_49:
    v10 = *++v9; /*0x98f2ab*/
    if ( !*v9 ) /*0x98f2ab*/
      break; /*0x98f2af*/
  }
  if ( !v22 ) /*0x98f2b8*/
    goto LABEL_62; /*0x98f2b8*/
  while ( *v9 == 0x20 ) /*0x98f2c0*/
    ++v9; /*0x98f2bc*/
  LODWORD(v21) = 4; /*0x98f2c2*/
  if ( sub_9868DD(0x4000, (int)v9, "ccs=", v9, v21) ) /*0x98f2ca*/
    goto LABEL_64; /*0x98f2ca*/
  v9 += 4; /*0x98f2d6*/
  if ( !_mbsicmp((const unsigned __int8 *)v9, "UTF-8") ) /*0x98f2df*/
  {
    v9 += 5; /*0x98f2ea*/
    v26 |= 0x40000u; /*0x98f2ed*/
    goto LABEL_62; /*0x98f2f4*/
  }
  if ( !_mbsicmp((const unsigned __int8 *)v9, "UTF-16LE") ) /*0x98f2fc*/
  {
    v9 += 8; /*0x98f307*/
    v26 |= 0x20000u; /*0x98f30a*/
    goto LABEL_62; /*0x98f311*/
  }
  if ( _mbsicmp((const unsigned __int8 *)v9, "UNICODE") ) /*0x98f319*/
    goto LABEL_64; /*0x98f319*/
  v9 += 7; /*0x98f324*/
  v26 |= 0x10000u; /*0x98f327*/
LABEL_62:
  while ( *v9 == 0x20 ) /*0x98f334*/
    ++v9; /*0x98f330*/
  if ( *v9 ) /*0x98f336*/
  {
LABEL_64:
    *_errno() = 0x16; /*0x98f33a*/
    _invalid_parameter(0, a1, (int)v9); /*0x98f34a*/
    return 0; /*0x98f352*/
  }
  if ( _wsopen_s(0, &v22, lpFileName, v26, a4, 0x180) ) /*0x98f366*/
    return 0; /*0x98f372*/
  ++dword_BA9E10[1]; /*0x98f379*/
  a5[3] = v25; /*0x98f382*/
  v20 = v22; /*0x98f385*/
  a5[1] = 0; /*0x98f388*/
  *a5 = 0; /*0x98f38b*/
  a5[2] = 0; /*0x98f38d*/
  a5[7] = 0; /*0x98f390*/
  a5[4] = v20; /*0x98f393*/
  return a5; /*0x98f397*/
}
