char __stdcall sub_71EA60(int a1, int a2, size_t Size)
{
  int v5; // ebx
  bool v6; // zf
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  unsigned int j; // ebx
  int v10; // ecx
  _DWORD *v11; // ecx
  _BYTE *v12; // eax
  _BYTE *v13; // eax
  unsigned int nn; // ebx
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  _BYTE *v19; // eax
  _BYTE *v20; // eax
  int v21; // edi
  unsigned int m; // ebx
  int v23; // ecx
  _BYTE *v24; // eax
  _BYTE *v25; // eax
  unsigned int kk; // ebx
  int v27; // ecx
  unsigned int ii; // ebx
  int v29; // ecx
  _BYTE *v30; // eax
  unsigned int i1; // ebx
  int v32; // eax
  size_t v33; // [esp-4h] [ebp-60h]
  unsigned int v34; // [esp+14h] [ebp-48h]
  int v35; // [esp+18h] [ebp-44h]
  unsigned int v36; // [esp+1Ch] [ebp-40h]
  unsigned int v37[3]; // [esp+20h] [ebp-3Ch] BYREF
  int v38; // [esp+2Ch] [ebp-30h]
  unsigned int v39[6]; // [esp+38h] [ebp-24h] BYREF
  int v40; // [esp+58h] [ebp-4h]
  unsigned int v41; // [esp+60h] [ebp+4h]
  unsigned int i; // [esp+64h] [ebp+8h]
  unsigned int v43; // [esp+64h] [ebp+8h]
  unsigned int mm; // [esp+64h] [ebp+8h]
  void *v45; // [esp+64h] [ebp+8h]
  unsigned int k; // [esp+64h] [ebp+8h]
  unsigned int jj; // [esp+64h] [ebp+8h]
  unsigned int n; // [esp+64h] [ebp+8h]
  int Sizea; // [esp+68h] [ebp+Ch]
  unsigned int Sizeb; // [esp+68h] [ebp+Ch]

  v5 = a2 + 8;
  if ( **(_DWORD **)(a2 + 0x54) != **(_DWORD **)(a1 + 0x54) )
    return 0;
  if ( **(_DWORD **)(a2 + 0x58) != **(_DWORD **)(a1 + 0x58) )
    return 0;
  v6 = *(_DWORD *)(a2 + 0x6C) == *(_DWORD *)(a1 + 0x6C);
  v41 = *(_DWORD *)(a2 + 0x6C);
  if ( !v6 )
    return 0;
  v7 = Size;
  if ( (_DWORD)Size == 0xFFFFFFFF )
  {
    v8 = *(_DWORD *)(a1 + 0x60);
    if ( *(_DWORD *)(a2 + 0x60) < v8 )
      return 0;
    v34 = 0;
    v7 = v8 - 1;
  }
  else
  {
    if ( (unsigned int)Size >= *(_DWORD *)(a2 + 0x60) || (unsigned int)Size >= *(_DWORD *)(a1 + 0x60) )
      return 0;
    v34 = Size;
  }
  if ( sub_71AD40((_DWORD *)(a2 + 8), a1 + 8) )
  {
    for ( i = 0; i < v41; ++i )
    {
      for ( j = v34; j <= v7; ++j )
      {
        v10 = *(_DWORD *)(a2 + 0x5C);
        LODWORD(v33) = *(_DWORD *)(v10 + 4 * j + 4) - *(_DWORD *)(v10 + 4 * j);
        memcpy(
          (void *)(*(_DWORD *)(a1 + 0x50)
                 + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * j)
                 + i * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
          (const void *)(*(_DWORD *)(a2 + 0x50)
                       + *(_DWORD *)(v10 + 4 * j)
                       + i * *(_DWORD *)(v10 + 4 * *(_DWORD *)(a2 + 0x60))),
          v33);
      }
    }
    if ( *(_DWORD *)(a2 + 0x4C) )
    {
      v11 = *(_DWORD **)(a1 + 0x4C);
      if ( !v11 )
      {
        v12 = (_BYTE *)FormHeapAlloc(0x24u);
        v40 = 0;
        if ( v12 )
          v13 = sub_732690(v12, *(_DWORD *)(a2 + 0x4C));
        else
          v13 = 0;
        v40 = 0xFFFFFFFF;
        sub_71B140((_DWORD *)a1, (int)v13);
        return 1;
      }
      sub_732480(v11, *(_DWORD *)(a2 + 0x4C));
    }
    return 1;
  }
  v43 = *(_DWORD *)(a1 + 0xC);
  v36 = *(_DWORD *)(v5 + 4);
  Sizea = *(unsigned __int8 *)(a1 + 9);
  v35 = *(unsigned __int8 *)(v5 + 1);
  sub_71B4D0(v39, (char *)(a1 + 8));
  sub_71B4D0(v37, (char *)v5);
  if ( v43 == 4 || v43 == 5 || v43 == 6 || Sizea == 0x18 && (v39[1] != 0xFF00 || v39[0] != 0xFF && v39[0] != 0xFF0000) )
    return 0;
  if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25CE0) )
  {
    if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25D28) )
    {
      if ( !*(_DWORD *)(a2 + 0x4C) )
        return 0;
      if ( v43 < 2 )
      {
        if ( Sizea == 0x18 )
        {
          v45 = sub_71C840;
        }
        else
        {
          if ( Sizea != 0x20 )
            return 0;
          v45 = sub_71C980;
        }
        goto LABEL_159;
      }
      if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25CE0) )
        return 0;
      for ( k = 0; k < v41; ++k )
      {
        for ( m = v34; m <= v7; ++m )
        {
          v23 = *(_DWORD *)(a2 + 0x5C);
          LODWORD(v33) = *(_DWORD *)(v23 + 4 * m + 4) - *(_DWORD *)(v23 + 4 * m);
          memcpy(
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * m)
                   + k * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v23 + 4 * m)
                         + k * *(_DWORD *)(v23 + 4 * *(_DWORD *)(a2 + 0x60))),
            v33);
        }
      }
      if ( !*(_DWORD *)(a2 + 0x4C) )
        return 0;
      v24 = (_BYTE *)FormHeapAlloc(0x24u);
      v40 = 2;
      if ( v24 )
      {
        v25 = sub_732750(v24, 0, 0x10, *(void **)(*(_DWORD *)(a2 + 0x4C) + 0x14));
LABEL_65:
        v40 = 0xFFFFFFFF;
        sub_71B140((_DWORD *)a1, (int)v25);
        return 1;
      }
LABEL_64:
      v25 = 0;
      goto LABEL_65;
    }
    if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25D70) )
    {
      if ( !sub_71AD40((_DWORD *)v5, (int)&unk_B25DB8) )
      {
        if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E48) )
        {
          if ( v43 > 1 )
            return 0;
          switch ( Sizea )
          {
            case 0x10:
              v45 = sub_71D7F0;
              break;
            case 0x18:
              v45 = sub_71D8D0;
              break;
            case 0x20:
              v45 = sub_71D960;
              break;
            default:
              return 0;
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E00) )
        {
          if ( v43 > 1 )
            return 0;
          switch ( Sizea )
          {
            case 0x10:
              v45 = sub_71DA20;
              break;
            case 0x18:
              v45 = sub_71DB00;
              break;
            case 0x20:
              v45 = sub_71DBD0;
              break;
            default:
              return 0;
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25F20) )
        {
          if ( v43 != 8 && v43 != 9 )
            return 0;
          if ( Sizea == 0x10 )
          {
            v45 = sub_71E390;
          }
          else
          {
            if ( Sizea != 0x20 )
              return 0;
            v45 = sub_71E300;
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25F68) )
        {
          if ( v43 != 8 && v43 != 9 )
            return 0;
          if ( Sizea == 0x10 )
          {
            v45 = sub_71E240;
          }
          else
          {
            if ( Sizea != 0x20 )
              return 0;
            v45 = sub_71E1A0;
          }
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25E90) && sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25ED8) )
        {
          v45 = sub_71C490;
        }
        else if ( sub_71AD40((_DWORD *)v5, (int)&unk_B25ED8) && sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E90) )
        {
          v45 = sub_71C5B0;
        }
        else
        {
          if ( v36 > 1 )
            return 0;
          if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E00) )
          {
            switch ( v35 )
            {
              case 0x10:
                if ( v38 )
                  v45 = sub_71DD40;
                else
                  v45 = sub_71DDF0;
                break;
              case 0x18:
                v45 = sub_71DF10;
                break;
              case 0x20:
                if ( v38 )
                  v45 = sub_71E060;
                else
                  v45 = sub_71E110;
                break;
              default:
                return 0;
            }
          }
          else
          {
            if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E48) )
              return 0;
            switch ( v35 )
            {
              case 0x10:
                v45 = sub_71DCB0;
                break;
              case 0x18:
                v45 = sub_71DE80;
                break;
              case 0x20:
                v45 = sub_71DFE0;
                break;
              default:
                return 0;
            }
          }
        }
        goto LABEL_159;
      }
      if ( !*(_DWORD *)(a2 + 0x4C) )
        return 0;
      if ( v43 < 2 )
      {
        switch ( Sizea )
        {
          case 0x10:
            v45 = sub_71D160;
            break;
          case 0x18:
            v45 = sub_71D4A0;
            break;
          case 0x20:
            v45 = sub_71D580;
            break;
          default:
            return 0;
        }
        goto LABEL_159;
      }
      if ( !sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25D70) )
        return 0;
      for ( n = 0; n < v41; ++n )
      {
        for ( ii = v34; ii <= v7; ++ii )
        {
          v29 = *(_DWORD *)(a2 + 0x5C);
          LODWORD(v33) = *(_DWORD *)(v29 + 4 * ii + 4) - *(_DWORD *)(v29 + 4 * ii);
          memcpy(
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * ii)
                   + n * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v29 + 4 * ii)
                         + n * *(_DWORD *)(v29 + 4 * *(_DWORD *)(a2 + 0x60))),
            v33);
        }
      }
      if ( !*(_DWORD *)(a2 + 0x4C) )
        return 0;
      v30 = (_BYTE *)FormHeapAlloc(0x24u);
      v40 = 4;
      if ( v30 )
      {
        v25 = sub_732750(v30, 0, 0x100, *(void **)(*(_DWORD *)(a2 + 0x4C) + 0x14));
        goto LABEL_65;
      }
      goto LABEL_64;
    }
    if ( !*(_DWORD *)(a2 + 0x4C) )
      return 0;
    if ( v43 < 2 )
    {
      switch ( Sizea )
      {
        case 0x10:
          v45 = sub_71CC50;
          break;
        case 0x18:
          v45 = sub_71D4A0;
          break;
        case 0x20:
          v45 = sub_71CF40;
          break;
        default:
          return 0;
      }
      goto LABEL_159;
    }
    if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25DB8) )
    {
      for ( jj = 0; jj < v41; ++jj )
      {
        for ( kk = v34; kk <= v7; ++kk )
        {
          v27 = *(_DWORD *)(a2 + 0x5C);
          LODWORD(v33) = *(_DWORD *)(v27 + 4 * kk + 4) - *(_DWORD *)(v27 + 4 * kk);
          memcpy(
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * kk)
                   + jj * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v27 + 4 * kk)
                         + jj * *(_DWORD *)(v27 + 4 * *(_DWORD *)(a2 + 0x60))),
            v33);
        }
      }
      v17 = *(_DWORD *)(a2 + 0x4C);
      if ( v17 )
      {
        v18 = *(_DWORD **)(a1 + 0x4C);
        if ( !v18 )
        {
          v19 = (_BYTE *)FormHeapAlloc(0x24u);
          v40 = 3;
          goto LABEL_41;
        }
LABEL_45:
        sub_732480(v18, v17);
LABEL_46:
        v21 = *(_DWORD *)(a1 + 0x4C);
        if ( *(_DWORD *)(v21 + 0xC) )
          *(_BYTE *)(*(_DWORD *)(v21 + 0x14) + 3) = 0xFF;
        return 1;
      }
    }
    return 0;
  }
  if ( !*(_DWORD *)(a2 + 0x4C) )
    return 0;
  if ( v43 >= 2 )
  {
    if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25D28) )
    {
      for ( mm = 0; mm < v41; ++mm )
      {
        for ( nn = v34; nn <= v7; ++nn )
        {
          v16 = *(_DWORD *)(a2 + 0x5C);
          LODWORD(v33) = *(_DWORD *)(v16 + 4 * nn + 4) - *(_DWORD *)(v16 + 4 * nn);
          memcpy(
            (void *)(*(_DWORD *)(a1 + 0x50)
                   + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * nn)
                   + mm * *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * *(_DWORD *)(a1 + 0x60))),
            (const void *)(*(_DWORD *)(a2 + 0x50)
                         + *(_DWORD *)(v16 + 4 * nn)
                         + mm * *(_DWORD *)(v16 + 4 * *(_DWORD *)(a2 + 0x60))),
            v33);
        }
      }
      v17 = *(_DWORD *)(a2 + 0x4C);
      if ( v17 )
      {
        v18 = *(_DWORD **)(a1 + 0x4C);
        if ( !v18 )
        {
          v19 = (_BYTE *)FormHeapAlloc(0x24u);
          v40 = 1;
LABEL_41:
          if ( v19 )
            v20 = sub_732690(v19, *(_DWORD *)(a2 + 0x4C));
          else
            v20 = 0;
          v40 = 0xFFFFFFFF;
          sub_71B140((_DWORD *)a1, (int)v20);
          goto LABEL_46;
        }
        goto LABEL_45;
      }
    }
    return 0;
  }
  if ( Sizea == 0x18 )
  {
    v45 = sub_71C840;
  }
  else
  {
    if ( Sizea != 0x20 )
      return 0;
    v45 = sub_71C5C0;
  }
LABEL_159:
  for ( Sizeb = 0; Sizeb < v41; ++Sizeb )
  {
    for ( i1 = v34; i1 <= v7; ++i1 )
    {
      v32 = *(_DWORD *)(a1 + 0x5C);
      ((void (__cdecl *)(_DWORD, _DWORD, int, unsigned int, _DWORD, unsigned int *, unsigned int, unsigned int *))v45)(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * i1),
        *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * i1),
        *(_DWORD *)(v32 + 4 * i1 + 4) - *(_DWORD *)(v32 + 4 * i1),
        *(_DWORD *)(a1 + 0x50) + *(_DWORD *)(v32 + 4 * i1) + Sizeb * *(_DWORD *)(v32 + 4 * *(_DWORD *)(a1 + 0x60)),
        *(_DWORD *)(a2 + 0x4C),
        v39,
        *(_DWORD *)(a2 + 0x50)
      + *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * i1)
      + Sizeb * *(_DWORD *)(*(_DWORD *)(a2 + 0x5C) + 4 * *(_DWORD *)(a2 + 0x60)),
        v37);
    }
  }
  return 1;
}
