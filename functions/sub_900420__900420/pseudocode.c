int __cdecl sub_900420(int *a1, int a2, int a3, int a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // esi
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  _DWORD *v15; // edi
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  int v25; // edx
  __m128 *v26; // eax
  int v27; // ecx
  double v28; // st7
  int v29; // eax
  _DWORD *v30; // ecx
  unsigned __int64 v31; // rax
  _DWORD *v32; // ecx
  int v33; // edx
  unsigned int v34; // esi
  int v35; // esi
  int v36; // eax
  int v37; // eax
  _DWORD *v38; // ecx
  unsigned __int64 v39; // rax
  int v40; // edx
  float *v41; // ecx
  _DWORD *v42; // ecx
  bool v43; // zf
  _DWORD *v44; // ecx
  unsigned __int64 v45; // rax
  _DWORD *v46; // ecx
  int v48; // [esp+24h] [ebp-68h]
  int v49; // [esp+2Ch] [ebp-60h]
  int v50; // [esp+30h] [ebp-5Ch]
  int *v51; // [esp+34h] [ebp-58h]
  int v52; // [esp+38h] [ebp-54h] BYREF
  _DWORD v53[3]; // [esp+40h] [ebp-4Ch] BYREF
  __m128 v54[4]; // [esp+4Ch] [ebp-40h] BYREF

  v4 = MEMORY[0xBA9DE4]; /*0x90042a*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x900432*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x900439*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x900448*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90044a*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x90044c*/
    *v8 = "LtHeightField"; /*0x900452*/
    v8[3] = "GetSpheres"; /*0x900458*/
    v9 = __rdtsc(); /*0x90045f*/
    v8[1] = v9; /*0x900469*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4; /*0x90046f*/
  }
  v10 = *a1; /*0x900478*/
  v51 = *(int **)a2; /*0x90048b*/
  sub_8B1FF0(v54, *(__m128 **)(a2 + 8), (__m128 *)a1[2]); /*0x90048f*/
  (*(void (__thiscall **)(int, int *))(*(_DWORD *)v10 + 0x1C))(v10, &v52); /*0x90049d*/
  v11 = ThreadLocalStoragePointer[v4]; /*0x9004a0*/
  v12 = *(_DWORD **)(v11 + 0x19C); /*0x9004a3*/
  v49 = v52; /*0x9004af*/
  if ( !v12 ) /*0x9004b3*/
    v12 = (_DWORD *)unk_BA7D9C; /*0x9004b5*/
  v13 = v12[8]; /*0x9004bb*/
  v50 = 0x10 * v52; /*0x9004c1*/
  v14 = (0x10 * v52 + 0x10) & 0xFFFFFFF0; /*0x9004c8*/
  if ( v13 + v14 > v12[0xB] ) /*0x9004d1*/
  {
    v48 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, v14); /*0x9004e2*/
  }
  else
  {
    v12[8] = v13 + v14; /*0x9004d3*/
    v48 = v13; /*0x9004d6*/
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9004e6*/
  if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x900501*/
  {
    v16 = *(_DWORD **)(v11 + 0x1A4); /*0x900503*/
    *v16 = "StgetSpheres"; /*0x900509*/
    v17 = __rdtsc(); /*0x90050f*/
    v16[1] = v17; /*0x900519*/
    *(_DWORD *)(v11 + 0x1A4) = v16 + 3; /*0x90051f*/
  }
  v18 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x20))(v10, v48); /*0x900537*/
  if ( *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v15[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x900548*/
  {
    v19 = *(_DWORD **)(v11 + 0x1A4); /*0x90054a*/
    *v19 = "Sttransform"; /*0x900550*/
    v20 = __rdtsc(); /*0x900556*/
    v19[1] = v20; /*0x900560*/
    *(_DWORD *)(v11 + 0x1A4) = v19 + 3; /*0x900566*/
  }
  v21 = v54[0]; /*0x900574*/
  v22 = v54[1]; /*0x900579*/
  v23 = v54[2]; /*0x90057e*/
  v24 = v54[3]; /*0x900583*/
  v25 = v49; /*0x900588*/
  v26 = (__m128 *)v18; /*0x90058a*/
  v27 = v48 - v18; /*0x90058c*/
  do /*0x9005d4*/
  {
    v28 = v26->m128_f32[3]; /*0x900593*/
    *(__m128 *)((char *)v26 + v27) = _mm_add_ps( /*0x9005c6*/
                                       _mm_add_ps(
                                         _mm_mul_ps(v21, _mm_shuffle_ps(*v26, *v26, 0)),
                                         _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0xAA)), v24));
    *(float *)((char *)&v26->m128_f32[3] + v27) = v28; /*0x9005ca*/
    ++v26; /*0x9005ce*/
    --v25; /*0x9005d1*/
  }
  while ( v25 > 0 ); /*0x9005d4*/
  v29 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9005e2*/
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x9005f1*/
  {
    v30 = *(_DWORD **)(v11 + 0x1A4); /*0x9005f3*/
    *v30 = "StCollide"; /*0x9005f9*/
    v31 = __rdtsc(); /*0x9005ff*/
    v30[1] = v31; /*0x900609*/
    *(_DWORD *)(v11 + 0x1A4) = v30 + 3; /*0x90060f*/
  }
  v32 = *(_DWORD **)(v11 + 0x19C); /*0x900615*/
  if ( !v32 ) /*0x90061d*/
    v32 = (_DWORD *)unk_BA7D9C; /*0x90061f*/
  v33 = v32[8]; /*0x900629*/
  v34 = v33 + ((v50 + 0x10) & 0xFFFFFFF0); /*0x900632*/
  if ( v34 > v32[0xB] ) /*0x900638*/
  {
    v35 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v32 + 0xC))(v32, (v50 + 0x10) & 0xFFFFFFF0); /*0x900647*/
  }
  else
  {
    v32[8] = v34; /*0x90063a*/
    v35 = v33; /*0x90063d*/
  }
  v53[2] = *(_DWORD *)(a3 + 8); /*0x900657*/
  v53[0] = v48; /*0x900660*/
  v36 = *v51; /*0x900664*/
  v53[1] = v49; /*0x900667*/
  (*(void (__thiscall **)(int *, _DWORD *, int))(v36 + 0x1C))(v51, v53, v35); /*0x90066b*/
  v37 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x90067a*/
  if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) ) /*0x900689*/
  {
    v38 = *(_DWORD **)(v11 + 0x1A4); /*0x90068b*/
    *v38 = "StExamine"; /*0x900691*/
    v39 = __rdtsc(); /*0x900697*/
    v38[1] = v39; /*0x9006a1*/
    *(_DWORD *)(v11 + 0x1A4) = v38 + 3; /*0x9006a7*/
  }
  v40 = v49 - 1; /*0x9006ad*/
  if ( v49 - 1 >= 0 ) /*0x9006b2*/
  {
    v41 = (float *)(v35 + 0xC); /*0x9006b4*/
    while ( *v41 >= (double)*(float *)&SrcStr ) /*0x9006cd*/
    {
      v41 += 4; /*0x9006cf*/
      if ( --v40 < 0 ) /*0x9006d3*/
        goto LABEL_29; /*0x9006d3*/
    }
    (*(void (__thiscall **)(int, int *, int))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x9006e4*/
  }
LABEL_29:
  v42 = *(_DWORD **)(v11 + 0x19C); /*0x9006e7*/
  if ( !v42 ) /*0x9006ef*/
    v42 = (_DWORD *)unk_BA7D9C; /*0x9006f1*/
  v43 = v35 == v42[0xA]; /*0x9006f7*/
  v42[8] = v35; /*0x9006fa*/
  if ( v43 ) /*0x9006fd*/
    (*(void (__thiscall **)(_DWORD *, int))(*v42 + 0x10))(v42, v35); /*0x900702*/
  v44 = *(_DWORD **)(v11 + 0x19C); /*0x900705*/
  if ( !v44 ) /*0x90070d*/
    v44 = (_DWORD *)unk_BA7D9C; /*0x90070f*/
  v43 = v48 == v44[0xA]; /*0x900719*/
  v44[8] = v48; /*0x90071c*/
  if ( v43 ) /*0x90071f*/
    (*(void (__thiscall **)(_DWORD *, int))(*v44 + 0x10))(v44, v48); /*0x900724*/
  LODWORD(v45) = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x900733*/
  if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x900742*/
  {
    v46 = *(_DWORD **)(v11 + 0x1A4); /*0x900744*/
    *v46 = "lt"; /*0x90074a*/
    v45 = __rdtsc(); /*0x900750*/
    v46[1] = v45; /*0x90075a*/
    *(_DWORD *)(v11 + 0x1A4) = v46 + 3; /*0x900760*/
  }
  return v45; /*0x900766*/
}
