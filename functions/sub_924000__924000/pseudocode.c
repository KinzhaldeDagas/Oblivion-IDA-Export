int __cdecl sub_924000(int a1, __m128 *a2, _DWORD *a3, _DWORD *a4, unsigned int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  _DWORD *v11; // eax
  int v12; // ebx
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // edx
  unsigned int v17; // edi
  int v18; // eax
  char *v19; // edi
  float *v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  int v23; // esi
  int v24; // ebx
  _DWORD *v25; // ecx
  unsigned int v26; // edx
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // ecx
  float *v30; // edx
  unsigned int v31; // esi
  unsigned int v32; // edi
  _DWORD *v33; // ecx
  float *v34; // edx
  unsigned int v35; // esi
  int v36; // eax
  _DWORD *v37; // ecx
  unsigned __int64 v38; // rax
  unsigned int v39; // ebx
  _BYTE *v40; // eax
  unsigned int v41; // esi
  _DWORD *v42; // ecx
  int v43; // eax
  float *v44; // edx
  int v45; // eax
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  unsigned int v48; // eax
  unsigned int v49; // edi
  unsigned int v50; // ebx
  const char *v51; // eax
  int v52; // ecx
  int v53; // eax
  int v54; // ebx
  unsigned int v55; // ecx
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  int v59; // edx
  int v60; // ebx
  int v61; // ecx
  _DWORD *v62; // ebx
  int v63; // esi
  _DWORD *v64; // ecx
  unsigned __int64 v65; // rax
  int v66; // eax
  int v67; // ecx
  float *v68; // eax
  _DWORD *v69; // ecx
  unsigned __int64 v70; // rax
  unsigned int v71; // esi
  _DWORD *v72; // ecx
  unsigned __int64 v73; // rax
  _DWORD *v74; // ecx
  bool v75; // zf
  _DWORD *v76; // ecx
  int result; // eax
  int v78; // [esp+1Ch] [ebp-450h]
  int v79; // [esp+20h] [ebp-44Ch]
  int v80; // [esp+24h] [ebp-448h]
  int j; // [esp+28h] [ebp-444h]
  __int32 m; // [esp+28h] [ebp-444h]
  unsigned int v83; // [esp+2Ch] [ebp-440h]
  unsigned int v84; // [esp+2Ch] [ebp-440h]
  int k; // [esp+2Ch] [ebp-440h]
  int v86; // [esp+30h] [ebp-43Ch]
  int v87; // [esp+30h] [ebp-43Ch]
  unsigned int v88; // [esp+34h] [ebp-438h]
  int v89; // [esp+38h] [ebp-434h]
  unsigned int i; // [esp+38h] [ebp-434h]
  unsigned int v91; // [esp+38h] [ebp-434h]
  char *v92; // [esp+3Ch] [ebp-430h]
  int v93; // [esp+3Ch] [ebp-430h]
  int v94; // [esp+3Ch] [ebp-430h]
  int v95; // [esp+40h] [ebp-42Ch]
  int v96; // [esp+44h] [ebp-428h]
  float *v97; // [esp+48h] [ebp-424h]
  unsigned int v98; // [esp+4Ch] [ebp-420h] BYREF
  char *v99; // [esp+50h] [ebp-41Ch]
  int v100; // [esp+54h] [ebp-418h]
  float *v101; // [esp+58h] [ebp-414h]
  char *v102; // [esp+5Ch] [ebp-410h] BYREF
  int v103; // [esp+60h] [ebp-40Ch]
  int v104; // [esp+64h] [ebp-408h]
  char v105; // [esp+68h] [ebp-404h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "Ltsolver";
    v9[3] = "memory";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  v86 = ThreadLocalStoragePointer[TlsIndex];
  v11 = *(_DWORD **)(v86 + 0x19C);
  v12 = 4 * a4[6] + 8;
  v97 = 0;
  v100 = 0;
  v13 = (_DWORD *)dword_BA7D9C;
  v89 = v12;
  v14 = (int)v11;
  if ( !v11 )
    v14 = dword_BA7D9C;
  v15 = *(_DWORD *)(v14 + 0x2C) - *(_DWORD *)(v14 + 0x20) - 0x10;
  if ( v11 )
    v13 = v11;
  v16 = v13[8];
  v17 = v16 + ((v15 + 0x10) & 0xFFFFFFF0);
  if ( v17 > v13[0xB] )
  {
    v96 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (v15 + 0x10) & 0xFFFFFFF0);
  }
  else
  {
    v13[8] = v17;
    v96 = v16;
  }
  v18 = v96;
  v19 = (char *)(v96 + v15);
LABEL_11:
  v95 = v18;
  v83 = v18 + a4[5] + 0x90;
  v20 = (float *)(a4[3] + v83);
  v88 = (unsigned int)v20;
  while ( 1 )
  {
    v21 = a4[4];
    v101 = v20;
    v92 = (char *)v20 + v12;
    v22 = (unsigned int)v20 + v12 + v21 + 4;
    if ( v22 <= (unsigned int)v19 )
      break;
    if ( v83 >= (unsigned int)v19 )
    {
      v32 = v22 - v96;
      v33 = *(_DWORD **)(v86 + 0x19C);
      if ( !v33 )
        v33 = (_DWORD *)dword_BA7D9C;
      v34 = (float *)v33[8];
      v35 = (unsigned int)v34 + ((v32 + 0x10) & 0xFFFFFFF0);
      if ( v35 > v33[0xB] )
      {
        v18 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v33 + 0xC))(v33, (v32 + 0x10) & 0xFFFFFFF0);
        v97 = (float *)v18;
        v19 = (char *)(v18 + v32);
      }
      else
      {
        v18 = v33[8];
        v33[8] = v35;
        v97 = v34;
        v19 = (char *)v34 + v32;
      }
      goto LABEL_11;
    }
    if ( v88 < (unsigned int)v19 )
    {
      v28 = v21 + v12 + 4;
      v29 = *(_DWORD **)(v86 + 0x19C);
      if ( !v29 )
        v29 = (_DWORD *)dword_BA7D9C;
      v30 = (float *)v29[8];
      v31 = (unsigned int)v30 + ((v28 + 0x10) & 0xFFFFFFF0);
      if ( v31 > v29[0xB] )
      {
        v20 = (float *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v29 + 0xC))(v29, (v28 + 0x10) & 0xFFFFFFF0);
        v97 = v20;
        v19 = (char *)v20 + v28;
      }
      else
      {
        v20 = (float *)v29[8];
        v29[8] = v31;
        v97 = v30;
        v19 = (char *)v30 + v28;
      }
    }
    else
    {
      v23 = a4[3] + v83 + 2 * a4[2] - (_DWORD)v19;
      v24 = v23 + v21 + v89 + 4;
      v25 = *(_DWORD **)(v86 + 0x19C);
      if ( !v25 )
        v25 = (_DWORD *)dword_BA7D9C;
      v26 = (v24 + 0x10) & 0xFFFFFFF0;
      v93 = v25[8];
      if ( v26 + v93 > v25[0xB] )
      {
        v27 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v25 + 0xC))(v25, (v24 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v25[8] = v26 + v93;
        v27 = v93;
      }
      v88 = (unsigned int)&v19[-a4[2]];
      v19 = (char *)(v27 + v24);
      v12 = v89;
      v97 = (float *)v27;
      v100 = v27;
      v20 = (float *)(v23 + v27);
    }
  }
  v36 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v36 + 0x1A4) < *(_DWORD *)(v36 + 0x1A8) )
  {
    v37 = *(_DWORD **)(v86 + 0x1A4);
    *v37 = "Stmake accum";
    v38 = __rdtsc();
    v37[1] = v38;
    *(_DWORD *)(v86 + 0x1A4) = v37 + 3;
  }
  *(_BYTE *)v95 = 1;
  *(_OWORD *)(v95 + 0x30) = 0;
  *(_OWORD *)(v95 + 0x10) = 0;
  *(_OWORD *)(v95 + 0x20) = 0;
  *(_OWORD *)(v95 + 0x40) = 0;
  *(_OWORD *)(v95 + 0x50) = 0;
  *(_OWORD *)(v95 + 0x60) = 0;
  v39 = a5 + 4 * a6;
  *(_OWORD *)(v95 + 0x70) = 0;
  v40 = (_BYTE *)(v95 + 0x80);
  v41 = a5;
  for ( i = v39; v41 < v39; v41 += 4 )
  {
    v42 = *(_DWORD **)(*(_DWORD *)v41 + 0x50);
    if ( (_BYTE *)v42[2] != &v40[-v95] )
      v42[2] = &v40[-v95];
    v40 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*v42 + 0x14))(v42, a1, v40);
  }
  *v40 = 2;
  v43 = 0;
  if ( (int)a4[6] > 0 )
  {
    v44 = v101;
    do
      v44[v43++] = 0.0;
    while ( v43 < a4[6] );
  }
  v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) )
  {
    v46 = *(_DWORD **)(v86 + 0x1A4);
    *v46 = "Stmake jac";
    v47 = __rdtsc();
    j = v47;
    v46[1] = v47;
    *(_DWORD *)(v86 + 0x1A4) = v46 + 3;
  }
  v102 = &v105;
  v48 = 0x80000100;
  v98 = v83;
  v99 = v92;
  v84 = a5;
  v103 = 0;
  v104 = 0x80000100;
  if ( a5 < v39 )
  {
    do
    {
      v49 = *(_DWORD *)(*(_DWORD *)v84 + 0x68);
      v50 = v49 + 0x1C * *(_DWORD *)(*(_DWORD *)v84 + 0x6C);
      for ( j = v50; v49 < v50; v49 += 0x1C )
      {
        if ( *(_BYTE *)(v49 + 0x10) < 3u )
        {
          v51 = *(const char **)v49;
          _mm_prefetch(*(const char **)v49, 0);
          _mm_prefetch(v51 + 0xA00, 0);
          _mm_prefetch(v51 + 0x1400, 0);
          v52 = *(_DWORD *)(*(_DWORD *)(v49 + 8) + 0x50);
          v53 = *(_DWORD *)(*(_DWORD *)(v49 + 4) + 0x50);
          a3[5] = v95 + *(_DWORD *)(v53 + 8);
          v54 = v95 + *(_DWORD *)(v52 + 8);
          a3[7] = v53 + 0x10;
          a3[8] = v52 + 0x10;
          v55 = v98;
          a3[6] = v54;
          a3[9] = *(_DWORD *)v49;
          a3[0xA] = *(_DWORD *)(v49 + 0x18);
          if ( v55 >= v88 )
          {
            v98 = v100;
            v88 = 0xFFFFFFFF;
          }
          (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int *))(**(_DWORD **)(v49 + 0xC) + 0x1C))(
            *(_DWORD *)(v49 + 0xC),
            a3,
            &v98);
          v50 = j;
        }
        else
        {
          if ( v103 == (v48 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v102, 4);
          *(_DWORD *)&v102[4 * v103++] = v49;
        }
        v48 = v104;
      }
      v84 += 4;
    }
    while ( v84 < i );
  }
  v56 = 0;
  for ( k = 0; k < v103; ++k )
  {
    v57 = *(_DWORD *)&v102[4 * v56];
    v58 = *(_DWORD *)(*(_DWORD *)(v57 + 4) + 0x50);
    v59 = *(_DWORD *)(*(_DWORD *)(v57 + 8) + 0x50);
    a3[5] = v95 + *(_DWORD *)(v58 + 8);
    v60 = v95 + *(_DWORD *)(v59 + 8);
    a3[7] = v58 + 0x10;
    a3[8] = v59 + 0x10;
    a3[6] = v60;
    a3[9] = *(_DWORD *)v57;
    a3[0xA] = *(_DWORD *)(v57 + 0x18);
    if ( v98 >= v88 )
    {
      v98 = v100;
      v88 = 0xFFFFFFFF;
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int *))(**(_DWORD **)(v57 + 0xC) + 0x1C))(
      *(_DWORD *)(v57 + 0xC),
      a3,
      &v98);
    v56 = k + 1;
  }
  *(_DWORD *)v99 = 0x400;
  if ( v104 >= 0 )
  {
    v61 = *(_DWORD *)(v86 + 0x19C);
    if ( !v61 )
      v61 = dword_BA7D9C;
    sub_8A75D0(v61, v102, 4 * v104, 0x14);
  }
  v62 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v63 = TlsIndex;
  if ( *(_DWORD *)(v62[TlsIndex] + 0x1A4) < *(_DWORD *)(v62[TlsIndex] + 0x1A8) )
  {
    v64 = *(_DWORD **)(v86 + 0x1A4);
    *v64 = "Stsolve";
    v65 = __rdtsc();
    j = v65;
    v64[1] = v65;
    *(_DWORD *)(v86 + 0x1A4) = v64 + 3;
  }
  v94 = sub_921A40((int)v62, a2, v92, (__m128 *)v95, v101, v78, v79, v80, j, k, v86, v88, i);
  v66 = v62[v63];
  if ( *(_DWORD *)(v66 + 0x1A4) < *(_DWORD *)(v66 + 0x1A8) )
  {
    v67 = v62[v63];
    v68 = *(float **)(v66 + 0x1A4);
    *(_DWORD *)v68 = "MiNumJacobians";
    v68 += 2;
    v68[0xFFFFFFFF] = (float)(int)a4[6];
    *(_DWORD *)(v67 + 0x1A4) = v68;
  }
  if ( *(_DWORD *)(v62[v63] + 0x1A4) < *(_DWORD *)(v62[v63] + 0x1A8) )
  {
    v69 = *(_DWORD **)(v87 + 0x1A4);
    *v69 = "Stintegrate";
    v70 = __rdtsc();
    v69[1] = v70;
    *(_DWORD *)(v87 + 0x1A4) = v69 + 3;
  }
  if ( v94 == 1 )
  {
    v71 = a5;
    for ( m = a2[0x10].m128_i32[0]; v71 < v91; v71 += 4 )
      (*(void (__thiscall **)(_DWORD, int, __int32, int))(**(_DWORD **)(*(_DWORD *)v71 + 0x50) + 0x18))(
        *(_DWORD *)(*(_DWORD *)v71 + 0x50),
        a1,
        m,
        v95 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v71 + 0x50) + 8));
  }
  if ( *(_DWORD *)(v62[TlsIndex] + 0x1A4) < *(_DWORD *)(v62[TlsIndex] + 0x1A8) )
  {
    v72 = *(_DWORD **)(v87 + 0x1A4);
    *v72 = "lt";
    v73 = __rdtsc();
    v72[1] = v73;
    *(_DWORD *)(v87 + 0x1A4) = v72 + 3;
  }
  if ( v97 )
  {
    v74 = *(_DWORD **)(v87 + 0x19C);
    if ( !v74 )
      v74 = (_DWORD *)dword_BA7D9C;
    v75 = v97 == (float *)v74[0xA];
    v74[8] = v97;
    if ( v75 )
      (*(void (__thiscall **)(_DWORD *, float *))(*v74 + 0x10))(v74, v97);
  }
  v76 = *(_DWORD **)(v87 + 0x19C);
  if ( !v76 )
    v76 = (_DWORD *)dword_BA7D9C;
  result = v96;
  v75 = v96 == v76[0xA];
  v76[8] = v96;
  if ( v75 )
    return (*(int (__thiscall **)(_DWORD *, int))(*v76 + 0x10))(v76, v96);
  return result;
}
