char __stdcall sub_71EA60(int a1, int a2, size_t Size)
{
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  unsigned int j; // ebx
  int v10; // ecx
  _DWORD *v11; // ecx
  NiObject *v12; // eax
  NiObject *v13; // eax
  unsigned int nn; // ebx
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  NiObject *v19; // eax
  NiObject *v20; // eax
  int v21; // edi
  unsigned int m; // ebx
  int v23; // ecx
  NiObject *v24; // eax
  NiObject *v25; // eax
  unsigned int kk; // ebx
  int v27; // ecx
  unsigned int ii; // ebx
  int v29; // ecx
  NiObject *v30; // eax
  unsigned int i1; // ebx
  int v32; // eax
  unsigned int v33; // [esp+14h] [ebp-48h]
  int v34; // [esp+18h] [ebp-44h]
  unsigned int v35; // [esp+1Ch] [ebp-40h]
  unsigned int v36[3]; // [esp+20h] [ebp-3Ch] BYREF
  int v37; // [esp+2Ch] [ebp-30h]
  unsigned int v38[6]; // [esp+38h] [ebp-24h] BYREF
  int v39; // [esp+58h] [ebp-4h]
  unsigned int v40; // [esp+60h] [ebp+4h]
  unsigned int i; // [esp+64h] [ebp+8h]
  unsigned int v42; // [esp+64h] [ebp+8h]
  unsigned int mm; // [esp+64h] [ebp+8h]
  void *v44; // [esp+64h] [ebp+8h]
  unsigned int k; // [esp+64h] [ebp+8h]
  unsigned int jj; // [esp+64h] [ebp+8h]
  unsigned int n; // [esp+64h] [ebp+8h]
  int Sizea; // [esp+68h] [ebp+Ch]
  unsigned int Sizeb; // [esp+68h] [ebp+Ch]

  v5 = a2 + 8; /*0x71ea99*/
  if ( **(_DWORD **)(a2 + 0x54) != **(_DWORD **)(a1 + 0x54) ) /*0x71ea9c*/
    return 0; /*0x71ea9c*/
  if ( **(_DWORD **)(a2 + 0x58) != **(_DWORD **)(a1 + 0x58) ) /*0x71eaac*/
    return 0; /*0x71eaac*/
  v6 = *(_DWORD *)(a2 + 0x6C) == *(_DWORD *)(a1 + 0x6C); /*0x71eab5*/
  v40 = *(_DWORD *)(a2 + 0x6C); /*0x71eab8*/
  if ( !v6 ) /*0x71eabc*/
    return 0; /*0x71eabc*/
  v7 = Size; /*0x71eac2*/
  if ( (_DWORD)Size == 0xFFFFFFFF ) /*0x71eac9*/
  {
    v8 = *(_DWORD *)(a1 + 0x60); /*0x71eace*/
    if ( *(_DWORD *)(a2 + 0x60) < v8 ) /*0x71ead3*/
      return 0; /*0x71ead3*/
    v33 = 0; /*0x71ead9*/
    v7 = v8 - 1; /*0x71eae1*/
  }
  else
  {
    if ( (unsigned int)Size >= *(_DWORD *)(a2 + 0x60) || (unsigned int)Size >= *(_DWORD *)(a1 + 0x60) ) /*0x71eaf2*/
      return 0; /*0x71eaf2*/
    v33 = Size; /*0x71eaf8*/
  }
  if ( sub_71AD40((_DWORD *)(a2 + 8), a1 + 8) ) /*0x71eb02*/
  {
    for ( i = 0; i < v40; ++i ) /*0x71eb1c*/
    {
      for ( j = v33; j <= v7; ++j ) /*0x71eb26*/
      {
        v10 = *(_DWORD *)(a2 + 0x5C); /*0x71eb30*/
        memcpy( /*0x71eb6d*/
          (void *)(*(_DWORD *)(a1 + 0x50)
                 + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * j)
                 + i * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
          (const void *)(*(_DWORD *)(a2 + 0x50)
                       + *(_DWORD *)(v10 + 4 * j)
                       + i * *(_DWORD *)(v10 + 4 * *(_DWORD *)(a2 + 0x60))),
          *(_DWORD *)(v10 + 4 * j + 4) - *(_DWORD *)(v10 + 4 * j));
      }
    }
    if ( *(_DWORD *)(a2 + 0x4C) ) /*0x71eb8d*/
    {
      v11 = *(_DWORD **)(a1 + 0x4C); /*0x71eb94*/
      if ( !v11 ) /*0x71eb99*/
      {
        v12 = (NiObject *)FormHeapAlloc(0x24u); /*0x71eb9d*/
        v39 = 0; /*0x71ebab*/
        if ( v12 ) /*0x71ebb3*/
          v13 = sub_732690(v12, *(_DWORD *)(a2 + 0x4C)); /*0x71ebbb*/
        else
          v13 = 0; /*0x71ebc2*/
        v39 = 0xFFFFFFFF; /*0x71ebc7*/
        sub_71B140((_DWORD *)a1, (int)v13); /*0x71ebcf*/
        return 1; /*0x71ebd6*/
      }
      sub_732480(v11, *(_DWORD *)(a2 + 0x4C)); /*0x71ebdc*/
    }
    return 1; /*0x71ebe3*/
  }
  v42 = *(_DWORD *)(a1 + 0xC); /*0x71ebf1*/
  v35 = *(_DWORD *)(v5 + 4); /*0x71ebf9*/
  Sizea = *(unsigned __int8 *)(a1 + 9); /*0x71ec01*/
  v34 = *(unsigned __int8 *)(v5 + 1); /*0x71ec0a*/
  sub_71B4D0(v38, (char *)(a1 + 8)); /*0x71ec0e*/
  sub_71B4D0(v36, (char *)v5); /*0x71ec18*/
  if ( v42 == 4 || v42 == 5 || v42 == 6 || Sizea == 0x18 && (v38[1] != 0xFF00 || v38[0] != 0xFF && v38[0] != 0xFF0000) ) /*0x71ec63*/
    return 0; /*0x71ec63*/
  if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25CE0) ) /*0x71ec77*/
  {
    if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25D28) ) /*0x71edca*/
    {
      if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71eddb*/
        return 0; /*0x71eddb*/
      if ( v42 < 2 ) /*0x71ede7*/
      {
        if ( Sizea == 0x18 ) /*0x71eee5*/
        {
          v44 = sub_71C840; /*0x71eee7*/
        }
        else
        {
          if ( Sizea != 0x20 ) /*0x71eef7*/
            return 0; /*0x71eef7*/
          v44 = sub_71C980; /*0x71eefd*/
        }
        goto LABEL_159; /*0x71eeef*/
      }
      if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25CE0) ) /*0x71edfe*/
        return 0; /*0x71edfe*/
      for ( k = 0; k < v40; ++k ) /*0x71ee18*/
      {
        for ( m = v33; m <= v7; ++m ) /*0x71ee26*/
        {
          v23 = *(_DWORD *)(a2 + 0x5C); /*0x71ee30*/
          memcpy( /*0x71ee6d*/
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * m)
                   + k * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v23 + 4 * m)
                         + k * *(_DWORD *)(v23 + 4 * *(_DWORD *)(a2 + 0x60))),
            *(_DWORD *)(v23 + 4 * m + 4) - *(_DWORD *)(v23 + 4 * m));
        }
      }
      if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71ee8d*/
        return 0; /*0x71ee91*/
      v24 = (NiObject *)FormHeapAlloc(0x24u); /*0x71ee99*/
      v39 = 2; /*0x71eea7*/
      if ( v24 ) /*0x71eeaf*/
      {
        v25 = sub_732750(v24, 0, 0x10, *(void **)(*(_DWORD *)(a2 + 0x4C) + 0x14)); /*0x71eebe*/
LABEL_65:
        v39 = 0xFFFFFFFF; /*0x71eec7*/
        sub_71B140((_DWORD *)a1, (int)v25); /*0x71eed2*/
        return 1; /*0x71eed9*/
      }
LABEL_64:
      v25 = 0; /*0x71eec5*/
      goto LABEL_65; /*0x71eec5*/
    }
    if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25D70) ) /*0x71ef18*/
    {
      if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25DB8) ) /*0x71f04a*/
      {
        if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E48) ) /*0x71f184*/
        {
          if ( v42 > 1 ) /*0x71f193*/
            return 0; /*0x71f193*/
          switch ( Sizea ) /*0x71f1a5*/
          {
            case 0x10: /*0x71f1a5*/
              v44 = sub_71D7F0; /*0x71f1a7*/
              break;
            case 0x18: /*0x71f1a5*/
              v44 = sub_71D8D0; /*0x71f1b9*/
              break;
            case 0x20: /*0x71f1a5*/
              v44 = sub_71D960; /*0x71f1cf*/
              break;
            default:
              return 0; /*0x71f1c9*/
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E00) ) /*0x71f1e3*/
        {
          if ( v42 > 1 ) /*0x71f1f2*/
            return 0; /*0x71f1f2*/
          switch ( Sizea ) /*0x71f204*/
          {
            case 0x10: /*0x71f204*/
              v44 = sub_71DA20; /*0x71f206*/
              break;
            case 0x18: /*0x71f204*/
              v44 = sub_71DB00; /*0x71f218*/
              break;
            case 0x20: /*0x71f204*/
              v44 = sub_71DBD0; /*0x71f22e*/
              break;
            default:
              return 0; /*0x71f228*/
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25F20) ) /*0x71f242*/
        {
          if ( v42 != 8 && v42 != 9 ) /*0x71f257*/
            return 0; /*0x71f257*/
          if ( Sizea == 0x10 ) /*0x71f264*/
          {
            v44 = sub_71E390; /*0x71f266*/
          }
          else
          {
            if ( Sizea != 0x20 ) /*0x71f276*/
              return 0; /*0x71f276*/
            v44 = sub_71E300; /*0x71f27c*/
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25F68) ) /*0x71f290*/
        {
          if ( v42 != 8 && v42 != 9 ) /*0x71f2a5*/
            return 0; /*0x71f2a5*/
          if ( Sizea == 0x10 ) /*0x71f2b2*/
          {
            v44 = sub_71E240; /*0x71f2b4*/
          }
          else
          {
            if ( Sizea != 0x20 ) /*0x71f2c4*/
              return 0; /*0x71f2c4*/
            v44 = sub_71E1A0; /*0x71f2ca*/
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E90) && sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25ED8) ) /*0x71f2ef*/
        {
          v44 = sub_71C490; /*0x71f2f8*/
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25ED8) && sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E90) ) /*0x71f31d*/
        {
          v44 = sub_71C5B0; /*0x71f326*/
        }
        else
        {
          if ( v35 > 1 ) /*0x71f339*/
            return 0; /*0x71f339*/
          if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E00) ) /*0x71f34e*/
          {
            switch ( v34 ) /*0x71f35e*/
            {
              case 0x10: /*0x71f35e*/
                if ( v37 ) /*0x71f365*/
                  v44 = sub_71DD40; /*0x71f367*/
                else
                  v44 = sub_71DDF0; /*0x71f374*/
                break;
              case 0x18: /*0x71f35e*/
                v44 = sub_71DF10; /*0x71f383*/
                break;
              case 0x20: /*0x71f35e*/
                if ( v37 ) /*0x71f39b*/
                  v44 = sub_71E060; /*0x71f39d*/
                else
                  v44 = sub_71E110; /*0x71f3a7*/
                break;
              default:
                return 0; /*0x71f390*/
            }
          }
          else
          {
            if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E48) ) /*0x71f3bf*/
              return 0; /*0x71f3bf*/
            switch ( v34 ) /*0x71f3cc*/
            {
              case 0x10: /*0x71f3cc*/
                v44 = sub_71DCB0; /*0x71f3ce*/
                break;
              case 0x18: /*0x71f3cc*/
                v44 = sub_71DE80; /*0x71f3dd*/
                break;
              case 0x20: /*0x71f3cc*/
                v44 = sub_71DFE0; /*0x71f3f0*/
                break;
              default:
                return 0; /*0x71f3ea*/
            }
          }
        }
        goto LABEL_159; /*0x71f1af*/
      }
      if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71f054*/
        return 0; /*0x71f054*/
      if ( v42 < 2 ) /*0x71f060*/
      {
        switch ( Sizea ) /*0x71f146*/
        {
          case 0x10: /*0x71f146*/
            v44 = sub_71D160; /*0x71f148*/
            break;
          case 0x18: /*0x71f146*/
            v44 = sub_71D4A0; /*0x71f15a*/
            break;
          case 0x20: /*0x71f146*/
            v44 = sub_71D580; /*0x71f170*/
            break;
          default:
            return 0; /*0x71f16a*/
        }
        goto LABEL_159; /*0x71f150*/
      }
      if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25D70) ) /*0x71f077*/
        return 0; /*0x71f077*/
      for ( n = 0; n < v40; ++n ) /*0x71f091*/
      {
        for ( ii = v33; ii <= v7; ++ii ) /*0x71f099*/
        {
          v29 = *(_DWORD *)(a2 + 0x5C); /*0x71f0a0*/
          memcpy( /*0x71f0dd*/
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * ii)
                   + n * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v29 + 4 * ii)
                         + n * *(_DWORD *)(v29 + 4 * *(_DWORD *)(a2 + 0x60))),
            *(_DWORD *)(v29 + 4 * ii + 4) - *(_DWORD *)(v29 + 4 * ii));
        }
      }
      if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71f0fd*/
        return 0; /*0x71f101*/
      v30 = (NiObject *)FormHeapAlloc(0x24u); /*0x71f109*/
      v39 = 4; /*0x71f117*/
      if ( v30 ) /*0x71f11f*/
      {
        v25 = sub_732750(v30, 0, 0x100, *(void **)(*(_DWORD *)(a2 + 0x4C) + 0x14)); /*0x71f135*/
        goto LABEL_65; /*0x71f13a*/
      }
      goto LABEL_64; /*0x71f11f*/
    }
    if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71ef22*/
      return 0; /*0x71ef22*/
    if ( v42 < 2 ) /*0x71ef2e*/
    {
      switch ( Sizea ) /*0x71f005*/
      {
        case 0x10: /*0x71f005*/
          v44 = sub_71CC50; /*0x71f007*/
          break;
        case 0x18: /*0x71f005*/
          v44 = sub_71D4A0; /*0x71f019*/
          break;
        case 0x20: /*0x71f005*/
          v44 = sub_71CF40; /*0x71f02f*/
          break;
        default:
          return 0; /*0x71f029*/
      }
      goto LABEL_159; /*0x71f00f*/
    }
    if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25DB8) ) /*0x71ef45*/
    {
      for ( jj = 0; jj < v40; ++jj ) /*0x71ef5f*/
      {
        for ( kk = v33; kk <= v7; ++kk ) /*0x71ef67*/
        {
          v27 = *(_DWORD *)(a2 + 0x5C); /*0x71ef70*/
          memcpy( /*0x71efad*/
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * kk)
                   + jj * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v27 + 4 * kk)
                         + jj * *(_DWORD *)(v27 + 4 * *(_DWORD *)(a2 + 0x60))),
            *(_DWORD *)(v27 + 4 * kk + 4) - *(_DWORD *)(v27 + 4 * kk));
        }
      }
      v17 = *(_DWORD *)(a2 + 0x4C); /*0x71efcd*/
      if ( v17 ) /*0x71efd2*/
      {
        v18 = *(_DWORD **)(a1 + 0x4C); /*0x71efd8*/
        if ( !v18 ) /*0x71efdd*/
        {
          v19 = (NiObject *)FormHeapAlloc(0x24u); /*0x71efe5*/
          v39 = 3; /*0x71eff1*/
          goto LABEL_41; /*0x71eff9*/
        }
LABEL_45:
        sub_732480(v18, v17); /*0x71ed7a*/
LABEL_46:
        v21 = *(_DWORD *)(a1 + 0x4C); /*0x71ed80*/
        if ( *(_DWORD *)(v21 + 0xC) ) /*0x71ed83*/
          *(_BYTE *)(*(_DWORD *)(v21 + 0x14) + 3) = 0xFF; /*0x71ed8c*/
        return 1; /*0x71ed92*/
      }
    }
    return 0; /*0x71f484*/
  }
  if ( !*(_DWORD *)(a2 + 0x4C) ) /*0x71ec81*/
    return 0; /*0x71ec81*/
  if ( v42 >= 2 ) /*0x71ec8d*/
  {
    if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25D28) ) /*0x71eca4*/
    {
      for ( mm = 0; mm < v40; ++mm ) /*0x71ecbe*/
      {
        for ( nn = v33; nn <= v7; ++nn ) /*0x71ecc6*/
        {
          v16 = *(_DWORD *)(a2 + 0x5C); /*0x71ecd0*/
          memcpy( /*0x71ed0d*/
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * nn)
                   + mm * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v16 + 4 * nn)
                         + mm * *(_DWORD *)(v16 + 4 * *(_DWORD *)(a2 + 0x60))),
            *(_DWORD *)(v16 + 4 * nn + 4) - *(_DWORD *)(v16 + 4 * nn));
        }
      }
      v17 = *(_DWORD *)(a2 + 0x4C); /*0x71ed2d*/
      if ( v17 ) /*0x71ed32*/
      {
        v18 = *(_DWORD **)(a1 + 0x4C); /*0x71ed38*/
        if ( !v18 ) /*0x71ed3d*/
        {
          v19 = (NiObject *)FormHeapAlloc(0x24u); /*0x71ed41*/
          v39 = 1; /*0x71ed4d*/
LABEL_41:
          if ( v19 ) /*0x71ed57*/
            v20 = sub_732690(v19, *(_DWORD *)(a2 + 0x4C)); /*0x71ed5f*/
          else
            v20 = 0; /*0x71ed66*/
          v39 = 0xFFFFFFFF; /*0x71ed6b*/
          sub_71B140((_DWORD *)a1, (int)v20); /*0x71ed73*/
          goto LABEL_46; /*0x71ed78*/
        }
        goto LABEL_45; /*0x71ed3d*/
      }
    }
    return 0; /*0x71ed32*/
  }
  if ( Sizea == 0x18 ) /*0x71ed9e*/
  {
    v44 = sub_71C840; /*0x71eda0*/
  }
  else
  {
    if ( Sizea != 0x20 ) /*0x71edb0*/
      return 0; /*0x71edb0*/
    v44 = sub_71C5C0; /*0x71edb6*/
  }
LABEL_159:
  for ( Sizeb = 0; Sizeb < v40; ++Sizeb ) /*0x71f405*/
  {
    for ( i1 = v33; i1 <= v7; ++i1 ) /*0x71f40d*/
    {
      v32 = *(_DWORD *)(a1 + 0x5C); /*0x71f413*/
      ((void (__cdecl *)(_DWORD, _DWORD, int, unsigned int, _DWORD, unsigned int *, unsigned int, unsigned int *))v44)( /*0x71f45e*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * i1),
        *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * i1),
        *(_DWORD *)(v32 + 4 * i1 + 4) - *(_DWORD *)(v32 + 4 * i1),
        *(_DWORD *)(a1 + 0x50) + *(_DWORD *)(v32 + 4 * i1) + Sizeb * *(_DWORD *)(v32 + 4 * *(_DWORD *)(a1 + 0x60)),
        *(_DWORD *)(a2 + 0x4C),
        v38,
        *(_DWORD *)(a2 + 0x50)
      + *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * i1)
      + Sizeb * *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * *(_DWORD *)(a2 + 0x60)),
        v36);
    }
  }
  return 1; /*0x71f486*/
}
