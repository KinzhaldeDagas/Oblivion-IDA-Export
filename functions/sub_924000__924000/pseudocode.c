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
  unsigned int j; // [esp+28h] [ebp-444h]
  __int32 m; // [esp+28h] [ebp-444h]
  unsigned int v83; // [esp+2Ch] [ebp-440h]
  unsigned int v84; // [esp+2Ch] [ebp-440h]
  int k; // [esp+2Ch] [ebp-440h]
  int v86; // [esp+30h] [ebp-43Ch]
  unsigned int v87; // [esp+34h] [ebp-438h]
  int v88; // [esp+38h] [ebp-434h]
  unsigned int i; // [esp+38h] [ebp-434h]
  char *v90; // [esp+3Ch] [ebp-430h]
  int v91; // [esp+3Ch] [ebp-430h]
  int v92; // [esp+3Ch] [ebp-430h]
  int v93; // [esp+40h] [ebp-42Ch]
  int v94; // [esp+44h] [ebp-428h]
  float *v95; // [esp+48h] [ebp-424h]
  unsigned int v96; // [esp+4Ch] [ebp-420h] BYREF
  char *v97; // [esp+50h] [ebp-41Ch]
  int v98; // [esp+54h] [ebp-418h]
  float *v99; // [esp+58h] [ebp-414h]
  char *v100; // [esp+5Ch] [ebp-410h] BYREF
  int v101; // [esp+60h] [ebp-40Ch]
  int v102; // [esp+64h] [ebp-408h]
  char v103; // [esp+68h] [ebp-404h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x924015*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92401c*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x92402b*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92402d*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x92402f*/
    *v9 = "Ltsolver"; /*0x924035*/
    v9[3] = "memory"; /*0x92403b*/
    v10 = __rdtsc(); /*0x924042*/
    v9[1] = v10; /*0x92404c*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x924052*/
  }
  v86 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x924068*/
  v11 = *(_DWORD **)(v86 + 0x19C); /*0x92406c*/
  v12 = 4 * a4[6] + 8; /*0x924072*/
  v95 = 0; /*0x924079*/
  v98 = 0; /*0x92407d*/
  v13 = (_DWORD *)unk_BA7D9C; /*0x924083*/
  v88 = v12; /*0x924089*/
  v14 = (int)v11; /*0x92408d*/
  if ( !v11 ) /*0x92408f*/
    v14 = unk_BA7D9C; /*0x924091*/
  v15 = *(_DWORD *)(v14 + 0x2C) - *(_DWORD *)(v14 + 0x20) - 0x10; /*0x924099*/
  if ( v11 ) /*0x92409e*/
    v13 = v11; /*0x9240a0*/
  v16 = v13[8]; /*0x9240a2*/
  v17 = v16 + ((v15 + 0x10) & 0xFFFFFFF0); /*0x9240ab*/
  if ( v17 > v13[0xB] ) /*0x9240b1*/
  {
    v94 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (v15 + 0x10) & 0xFFFFFFF0); /*0x9240c2*/
  }
  else
  {
    v13[8] = v17; /*0x9240b3*/
    v94 = v16; /*0x9240b6*/
  }
  v18 = v94; /*0x9240c6*/
  v19 = (char *)(v94 + v15); /*0x9240ca*/
LABEL_11:
  v93 = v18; /*0x9240d0*/
  v83 = v18 + a4[5] + 0x90; /*0x9240e4*/
  v20 = (float *)(a4[3] + v83); /*0x9240e8*/
  v87 = (unsigned int)v20; /*0x9240ea*/
  while ( 1 ) /*0x9240f3*/
  {
    v21 = a4[4]; /*0x9240f3*/
    v99 = v20; /*0x9240f6*/
    v90 = (char *)v20 + v12; /*0x9240fc*/
    v22 = (unsigned int)v20 + v12 + v21 + 4; /*0x924100*/
    if ( v22 <= (unsigned int)v19 ) /*0x924106*/
      break; /*0x924106*/
    if ( v83 >= (unsigned int)v19 ) /*0x924112*/
    {
      v32 = v22 - v94; /*0x9241e0*/
      v33 = *(_DWORD **)(v86 + 0x19C); /*0x9241e6*/
      if ( !v33 ) /*0x9241ee*/
        v33 = (_DWORD *)unk_BA7D9C; /*0x9241f0*/
      v34 = (float *)v33[8]; /*0x9241f6*/
      v35 = (unsigned int)v34 + ((v32 + 0x10) & 0xFFFFFFF0); /*0x9241ff*/
      if ( v35 > v33[0xB] ) /*0x924205*/
      {
        v18 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v33 + 0xC))(v33, (v32 + 0x10) & 0xFFFFFFF0); /*0x92421a*/
        v95 = (float *)v18; /*0x92421d*/
        v19 = (char *)(v18 + v32); /*0x924221*/
      }
      else
      {
        v18 = v33[8]; /*0x924207*/
        v33[8] = v35; /*0x924209*/
        v95 = v34; /*0x92420c*/
        v19 = (char *)v34 + v32; /*0x924210*/
      }
      goto LABEL_11; /*0x924212*/
    }
    if ( v87 < (unsigned int)v19 ) /*0x92411c*/
    {
      v28 = v21 + v12 + 4; /*0x924196*/
      v29 = *(_DWORD **)(v86 + 0x19C); /*0x92419a*/
      if ( !v29 ) /*0x9241a2*/
        v29 = (_DWORD *)unk_BA7D9C; /*0x9241a4*/
      v30 = (float *)v29[8]; /*0x9241aa*/
      v31 = (unsigned int)v30 + ((v28 + 0x10) & 0xFFFFFFF0); /*0x9241b3*/
      if ( v31 > v29[0xB] ) /*0x9241b9*/
      {
        v20 = (float *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v29 + 0xC))(v29, (v28 + 0x10) & 0xFFFFFFF0); /*0x9241ce*/
        v95 = v20; /*0x9241d1*/
        v19 = (char *)v20 + v28; /*0x9241d5*/
      }
      else
      {
        v20 = (float *)v29[8]; /*0x9241bb*/
        v29[8] = v31; /*0x9241bd*/
        v95 = v30; /*0x9241c0*/
        v19 = (char *)v30 + v28; /*0x9241c4*/
      }
    }
    else
    {
      v23 = a4[3] + v83 + 2 * a4[2] - (_DWORD)v19; /*0x924133*/
      v24 = v23 + v21 + v88 + 4; /*0x92413b*/
      v25 = *(_DWORD **)(v86 + 0x19C); /*0x92413f*/
      if ( !v25 ) /*0x924147*/
        v25 = (_DWORD *)unk_BA7D9C; /*0x924149*/
      v26 = (v24 + 0x10) & 0xFFFFFFF0; /*0x924155*/
      v91 = v25[8]; /*0x924158*/
      if ( v26 + v91 > v25[0xB] ) /*0x924161*/
      {
        v27 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v25 + 0xC))(v25, (v24 + 0x10) & 0xFFFFFFF0); /*0x92416f*/
      }
      else
      {
        v25[8] = v26 + v91; /*0x924163*/
        v27 = v91; /*0x924166*/
      }
      v87 = (unsigned int)&v19[-a4[2]]; /*0x924178*/
      v19 = (char *)(v27 + v24); /*0x92417c*/
      v12 = v88; /*0x92417f*/
      v95 = (float *)v27; /*0x924183*/
      v98 = v27; /*0x924187*/
      v20 = (float *)(v23 + v27); /*0x92418b*/
    }
  }
  v36 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x924234*/
  if ( *(_DWORD *)(v36 + 0x1A4) < *(_DWORD *)(v36 + 0x1A8) ) /*0x924243*/
  {
    v37 = *(_DWORD **)(v86 + 0x1A4); /*0x924249*/
    *v37 = "Stmake accum"; /*0x92424f*/
    v38 = __rdtsc(); /*0x924255*/
    v37[1] = v38; /*0x92425f*/
    *(_DWORD *)(v86 + 0x1A4) = v37 + 3; /*0x924265*/
  }
  *(_BYTE *)v93 = 1; /*0x924278*/
  *(_OWORD *)(v93 + 0x30) = 0; /*0x92427b*/
  *(_OWORD *)(v93 + 0x10) = 0; /*0x92427f*/
  *(_OWORD *)(v93 + 0x20) = 0; /*0x924283*/
  *(_OWORD *)(v93 + 0x40) = 0; /*0x924287*/
  *(_OWORD *)(v93 + 0x50) = 0; /*0x92428b*/
  *(_OWORD *)(v93 + 0x60) = 0; /*0x92428f*/
  v39 = a5 + 4 * a6; /*0x924293*/
  *(_OWORD *)(v93 + 0x70) = 0; /*0x924296*/
  v40 = (_BYTE *)(v93 + 0x80); /*0x92429a*/
  v41 = a5; /*0x9242a1*/
  for ( i = v39; v41 < v39; v41 += 4 ) /*0x9242a7*/
  {
    v42 = *(_DWORD **)(*(_DWORD *)v41 + 0x50); /*0x9242b2*/
    if ( (_BYTE *)v42[2] != &v40[-v93] ) /*0x9242be*/
      v42[2] = &v40[-v93]; /*0x9242c0*/
    v40 = (_BYTE *)(*(int (__thiscall **)(_DWORD *, int, _BYTE *))(*v42 + 0x14))(v42, a1, v40); /*0x9242ca*/
  }
  *v40 = 2; /*0x9242d7*/
  v43 = 0; /*0x9242dd*/
  if ( (int)a4[6] > 0 ) /*0x9242e1*/
  {
    v44 = v99; /*0x9242e3*/
    do /*0x9242fd*/
      v44[v43++] = 0.0; /*0x9242f0*/
    while ( v43 < a4[6] ); /*0x9242fd*/
  }
  v45 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x92430c*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x92431b*/
  {
    v46 = *(_DWORD **)(v86 + 0x1A4); /*0x924321*/
    *v46 = "Stmake jac"; /*0x924327*/
    v47 = __rdtsc(); /*0x92432d*/
    v46[1] = v47; /*0x924337*/
    *(_DWORD *)(v86 + 0x1A4) = v46 + 3; /*0x92433d*/
  }
  v100 = &v103; /*0x92435c*/
  v48 = 0x80000100; /*0x924360*/
  v96 = v83; /*0x924365*/
  v97 = v90; /*0x924369*/
  v84 = a5; /*0x92436d*/
  v101 = 0; /*0x924371*/
  v102 = 0x80000100; /*0x924379*/
  if ( a5 < v39 ) /*0x92437d*/
  {
    do /*0x924470*/
    {
      v49 = *(_DWORD *)(*(_DWORD *)v84 + 0x68); /*0x92438c*/
      v50 = v49 + 0x1C * *(_DWORD *)(*(_DWORD *)v84 + 0x6C); /*0x924394*/
      for ( j = v50; v49 < v50; v49 += 0x1C ) /*0x92439c*/
      {
        if ( *(_BYTE *)(v49 + 0x10) < 3u ) /*0x9243a6*/
        {
          v51 = *(const char **)v49; /*0x9243d5*/
          _mm_prefetch(*(const char **)v49, 0); /*0x9243d7*/
          _mm_prefetch(v51 + 0xA00, 0); /*0x9243da*/
          _mm_prefetch(v51 + 0x1400, 0); /*0x9243e1*/
          v52 = *(_DWORD *)(*(_DWORD *)(v49 + 8) + 0x50); /*0x9243ee*/
          v53 = *(_DWORD *)(*(_DWORD *)(v49 + 4) + 0x50); /*0x9243f6*/
          a3[5] = v93 + *(_DWORD *)(v53 + 8); /*0x924402*/
          v54 = v93 + *(_DWORD *)(v52 + 8); /*0x92440b*/
          a3[7] = v53 + 0x10; /*0x924410*/
          a3[8] = v52 + 0x10; /*0x924413*/
          v55 = v96; /*0x924416*/
          a3[6] = v54; /*0x92441a*/
          a3[9] = *(_DWORD *)v49; /*0x92441f*/
          a3[0xA] = *(_DWORD *)(v49 + 0x18); /*0x924425*/
          if ( v55 >= v87 ) /*0x92442c*/
          {
            v96 = v98; /*0x924432*/
            v87 = 0xFFFFFFFF; /*0x924436*/
          }
          (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int *))(**(_DWORD **)(v49 + 0xC) + 0x1C))( /*0x924449*/
            *(_DWORD *)(v49 + 0xC),
            a3,
            &v96);
          v50 = j; /*0x92444c*/
        }
        else
        {
          if ( v101 == (v48 & 0x3FFFFFFF) ) /*0x9243b3*/
            sub_8A6EE0((const void **)&v100, 4); /*0x9243bc*/
          *(_DWORD *)&v100[4 * v101++] = v49; /*0x9243cc*/
        }
        v48 = v102; /*0x924450*/
      }
      v84 += 4; /*0x92446c*/
    }
    while ( v84 < i ); /*0x924470*/
  }
  v56 = 0; /*0x92447a*/
  for ( k = 0; k < v101; ++k ) /*0x924482*/
  {
    v57 = *(_DWORD *)&v100[4 * v56]; /*0x924494*/
    v58 = *(_DWORD *)(*(_DWORD *)(v57 + 4) + 0x50); /*0x92449a*/
    v59 = *(_DWORD *)(*(_DWORD *)(v57 + 8) + 0x50); /*0x9244a3*/
    a3[5] = v93 + *(_DWORD *)(v58 + 8); /*0x9244a8*/
    v60 = v93 + *(_DWORD *)(v59 + 8); /*0x9244b4*/
    a3[7] = v58 + 0x10; /*0x9244b6*/
    a3[8] = v59 + 0x10; /*0x9244b9*/
    a3[6] = v60; /*0x9244bc*/
    a3[9] = *(_DWORD *)v57; /*0x9244c1*/
    a3[0xA] = *(_DWORD *)(v57 + 0x18); /*0x9244cb*/
    if ( v96 >= v87 ) /*0x9244d2*/
    {
      v96 = v98; /*0x9244d8*/
      v87 = 0xFFFFFFFF; /*0x9244dc*/
    }
    (*(void (__thiscall **)(_DWORD, _DWORD *, unsigned int *))(**(_DWORD **)(v57 + 0xC) + 0x1C))( /*0x9244f1*/
      *(_DWORD *)(v57 + 0xC),
      a3,
      &v96);
    v56 = k + 1; /*0x9244fc*/
  }
  *(_DWORD *)v97 = 0x400; /*0x92450d*/
  if ( v102 >= 0 ) /*0x924519*/
  {
    v61 = *(_DWORD *)(v86 + 0x19C); /*0x92451b*/
    if ( !v61 ) /*0x924523*/
      v61 = unk_BA7D9C; /*0x924525*/
    sub_8A75D0(v61, v100, 4 * v102, 0x14); /*0x92453b*/
  }
  v62 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x924540*/
  v63 = MEMORY[0xBA9DE4]; /*0x924547*/
  if ( *(_DWORD *)(v62[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v62[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x92455c*/
  {
    v64 = *(_DWORD **)(v86 + 0x1A4); /*0x92455e*/
    *v64 = "Stsolve"; /*0x924564*/
    v65 = __rdtsc(); /*0x92456a*/
    v64[1] = v65; /*0x924574*/
    *(_DWORD *)(v86 + 0x1A4) = v64 + 3; /*0x92457a*/
  }
  v92 = sub_921A40((int)v62, a2, v90, (__m128 *)v93, v99, v78, v79, v80); /*0x924598*/
  v66 = v62[v63]; /*0x92459c*/
  if ( *(_DWORD *)(v66 + 0x1A4) < *(_DWORD *)(v66 + 0x1A8) ) /*0x9245b0*/
  {
    v67 = v62[v63]; /*0x9245b5*/
    v68 = *(float **)(v66 + 0x1A4); /*0x9245b7*/
    *(_DWORD *)v68 = "MiNumJacobians"; /*0x9245bd*/
    v68 += 2; /*0x9245c6*/
    v68[0xFFFFFFFF] = (float)(int)a4[6]; /*0x9245c9*/
    *(_DWORD *)(v67 + 0x1A4) = v68; /*0x9245cc*/
  }
  if ( *(_DWORD *)(v62[v63] + 0x1A4) < *(_DWORD *)(v62[v63] + 0x1A8) ) /*0x9245e1*/
  {
    v69 = *(_DWORD **)(v86 + 0x1A4); /*0x9245e7*/
    *v69 = "Stintegrate"; /*0x9245ed*/
    v70 = __rdtsc(); /*0x9245f3*/
    v69[1] = v70; /*0x9245fd*/
    *(_DWORD *)(v86 + 0x1A4) = v69 + 3; /*0x924603*/
  }
  if ( v92 == 1 ) /*0x92460e*/
  {
    v71 = a5; /*0x924616*/
    for ( m = a2[0x10].m128_i32[0]; v71 < i; v71 += 4 ) /*0x924621*/
      (*(void (__thiscall **)(_DWORD, int, __int32, int))(**(_DWORD **)(*(_DWORD *)v71 + 0x50) + 0x18))( /*0x92463b*/
        *(_DWORD *)(*(_DWORD *)v71 + 0x50),
        a1,
        m,
        v93 + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v71 + 0x50) + 8));
  }
  if ( *(_DWORD *)(v62[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v62[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x924662*/
  {
    v72 = *(_DWORD **)(v86 + 0x1A4); /*0x924664*/
    *v72 = "lt"; /*0x92466a*/
    v73 = __rdtsc(); /*0x924670*/
    v72[1] = v73; /*0x92467a*/
    *(_DWORD *)(v86 + 0x1A4) = v72 + 3; /*0x924680*/
  }
  if ( v95 ) /*0x92468c*/
  {
    v74 = *(_DWORD **)(v86 + 0x19C); /*0x92468e*/
    if ( !v74 ) /*0x924696*/
      v74 = (_DWORD *)unk_BA7D9C; /*0x924698*/
    v75 = v95 == (float *)v74[0xA]; /*0x92469e*/
    v74[8] = v95; /*0x9246a1*/
    if ( v75 ) /*0x9246a4*/
      (*(void (__thiscall **)(_DWORD *, float *))(*v74 + 0x10))(v74, v95); /*0x9246a9*/
  }
  v76 = *(_DWORD **)(v86 + 0x19C); /*0x9246ac*/
  if ( !v76 ) /*0x9246b4*/
    v76 = (_DWORD *)unk_BA7D9C; /*0x9246b6*/
  result = v94; /*0x9246bc*/
  v75 = v94 == v76[0xA]; /*0x9246c0*/
  v76[8] = v94; /*0x9246c3*/
  if ( v75 ) /*0x9246c6*/
    return (*(int (__thiscall **)(_DWORD *, int))(*v76 + 0x10))(v76, v94); /*0x9246cb*/
  return result; /*0x9246ce*/
}
