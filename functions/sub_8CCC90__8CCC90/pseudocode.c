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

  v1 = a1;
  if ( *(_BYTE *)(a1 + 0xA4) )
  {
    v2 = *(_DWORD *)(a1 + 0x3C) - 1;
    v70 = v2;
    if ( v2 >= 0 )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(v1 + 0x38) + 4 * v2);
        LOBYTE(v1) = *(_BYTE *)(v3 + 0x26);
        if ( !(_BYTE)v1 )
          goto LABEL_79;
        v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v5 = *(_DWORD **)(v4 + 0x19C);
        v6 = *(_DWORD *)(v3 + 0x38);
        v72[0] = 0;
        v72[1] = 0;
        v73 = 0x80000000;
        v60 = v4;
        if ( !v5 )
          v5 = (_DWORD *)dword_BA7D9C;
        v7 = (_DWORD *)v5[8];
        v8 = (char *)v7 + ((4 * v6 + 0x10) & 0xFFFFFFF0);
        if ( (unsigned int)v8 > v5[0xB] )
        {
          v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v5 + 0xC))(v5, (4 * v6 + 0x10) & 0xFFFFFFF0);
        }
        else
        {
          v5[8] = v8;
          v9 = v7;
        }
        v72[0] = v9;
        v74 = v9;
        v53 = *(_DWORD *)(v3 + 0x38);
        v73 = v6 | 0x80000000;
        sub_91F340(&v71, (int)v72, v53);
        sub_8DE0C0((_DWORD *)v3, &v75, &v71);
        if ( !v75 )
          break;
LABEL_71:
        v49 = v74;
        *(_BYTE *)(v3 + 0x26) = 0;
        v50 = *(_DWORD **)(v60 + 0x19C);
        if ( !v50 )
          v50 = (_DWORD *)dword_BA7D9C;
        v40 = v49 == (_DWORD *)v50[0xA];
        v50[8] = v49;
        if ( v40 )
          (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v50 + 0x10))(v50, v49);
        LOBYTE(v1) = v73;
        if ( v73 >= 0 )
        {
          v51 = *(_DWORD *)(v60 + 0x19C);
          if ( !v51 )
            v51 = dword_BA7D9C;
          LOBYTE(v1) = sub_8A75D0(v51, v72[0], 4 * v73, 0x14);
        }
LABEL_79:
        if ( --v70 < 0 )
          return v1;
        v2 = v70;
        v1 = a1;
      }
      v85 = &v88;
      v86 = 0;
      v87 = 0x80000020;
      sub_91F3A0(&v71, &v85);
      v77 = &v80;
      v79 = 0x80000020;
      v80 = v3;
      v78 = 1;
      for ( i = 1; i < v86; ++i )
      {
        v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x6C, 0x2F);
        *(_WORD *)(v10 + 4) = 0x6C;
        v11 = sub_8DE400((_DWORD *)v10, a1);
        if ( *(_DWORD *)(a1 + 0x3C) == (*(_DWORD *)(a1 + 0x40) & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)(a1 + 0x38), 4);
        *(_DWORD *)(*(_DWORD *)(a1 + 0x38) + 4 * (*(_DWORD *)(a1 + 0x3C))++) = v11;
        *((_WORD *)v11 + 0x10) = *(_WORD *)(a1 + 0x3C) - 1;
        if ( v78 == (v79 & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)&v77, 4);
        v77[v78++] = (int)v11;
        v12 = *(_DWORD *)&v85[4 * i];
        if ( (v11[0xF] & 0x3FFFFFFF) < v12 )
          sub_8A6E40((const void **)v11 + 0xD, v12, 4);
      }
      v68 = *(_DWORD *)(v3 + 0x34);
      v69 = *(_DWORD *)(v3 + 0x38);
      v13 = v69;
      *(_DWORD *)(v3 + 0x38) = 0;
      v55 = 0;
      if ( v13 > 0 )
      {
        do
        {
          v14 = v77[v72[0][v55]];
          v15 = *(_DWORD *)(v68 + 4 * v55);
          *(_DWORD *)(v15 + 0x54) = v14;
          *(_WORD *)(v15 + 0x8C) = *(_WORD *)(v14 + 0x38);
          if ( *(_DWORD *)(v14 + 0x38) == (*(_DWORD *)(v14 + 0x3C) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)(v14 + 0x34), 4);
          *(_DWORD *)(*(_DWORD *)(v14 + 0x34) + 4 * (*(_DWORD *)(v14 + 0x38))++) = v15;
          if ( v3 != v14 )
          {
            v16 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v15 + 0x50) + 0x1C))(*(_DWORD *)(v15 + 0x50));
            *(_DWORD *)(v3 + 0x14) -= v16;
            *(_DWORD *)(v14 + 0x14) += v16;
            v17 = *(_DWORD **)(v15 + 0x68);
            for ( j = 0; j < *(_DWORD *)(v15 + 0x6C); ++j )
            {
              (*(void (__thiscall **)(_DWORD, _BYTE *))(**(_DWORD **)(*v17 + 0xC) + 0x20))(*(_DWORD *)(*v17 + 0xC), v76);
              (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v3 + 0x10))(v3, *v17, v76);
              (*(void (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v14 + 0xC))(v14, *v17, v76);
              v18 = *v17;
              v17 += 7;
              *(_DWORD *)(v18 + 8) = v14;
            }
          }
          ++v55;
        }
        while ( v55 < v69 );
      }
      v19 = *(_DWORD *)(v3 + 0x5C);
      v68 = *(_DWORD *)(a1 + 0x30);
      v20 = *(_DWORD *)(v3 + 0x60);
      v21 = 0;
      v69 = v19;
      v56 = v20;
      *(_DWORD *)(v3 + 0x60) = 0;
      for ( k = 0; v21 < v20; k = v21 )
      {
        v22 = *(int **)(v69 + 4 * v21);
        if ( v22 )
        {
          v23 = *v22;
          v81 = &v84;
          v24 = 0;
          v82 = 0;
          v83 = 0x80000010;
          (*(void (__thiscall **)(int *, char **))(v23 + 0xC))(v22, &v81);
          for ( m = 0; m < v82; ++m )
          {
            v24 = *(_DWORD *)(*(_DWORD *)&v81[4 * m] + 0x54);
            if ( v24 != v68 )
              break;
          }
          if ( v83 >= 0 )
          {
            v26 = *(_DWORD *)(v60 + 0x19C);
            if ( !v26 )
              v26 = dword_BA7D9C;
            sub_8A75D0(v26, v81, 4 * v83, 0x14);
          }
          v22[3] = v24;
          v27 = *(_DWORD *)(v24 + 0x64);
          v28 = *(_DWORD *)(v24 + 0x60);
          v29 = v24 + 0x5C;
          if ( v28 == (v27 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)v29, 4);
          *(_DWORD *)(*(_DWORD *)v29 + 4 * *(_DWORD *)(v29 + 4)) = v22;
          v20 = v56;
          ++*(_DWORD *)(v29 + 4);
          v21 = k;
        }
        ++v21;
      }
      v30 = *(_DWORD *)(a1 + 0x7C);
      v31 = *(_DWORD *)(v30 + 0x1BFC);
      v67 = *(_DWORD *)(v30 + 0x1BF8);
      v65 = v67;
      v32 = *(_DWORD *)(v3 + 0x48);
      v61 = &v64;
      v33 = 0;
      v34 = 0x80000001;
      v62 = 0;
      v63 = 0x80000001;
      v66 = v31;
      if ( v32 == 1 )
      {
        v64 = **(_DWORD **)(v3 + 0x44);
        v33 = 1;
        *(_DWORD *)(v3 + 0x48) = 0;
      }
      else
      {
        if ( v32 <= 1 )
        {
LABEL_45:
          v38 = v65;
          v65 = *(_DWORD *)(v3 + 0x54);
          *(_DWORD *)(v3 + 0x54) = v38;
          v57 = 0;
          if ( v33 > 0 )
          {
            do
            {
              v39 = v61[v57];
              v40 = v57 + 1 == v33;
              v41 = v39;
              ++v57;
              if ( v40 )
                v42 = v65 + v39;
              else
                v42 = v39 + v67;
              if ( v39 < v42 )
              {
                do
                {
                  v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 0x14) + 0x10) + *(_DWORD *)(v41 + 0x14) + 0x54);
                  if ( *(_WORD *)(v43 + 0x20) == 0xFFFF )
                    v43 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v41 + 0x18) + 0x10) + *(_DWORD *)(v41 + 0x18) + 0x54);
                  sub_8E68A0(v43 + 0x44, (const void *)v41);
                  v41 += *(unsigned __int8 *)(v41 + 3);
                }
                while ( v41 < v42 );
              }
              (*(void (__thiscall **)(int, unsigned int, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
                dword_BA7D98,
                v39,
                v67,
                0x24);
              v33 = v62;
            }
            while ( v57 < v62 );
            v34 = v63;
          }
          v62 = 0;
          if ( v34 >= 0 )
          {
            v44 = *(_DWORD *)(v60 + 0x19C);
            if ( !v44 )
              v44 = dword_BA7D9C;
            sub_8A75D0(v44, v61, 4 * v34, 0x14);
          }
          v45 = *(_DWORD *)(v3 + 0x4C);
          if ( v45 >= 0 )
          {
            v46 = *(_DWORD *)(v3 + 0x48);
            if ( v46 < 1 || 2 * v46 < (v45 & 0x3FFFFFFF) )
              sub_8A6F90((const void **)(v3 + 0x44), 4, (_DWORD *)(v3 + 0x50), 1);
          }
          if ( v79 >= 0 )
          {
            v47 = *(_DWORD *)(v60 + 0x19C);
            if ( !v47 )
              v47 = dword_BA7D9C;
            sub_8A75D0(v47, v77, 4 * v79, 0x14);
          }
          if ( v87 >= 0 )
          {
            v48 = *(_DWORD *)(v60 + 0x19C);
            if ( !v48 )
              v48 = dword_BA7D9C;
            sub_8A75D0(v48, v85, 4 * v87, 0x14);
          }
          goto LABEL_71;
        }
        sub_8A6E40((const void **)&v61, 2, 4);
        v35 = v61;
        v34 = *(_DWORD *)(v3 + 0x4C);
        v61 = *(int **)(v3 + 0x44);
        v36 = v62;
        *(_DWORD *)(v3 + 0x44) = v35;
        v33 = *(_DWORD *)(v3 + 0x48);
        *(_DWORD *)(v3 + 0x48) = v36;
        v37 = v63;
        v63 = v34;
        *(_DWORD *)(v3 + 0x4C) = v37;
      }
      v62 = v33;
      goto LABEL_45;
    }
  }
  return v1;
}
