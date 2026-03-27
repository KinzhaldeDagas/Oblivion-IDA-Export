NiPixelData *__stdcall sub_71C0B0(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // esi
  _DWORD *v5; // ebp
  NiPixelData *v6; // eax
  NiPixelData *v7; // ebp
  unsigned int v8; // esi
  int v9; // edi
  int v10; // edx
  _BYTE *v11; // ecx
  int v12; // esi
  NiPixelData *v13; // eax
  NiPixelData *v14; // ebp
  unsigned int v15; // edi
  int v16; // esi
  int v17; // ecx
  _BYTE *v18; // edx
  NiPixelData *v19; // eax
  NiPixelData *v20; // eax
  int v21; // edx
  _BYTE *v22; // ecx
  int v23; // eax
  _BYTE *v24; // edi
  _BYTE *v25; // ebp
  _BYTE *v26; // edx
  int v27; // eax
  char v28; // al
  char v29; // bl
  _BYTE *v30; // ebx
  char v31; // bp
  bool v32; // zf
  unsigned int v34; // [esp+14h] [ebp-2Ch]
  int v35; // [esp+18h] [ebp-28h]
  int v36; // [esp+1Ch] [ebp-24h]
  NiPixelData *i; // [esp+20h] [ebp-20h]
  int v38; // [esp+24h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-1Ch]
  int v40; // [esp+24h] [ebp-1Ch]
  int v41; // [esp+28h] [ebp-18h]
  int v42; // [esp+28h] [ebp-18h]
  int v43; // [esp+2Ch] [ebp-14h]
  _BYTE *v44; // [esp+2Ch] [ebp-14h]
  int v45; // [esp+48h] [ebp+8h]
  int v46; // [esp+48h] [ebp+8h]
  int v47; // [esp+48h] [ebp+8h]

  v2 = (_DWORD *)a1;
  v3 = **(_DWORD **)(a1 + 0x58);
  v4 = **(_DWORD **)(a1 + 0x54);
  v5 = (_DWORD *)(a1 + 8);
  v34 = *(_DWORD *)(a1 + 0x60);
  if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E00) )
  {
    v6 = (NiPixelData *)FormHeapAlloc(0x70u);
    v7 = 0;
    if ( v6 )
      v7 = NiPixelData::NiPixelData(v6, v4, v3, (int)&unk_B25F68, v34, 1);
    v8 = 0;
    for ( i = v7; v8 < v34; ++v8 )
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * v8);
      v10 = *((_DWORD *)v7 + 0x14) + *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8);
      v11 = (_BYTE *)(*(_DWORD *)(a1 + 0x50) + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * v8));
      v45 = v9;
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v8) )
      {
        v38 = *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v8);
        do
        {
          if ( v9 )
          {
            do
            {
              *(_BYTE *)(v10 + 2) = v11[3];
              *(_BYTE *)(v10 + 3) = *v11;
              v11 += 4;
              v10 += 4;
              --v9;
            }
            while ( v9 );
            v9 = v45;
          }
          --v38;
        }
        while ( v38 );
      }
    }
    v12 = 4;
    v35 = 4;
  }
  else
  {
    if ( sub_71AD40(v5, (int)&unk_B25E48) && sub_71AD40(a2, (int)&unk_B25F68) )
    {
      v13 = (NiPixelData *)FormHeapAlloc(0x70u);
      if ( v13 )
        v14 = NiPixelData::NiPixelData(v13, v4, v3, (int)&unk_B25F68, v34, 1);
      else
        v14 = 0;
      v15 = 0;
      for ( i = v14; v15 < v34; ++v15 )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * v15);
        v17 = *((_DWORD *)v14 + 0x14) + *(_DWORD *)(*((_DWORD *)v14 + 0x17) + 4 * v15);
        v18 = (_BYTE *)(*(_DWORD *)(a1 + 0x50) + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * v15));
        v46 = v16;
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v15) )
        {
          v39 = *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v15);
          do
          {
            if ( v16 )
            {
              do
              {
                *(_BYTE *)(v17 + 2) = 0xFF;
                *(_BYTE *)(v17 + 3) = *v18;
                v18 += 3;
                v17 += 4;
                --v16;
              }
              while ( v16 );
              v16 = v46;
            }
            --v39;
          }
          while ( v39 );
        }
      }
      v35 = 4;
    }
    else
    {
      if ( !sub_71AD40(v5, (int)&unk_B25E48) )
        return 0;
      v19 = (NiPixelData *)FormHeapAlloc(0x70u);
      if ( v19 )
        v20 = NiPixelData::NiPixelData(v19, v4, v3, (int)&unk_B25F20, v34, 1);
      else
        v20 = 0;
      i = v20;
      v35 = 2;
    }
    v12 = 3;
  }
  v21 = 0;
  v36 = 0;
  if ( v34 )
  {
    while ( 1 )
    {
      v22 = (_BYTE *)(*((_DWORD *)i + 0x14) + *(_DWORD *)(*((_DWORD *)i + 0x17) + 4 * v21));
      v23 = *(_DWORD *)(v2[0x15] + 4 * v21);
      v24 = (_BYTE *)(v2[0x14] + *(_DWORD *)(v2[0x17] + 4 * v21));
      v47 = v23 - 1;
      v25 = &v24[v23 * v12];
      v26 = &v24[v12];
      v40 = 0;
      if ( *(_DWORD *)(v2[0x16] + 4 * v36) == 1 )
      {
        v27 = v23 - 1;
      }
      else
      {
        v43 = *(_DWORD *)(v2[0x16] + 4 * v36) - 1;
        v40 = v43;
        v27 = v23 - 1;
        do
        {
          if ( !v27 )
            goto LABEL_43;
          v41 = v27;
          do
          {
            v28 = *v25 - *v24;
            *v22 = *v26 - *v24;
            v22[1] = v28;
            v22 += v35;
            v24 += v12;
            v26 += v12;
            v25 += v12;
            --v41;
          }
          while ( v41 );
          v27 = v47;
          if ( v47 )
          {
            v27 = v47;
            *v22 = *v24 - v24[-v12];
          }
          else
          {
LABEL_43:
            *v22 = 0;
          }
          v29 = *v25 - *v24;
          v24 += v12;
          v22[1] = v29;
          v22 += v35;
          v26 += v12;
          v25 += v12;
          --v43;
        }
        while ( v43 );
      }
      v30 = &v24[-(v12 * (v27 + 1))];
      v44 = v30;
      if ( !v27 )
        goto LABEL_53;
      v42 = v27;
      do
      {
        v31 = *v24 - *v30;
        *v22 = *v26 - *v24;
        v22[1] = v31;
        v22 += v35;
        v30 = &v44[v12];
        v24 += v12;
        v26 += v12;
        v32 = v42-- == 1;
        v44 += v12;
      }
      while ( !v32 );
      if ( v47 )
      {
        *v22 = *v24 - v24[-v12];
        if ( v40 )
        {
          v22[1] = *v24 - *v30;
          goto LABEL_56;
        }
      }
      else
      {
LABEL_53:
        *v22 = 0;
        if ( v40 )
        {
          v22[1] = *v24 - *v30;
          goto LABEL_56;
        }
      }
      v22[1] = 0;
LABEL_56:
      if ( ++v36 >= v34 )
        return i;
      v2 = (_DWORD *)a1;
      v21 = v36;
    }
  }
  return i;
}
