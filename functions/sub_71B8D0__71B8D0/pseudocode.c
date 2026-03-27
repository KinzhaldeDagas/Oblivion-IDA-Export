char *__thiscall sub_71B8D0(void *this, int a2, char *a3)
{
  int v4; // ebx
  const void *v5; // esi
  char *v6; // ebp
  NiPixelData *v7; // eax
  NiPixelData *v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  _BYTE *v15; // ecx
  unsigned __int8 *v16; // esi
  signed int *v17; // eax
  signed int v18; // edx
  signed int v19; // eax
  int v20; // edx
  signed int v21; // edi
  int v22; // edx
  int v23; // edi
  signed int i; // edi
  _BYTE *v25; // ecx
  signed int j; // edi
  _BYTE *v27; // ecx
  unsigned __int8 *v28; // eax
  int v29; // edi
  _BYTE *v30; // ecx
  unsigned int v31; // ebx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  _BYTE *v36; // ecx
  unsigned __int8 *v37; // esi
  int *v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // edi
  int v43; // edx
  int v44; // edi
  int k; // edi
  _BYTE *v46; // ecx
  int m; // edi
  _BYTE *v48; // ecx
  unsigned __int8 *v49; // eax
  int v50; // edi
  _BYTE *v51; // ecx
  unsigned int v53; // [esp+14h] [ebp-68h]
  signed int v54; // [esp+18h] [ebp-64h]
  signed int v55; // [esp+18h] [ebp-64h]
  signed int v56; // [esp+18h] [ebp-64h]
  signed int v57; // [esp+1Ch] [ebp-60h]
  int v58; // [esp+1Ch] [ebp-60h]
  signed int v59; // [esp+20h] [ebp-5Ch]
  int v60; // [esp+20h] [ebp-5Ch]
  int v62; // [esp+24h] [ebp-58h]
  int v63; // [esp+24h] [ebp-58h]
  int v64; // [esp+24h] [ebp-58h]
  int v65; // [esp+28h] [ebp-54h]
  int v66; // [esp+28h] [ebp-54h]
  NiSurfaceData v67; // [esp+2Ch] [ebp-50h] BYREF
  unsigned int v68; // [esp+78h] [ebp-4h]
  int v69; // [esp+84h] [ebp+8h]

  v4 = a2;
  InitSurfacEData(&v67);
  if ( (*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 0x20))(this, a2 + 8) )
  {
    v5 = &unk_B25E48;
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(void *, int))(*(_DWORD *)this + 0x1C))(this, a2 + 8) )
      return 0;
    v5 = &unk_B25E00;
  }
  v6 = a3;
  qmemcpy(&v67, v5, sizeof(v67));
  if ( !a3
    || !sub_71AD40((_DWORD *)a3 + 2, (int)&v67)
    || *((_DWORD *)a3 + 0x18) <= 1u
    || *((_DWORD *)a3 + 0x1B) != *(_DWORD *)(a2 + 0x6C) )
  {
    v7 = (NiPixelData *)FormHeapAlloc(0x70u);
    v68 = 0;
    if ( v7 )
      v8 = NiPixelData::NiPixelData(
             v7,
             **(_DWORD **)(a2 + 0x54),
             **(_DWORD **)(a2 + 0x58),
             (int)&v67,
             0,
             *(_DWORD *)(a2 + 0x6C));
    else
      v8 = 0;
    v68 = 0xFFFFFFFF;
    v6 = (char *)v8;
  }
  v9 = *((_DWORD *)v6 + 0x18);
  v53 = v9;
  if ( (char *)a2 != v6
    && !(*(unsigned __int8 (__thiscall **)(void *, char *, int, _DWORD))(*(_DWORD *)this + 0x2C))(this, v6, a2, 0) )
  {
    return 0;
  }
  v69 = 0;
  if ( *(_DWORD *)(a2 + 0x6C) )
  {
    while ( 1 )
    {
      if ( sub_71AD40(&v67, (int)&unk_B25E48) )
      {
        v10 = 1;
        v62 = 1;
        if ( v9 > 1 )
        {
          do
          {
            v11 = *((_DWORD *)v6 + 0x17);
            v12 = v69 * *(_DWORD *)(v11 + 4 * *((_DWORD *)v6 + 0x18));
            v13 = *((_DWORD *)v6 + 0x14);
            v14 = v13 + *(_DWORD *)(v11 + 4 * v10 - 4);
            v15 = (_BYTE *)(*(_DWORD *)(v11 + 4 * v10) + v12 + v13);
            v16 = (unsigned __int8 *)(v12 + v14);
            v17 = (signed int *)(*((_DWORD *)v6 + 0x15) + 4 * v10);
            v18 = *v17;
            v19 = v17[0xFFFFFFFF];
            v57 = v18;
            v20 = *((_DWORD *)v6 + 0x16);
            v21 = *(_DWORD *)(v20 + 4 * v10);
            v22 = v20 + 4 * v10;
            v54 = v21;
            v23 = 3 * v19;
            v65 = 3 * v19;
            if ( v19 == 1 )
            {
              for ( i = v54; i; --i )
              {
                *v15 = (*v16 + (unsigned int)v16[3]) >> 1;
                v15[1] = (v16[1] + (unsigned int)v16[4]) >> 1;
                v25 = v15 + 2;
                *v25 = (v16[2] + (unsigned int)v16[5]) >> 1;
                v15 = v25 + 1;
                v16 += 6;
              }
            }
            else if ( *(_DWORD *)(v22 - 4) == 1 )
            {
              for ( j = v57; j; --j )
              {
                *v15 = (*v16 + (unsigned int)v16[3]) >> 1;
                v15[1] = (v16[1] + (unsigned int)v16[4]) >> 1;
                v27 = v15 + 2;
                *v27 = (v16[2] + (unsigned int)v16[5]) >> 1;
                v15 = v27 + 1;
                v16 += 6;
              }
            }
            else if ( v54 )
            {
              v59 = v54;
              do
              {
                if ( v57 )
                {
                  v28 = &v16[v23];
                  v29 = -v23;
                  v55 = v57;
                  do
                  {
                    *v15 = (*v16 + *v28 + v28[3] + (unsigned int)v28[v29 + 3]) >> 2;
                    v15[1] = (v28[1] + v28[4] + v28[v29 + 4] + (unsigned int)v28[v29 + 1]) >> 2;
                    v30 = v15 + 2;
                    *v30 = (v28[2] + v28[5] + v28[v29 + 5] + (unsigned int)v28[v29 + 2]) >> 2;
                    v15 = v30 + 1;
                    v16 += 6;
                    v28 += 6;
                    --v55;
                  }
                  while ( v55 );
                  v23 = v65;
                  v10 = v62;
                }
                v16 += v23;
                --v59;
              }
              while ( v59 );
            }
            v62 = ++v10;
          }
          while ( v10 < v53 );
        }
      }
      else
      {
        if ( !sub_71AD40(&v67, (int)&unk_B25E00) )
          goto LABEL_56;
        v31 = 1;
        v56 = 1;
        if ( v9 > 1 )
        {
          do
          {
            v32 = *((_DWORD *)v6 + 0x17);
            v33 = v69 * *(_DWORD *)(v32 + 4 * *((_DWORD *)v6 + 0x18));
            v34 = *((_DWORD *)v6 + 0x14);
            v35 = v34 + *(_DWORD *)(v32 + 4 * v31 - 4);
            v36 = (_BYTE *)(*(_DWORD *)(v32 + 4 * v31) + v33 + v34);
            v37 = (unsigned __int8 *)(v33 + v35);
            v38 = (int *)(*((_DWORD *)v6 + 0x15) + 4 * v31);
            v39 = *v38;
            v40 = v38[0xFFFFFFFF];
            v60 = v39;
            v41 = *((_DWORD *)v6 + 0x16);
            v42 = *(_DWORD *)(v41 + 4 * v31);
            v43 = v41 + 4 * v31;
            v63 = v42;
            v44 = 4 * v40;
            v66 = 4 * v40;
            if ( v40 == 1 )
            {
              for ( k = v63; k; --k )
              {
                *v36 = (*v37 + (unsigned int)v37[4]) >> 1;
                v36[1] = (v37[1] + (unsigned int)v37[5]) >> 1;
                v46 = v36 + 1;
                v46[1] = (v37[2] + (unsigned int)v37[6]) >> 1;
                v46 += 2;
                *v46 = (v37[3] + (unsigned int)v37[7]) >> 1;
                v36 = v46 + 1;
                v37 += 8;
              }
            }
            else if ( *(_DWORD *)(v43 - 4) == 1 )
            {
              for ( m = v60; m; --m )
              {
                *v36 = (*v37 + (unsigned int)v37[4]) >> 1;
                v36[1] = (v37[1] + (unsigned int)v37[5]) >> 1;
                v48 = v36 + 1;
                v48[1] = (v37[2] + (unsigned int)v37[6]) >> 1;
                v48 += 2;
                *v48 = (v37[3] + (unsigned int)v37[7]) >> 1;
                v36 = v48 + 1;
                v37 += 8;
              }
            }
            else if ( v63 )
            {
              v58 = v63;
              do
              {
                if ( v60 )
                {
                  v49 = &v37[v44];
                  v50 = -v44;
                  v64 = v60;
                  do
                  {
                    *v36 = (*v49 + *v37 + v49[4] + (unsigned int)v49[v50 + 4]) >> 2;
                    v36[1] = (v49[1] + v49[5] + v49[v50 + 5] + (unsigned int)v49[v50 + 1]) >> 2;
                    v51 = v36 + 1;
                    v51[1] = (v49[2] + v49[6] + v49[v50 + 6] + (unsigned int)v49[v50 + 2]) >> 2;
                    v51 += 2;
                    *v51 = (v49[3] + v49[7] + v49[v50 + 7] + (unsigned int)v49[v50 + 3]) >> 2;
                    v36 = v51 + 1;
                    v37 += 8;
                    v49 += 8;
                    --v64;
                  }
                  while ( v64 );
                  v44 = v66;
                  v31 = v56;
                }
                v37 += v44;
                --v58;
              }
              while ( v58 );
            }
            v56 = ++v31;
          }
          while ( v31 < v53 );
        }
      }
      v4 = a2;
LABEL_56:
      if ( (unsigned int)++v69 >= *(_DWORD *)(v4 + 0x6C) )
        return v6;
      v9 = v53;
    }
  }
  return v6;
}
