char __cdecl sub_8CCC90(int a1)
{
  int v1; // eax
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  _DWORD *v5; // ecx
  int v6; // esi
  _DWORD *v7; // edx
  char *v8; // edi
  _DWORD *v9; // eax
  int v10; // eax
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // esi
  int v15; // ebp
  int v16; // eax
  _DWORD *v17; // edi
  int v18; // edx
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int *v22; // edi
  int v23; // edx
  int v24; // esi
  int m; // eax
  int v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int *v35; // eax
  int v36; // ecx
  unsigned int v37; // ecx
  int v38; // ecx
  unsigned int v39; // edi
  bool v40; // zf
  unsigned int v41; // esi
  unsigned int v42; // ebp
  int v43; // eax
  int v44; // ecx
  int v45; // ecx
  int v46; // edx
  int v47; // ecx
  int v48; // ecx
  _DWORD *v49; // ecx
  _DWORD *v50; // eax
  int v51; // ecx
  int v53; // [esp+1Ch] [ebp-1D0h]
  int i; // [esp+30h] [ebp-1BCh]
  int v55; // [esp+30h] [ebp-1BCh]
  int v56; // [esp+30h] [ebp-1BCh]
  int v57; // [esp+30h] [ebp-1BCh]
  int j; // [esp+34h] [ebp-1B8h]
  int k; // [esp+34h] [ebp-1B8h]
  int v60; // [esp+38h] [ebp-1B4h]
  int *v61; // [esp+3Ch] [ebp-1B0h] BYREF
  int v62; // [esp+40h] [ebp-1ACh]
  unsigned int v63; // [esp+44h] [ebp-1A8h]
  int v64; // [esp+48h] [ebp-1A4h] BYREF
  int v65; // [esp+4Ch] [ebp-1A0h]
  __int16 v66; // [esp+50h] [ebp-19Ch]
  unsigned __int16 v67; // [esp+52h] [ebp-19Ah]
  int v68; // [esp+54h] [ebp-198h]
  int v69; // [esp+58h] [ebp-194h]
  int v70; // [esp+5Ch] [ebp-190h]
  int *v71; // [esp+60h] [ebp-18Ch] BYREF
  _DWORD *v72[2]; // [esp+64h] [ebp-188h] BYREF
  signed int v73; // [esp+6Ch] [ebp-180h]
  _DWORD *v74; // [esp+70h] [ebp-17Ch]
  bool v75; // [esp+74h] [ebp-178h] BYREF
  _BYTE v76[16]; // [esp+78h] [ebp-174h] BYREF
  int *v77; // [esp+88h] [ebp-164h] BYREF
  int v78; // [esp+8Ch] [ebp-160h]
  int v79; // [esp+90h] [ebp-15Ch]
  int v80; // [esp+94h] [ebp-158h] BYREF
  char *v81; // [esp+114h] [ebp-D8h] BYREF
  int v82; // [esp+118h] [ebp-D4h]
  int v83; // [esp+11Ch] [ebp-D0h]
  char v84; // [esp+120h] [ebp-CCh] BYREF
  char *v85; // [esp+160h] [ebp-8Ch] BYREF
  int v86; // [esp+164h] [ebp-88h]
  int v87; // [esp+168h] [ebp-84h]
  char v88; // [esp+16Ch] [ebp-80h] BYREF

  v1 = a1; /*0x8ccc90*/
  if ( *(_BYTE *)(a1 + 0xA4) ) /*0x8ccc94*/
  {
    v2 = *(_DWORD *)(a1 + 0x3C) - 1; /*0x8cccab*/
    v70 = v2; /*0x8cccac*/
    if ( v2 >= 0 ) /*0x8cccb0*/
    {
      while ( 1 ) /*0x8ccccc*/
      {
        v3 = *(_DWORD *)(*(_DWORD *)(v1 + 0x38) + 4 * v2); /*0x8ccccc*/
        LOBYTE(v1) = *(_BYTE *)(v3 + 0x26); /*0x8ccccf*/
        if ( !(_BYTE)v1 ) /*0x8cccd4*/
          goto LABEL_79; /*0x8cccd4*/
        v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ccce6*/
        v5 = *(_DWORD **)(v4 + 0x19C); /*0x8ccce9*/
        v6 = *(_DWORD *)(v3 + 0x38); /*0x8cccef*/
        v72[0] = 0; /*0x8cccf6*/
        v72[1] = 0; /*0x8cccfa*/
        v73 = 0x80000000; /*0x8cccfe*/
        v60 = v4; /*0x8ccd06*/
        if ( !v5 ) /*0x8ccd0a*/
          v5 = (_DWORD *)unk_BA7D9C; /*0x8ccd0c*/
        v7 = (_DWORD *)v5[8]; /*0x8ccd12*/
        v8 = (char *)v7 + ((4 * v6 + 0x10) & 0xFFFFFFF0); /*0x8ccd22*/
        if ( (unsigned int)v8 > v5[0xB] ) /*0x8ccd27*/
        {
          v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v5 + 0xC))(v5, (4 * v6 + 0x10) & 0xFFFFFFF0); /*0x8ccd33*/
        }
        else
        {
          v5[8] = v8; /*0x8ccd29*/
          v9 = v7; /*0x8ccd2c*/
        }
        v72[0] = v9; /*0x8ccd36*/
        v74 = v9; /*0x8ccd3a*/
        v53 = *(_DWORD *)(v3 + 0x38); /*0x8ccd41*/
        v73 = v6 | 0x80000000; /*0x8ccd51*/
        sub_91F340(&v71, (int)v72, v53); /*0x8ccd55*/
        sub_8DE0C0((_DWORD *)v3, &v75, &v71); /*0x8ccd66*/
        if ( !v75 ) /*0x8ccd71*/
          break; /*0x8ccd71*/
LABEL_71:
        v49 = v74; /*0x8cd2ae*/
        *(_BYTE *)(v3 + 0x26) = 0; /*0x8cd2b6*/
        v50 = *(_DWORD **)(v60 + 0x19C); /*0x8cd2ba*/
        if ( !v50 ) /*0x8cd2c2*/
          v50 = (_DWORD *)unk_BA7D9C; /*0x8cd2c4*/
        v40 = v49 == (_DWORD *)v50[0xA]; /*0x8cd2c9*/
        v50[8] = v49; /*0x8cd2cc*/
        if ( v40 ) /*0x8cd2cf*/
          (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v50 + 0x10))(v50, v49); /*0x8cd2d6*/
        LOBYTE(v1) = v73; /*0x8cd2d9*/
        if ( v73 >= 0 ) /*0x8cd2df*/
        {
          v51 = *(_DWORD *)(v60 + 0x19C); /*0x8cd2e1*/
          if ( !v51 ) /*0x8cd2e9*/
            v51 = unk_BA7D9C; /*0x8cd2eb*/
          LOBYTE(v1) = sub_8A75D0(v51, v72[0], 4 * v73, 0x14); /*0x8cd301*/
        }
LABEL_79:
        if ( --v70 < 0 ) /*0x8cd30a*/
          return v1; /*0x8cd30a*/
        v2 = v70; /*0x8cccbc*/
        v1 = a1; /*0x8cccc0*/
      }
      v85 = &v88; /*0x8ccd85*/
      v86 = 0; /*0x8ccd98*/
      v87 = 0x80000020; /*0x8ccd9f*/
      sub_91F3A0((int ***)&v71, (const void **)&v85); /*0x8ccda6*/
      v77 = &v80; /*0x8ccdb6*/
      v79 = 0x80000020; /*0x8ccdc1*/
      v80 = v3; /*0x8ccdc5*/
      v78 = 1; /*0x8ccdc9*/
      for ( i = 1; i < v86; ++i ) /*0x8ccdd1*/
      {
        v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 0x2F); /*0x8ccdec*/
        *(_WORD *)(v10 + 4) = 0x6C; /*0x8ccdf2*/
        v11 = sub_8DE400((_DWORD *)v10, a1); /*0x8cce03*/
        if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) ) /*0x8cce0f*/
          sub_8A6EE0((const void **)(a1 + 0x38), 4); /*0x8cce14*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * (*(_DWORD *)(a1 + 0x3C))++) = v11; /*0x8cce21*/
        *((_WORD *)v11 + 0x10) = *(_WORD *)(a1 + 0x3C) - 1; /*0x8cce2d*/
        if ( v78 == (v79 & 0x3FFFFFFF) ) /*0x8cce41*/
          sub_8A6EE0((const void **)&v77, 4); /*0x8cce4a*/
        v77[v78++] = (int)v11; /*0x8cce5a*/
        v12 = *(_DWORD *)&v85[4 * i]; /*0x8cce71*/
        if ( (v11[0xF] & 0x3FFFFFFF) < v12 ) /*0x8cce82*/
          sub_8A6E40((const void **)v11 + 0xD, v12, 4); /*0x8cce88*/
      }
      v68 = *(_DWORD *)(v3 + 0x34); /*0x8ccead*/
      v69 = *(_DWORD *)(v3 + 0x38); /*0x8cceb6*/
      v13 = v69; /*0x8cceb1*/
      *(_DWORD *)(v3 + 0x38) = 0; /*0x8cceba*/
      v55 = 0; /*0x8ccebd*/
      if ( v13 > 0 ) /*0x8ccec1*/
      {
        do /*0x8ccf9c*/
        {
          v14 = v77[v72[0][v55]]; /*0x8ccedf*/
          v15 = *(_DWORD *)(v68 + 4 * v55); /*0x8ccee6*/
          *(_DWORD *)(v15 + 0x54) = v14; /*0x8ccee9*/
          *(_WORD *)(v15 + 0x8C) = *(_WORD *)(v14 + 0x38); /*0x8ccef3*/
          if ( *(_DWORD *)(v14 + 0x38) == (*(_DWORD *)(v14 + 0x3C) & 0x3FFFFFFF) ) /*0x8ccf08*/
            sub_8A6EE0((const void **)(v14 + 0x34), 4); /*0x8ccf0d*/
          *(_DWORD *)(*(_DWORD *)(v14 + 0x34) + 4 * (*(_DWORD *)(v14 + 0x38))++) = v15; /*0x8ccf1a*/
          if ( v3 != v14 ) /*0x8ccf26*/
          {
            v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v15 + 0x50) + 0x1C))(*(_DWORD *)(v15 + 0x50)); /*0x8ccf2d*/
            *(_DWORD *)(v3 + 0x14) -= v16; /*0x8ccf30*/
            *(_DWORD *)(v14 + 0x14) += v16; /*0x8ccf33*/
            v17 = *(_DWORD **)(v15 + 0x68); /*0x8ccf3b*/
            for ( j = 0; j < *(_DWORD *)(v15 + 0x6C); ++j ) /*0x8ccf46*/
            {
              (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*v17 + 0xC) + 0x20))(*(_DWORD *)(*v17 + 0xC), v76); /*0x8ccf54*/
              (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3 + 0x10))(v3, *v17, v76); /*0x8ccf63*/
              (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v14 + 0xC))(v14, *v17, v76); /*0x8ccf72*/
              v18 = *v17; /*0x8ccf75*/
              v17 += 7; /*0x8ccf7b*/
              *(_DWORD *)(v18 + 8) = v14; /*0x8ccf7e*/
            }
          }
          ++v55; /*0x8ccf98*/
        }
        while ( v55 < v69 ); /*0x8ccf9c*/
      }
      v19 = *(_DWORD *)(v3 + 0x5C); /*0x8ccfac*/
      v68 = *(_DWORD *)(a1 + 0x30); /*0x8ccfaf*/
      v20 = *(_DWORD *)(v3 + 0x60); /*0x8ccfb3*/
      v21 = 0; /*0x8ccfb8*/
      v69 = v19; /*0x8ccfbc*/
      v56 = v20; /*0x8ccfc0*/
      *(_DWORD *)(v3 + 0x60) = 0; /*0x8ccfc4*/
      for ( k = 0; v21 < v20; k = v21 ) /*0x8ccfcb*/
      {
        v22 = *(int **)(v69 + 4 * v21); /*0x8ccfd5*/
        if ( v22 ) /*0x8ccfda*/
        {
          v23 = *v22; /*0x8ccfe0*/
          v81 = &v84; /*0x8ccfe9*/
          v24 = 0; /*0x8ccffa*/
          v82 = 0; /*0x8ccffc*/
          v83 = 0x80000010; /*0x8cd003*/
          (*(void (__thiscall **)(int *, char **))(v23 + 0xC))(v22, &v81); /*0x8cd00e*/
          for ( m = 0; m < v82; ++m ) /*0x8cd023*/
          {
            v24 = *(_DWORD *)(*(_DWORD *)&v81[4 * m] + 0x54); /*0x8cd028*/
            if ( v24 != v68 ) /*0x8cd02f*/
              break; /*0x8cd02f*/
          }
          if ( v83 >= 0 ) /*0x8cd041*/
          {
            v26 = *(_DWORD *)(v60 + 0x19C); /*0x8cd047*/
            if ( !v26 ) /*0x8cd04f*/
              v26 = unk_BA7D9C; /*0x8cd051*/
            sub_8A75D0(v26, v81, 4 * v83, 0x14); /*0x8cd063*/
          }
          v22[3] = v24; /*0x8cd068*/
          v27 = *(_DWORD *)(v24 + 0x64); /*0x8cd06b*/
          v28 = *(_DWORD *)(v24 + 0x60); /*0x8cd06e*/
          v29 = v24 + 0x5C; /*0x8cd071*/
          if ( v28 == (v27 & 0x3FFFFFFF) ) /*0x8cd07c*/
            sub_8A6EE0((const void **)v29, 4); /*0x8cd081*/
          *(_DWORD *)(*(_DWORD *)v29 + 4 * *(_DWORD *)(v29 + 4)) = v22; /*0x8cd08e*/
          v20 = v56; /*0x8cd094*/
          ++*(_DWORD *)(v29 + 4); /*0x8cd099*/
          v21 = k; /*0x8cd09c*/
        }
        ++v21; /*0x8cd0a0*/
      }
      v30 = *(_DWORD *)(a1 + 0x7C); /*0x8cd0b4*/
      v31 = *(_DWORD *)(v30 + 0x1BFC); /*0x8cd0bd*/
      v67 = *(_DWORD *)(v30 + 0x1BF8); /*0x8cd0c3*/
      v65 = v67; /*0x8cd0cf*/
      v32 = *(_DWORD *)(v3 + 0x48); /*0x8cd0d3*/
      v61 = &v64; /*0x8cd0d6*/
      v33 = 0; /*0x8cd0da*/
      v34 = 0x80000001; /*0x8cd0df*/
      v62 = 0; /*0x8cd0e4*/
      v63 = 0x80000001; /*0x8cd0e8*/
      v66 = v31; /*0x8cd0ec*/
      if ( v32 == 1 ) /*0x8cd0f1*/
      {
        v64 = **(_DWORD **)(v3 + 0x44); /*0x8cd0f8*/
        v33 = 1; /*0x8cd0fc*/
        *(_DWORD *)(v3 + 0x48) = 0; /*0x8cd101*/
      }
      else
      {
        if ( v32 <= 1 ) /*0x8cd106*/
        {
LABEL_45:
          v38 = v65; /*0x8cd143*/
          v65 = *(_DWORD *)(v3 + 0x54); /*0x8cd14c*/
          *(_DWORD *)(v3 + 0x54) = v38; /*0x8cd150*/
          v57 = 0; /*0x8cd153*/
          if ( v33 > 0 ) /*0x8cd157*/
          {
            do /*0x8cd1df*/
            {
              v39 = v61[v57]; /*0x8cd168*/
              v40 = v57 + 1 == v33; /*0x8cd16c*/
              v41 = v39; /*0x8cd16e*/
              ++v57; /*0x8cd170*/
              if ( v40 ) /*0x8cd174*/
                v42 = v65 + v39; /*0x8cd17a*/
              else
                v42 = v39 + v67; /*0x8cd184*/
              if ( v39 < v42 ) /*0x8cd188*/
              {
                do /*0x8cd1c1*/
                {
                  v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 0x14) + 0x10) + *(_DWORD *)(v41 + 0x14) + 0x54); /*0x8cd196*/
                  if ( *(_WORD *)(v43 + 0x20) == 0xFFFF ) /*0x8cd1a0*/
                    v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 0x18) + 0x10) + *(_DWORD *)(v41 + 0x18) + 0x54); /*0x8cd1a8*/
                  sub_8E68A0(v43 + 0x44, (const void *)v41); /*0x8cd1b1*/
                  v41 += *(unsigned __int8 *)(v41 + 3); /*0x8cd1ba*/
                }
                while ( v41 < v42 ); /*0x8cd1c1*/
              }
              (*(void (__thiscall **)(int, unsigned int, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8cd1d4*/
                unk_BA7D98,
                v39,
                v67,
                0x24);
              v33 = v62; /*0x8cd1d7*/
            }
            while ( v57 < v62 ); /*0x8cd1df*/
            v34 = v63; /*0x8cd1e5*/
          }
          v62 = 0; /*0x8cd1ef*/
          if ( v34 >= 0 ) /*0x8cd1f7*/
          {
            v44 = *(_DWORD *)(v60 + 0x19C); /*0x8cd1f9*/
            if ( !v44 ) /*0x8cd201*/
              v44 = unk_BA7D9C; /*0x8cd203*/
            sub_8A75D0(v44, v61, 4 * v34, 0x14); /*0x8cd21a*/
          }
          v45 = *(_DWORD *)(v3 + 0x4C); /*0x8cd21f*/
          if ( v45 >= 0 ) /*0x8cd227*/
          {
            v46 = *(_DWORD *)(v3 + 0x48); /*0x8cd229*/
            if ( v46 < 1 || 2 * v46 < (v45 & 0x3FFFFFFF) ) /*0x8cd23b*/
              sub_8A6F90((const void **)(v3 + 0x44), 4, (_DWORD *)(v3 + 0x50), 1); /*0x8cd246*/
          }
          if ( v79 >= 0 ) /*0x8cd254*/
          {
            v47 = *(_DWORD *)(v60 + 0x19C); /*0x8cd256*/
            if ( !v47 ) /*0x8cd25e*/
              v47 = unk_BA7D9C; /*0x8cd260*/
            sub_8A75D0(v47, v77, 4 * v79, 0x14); /*0x8cd276*/
          }
          if ( v87 >= 0 ) /*0x8cd284*/
          {
            v48 = *(_DWORD *)(v60 + 0x19C); /*0x8cd286*/
            if ( !v48 ) /*0x8cd28e*/
              v48 = unk_BA7D9C; /*0x8cd290*/
            sub_8A75D0(v48, v85, 4 * v87, 0x14); /*0x8cd2a9*/
          }
          goto LABEL_71; /*0x8cd2a9*/
        }
        sub_8A6E40((const void **)&v61, 2, 4); /*0x8cd111*/
        v35 = v61; /*0x8cd119*/
        v34 = *(_DWORD *)(v3 + 0x4C); /*0x8cd11d*/
        v61 = *(int **)(v3 + 0x44); /*0x8cd120*/
        v36 = v62; /*0x8cd124*/
        *(_DWORD *)(v3 + 0x44) = v35; /*0x8cd128*/
        v33 = *(_DWORD *)(v3 + 0x48); /*0x8cd12b*/
        *(_DWORD *)(v3 + 0x48) = v36; /*0x8cd12e*/
        v37 = v63; /*0x8cd131*/
        v63 = v34; /*0x8cd138*/
        *(_DWORD *)(v3 + 0x4C) = v37; /*0x8cd13c*/
      }
      v62 = v33; /*0x8cd13f*/
      goto LABEL_45; /*0x8cd13f*/
    }
  }
  return v1; /*0x8cd314*/
}
