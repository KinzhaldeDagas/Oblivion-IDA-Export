int __thiscall sub_8E0500(float *this, __m128 *a2, float a3, float a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  float *v7; // ebp
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  double v20; // st7
  double v21; // st6
  __int32 v22; // ecx
  double v23; // st7
  double v24; // st6
  int v25; // eax
  int v26; // edi
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v30; // eax
  int v31; // edi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  int v35; // ebp
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  double v38; // st7
  double v39; // st6
  int v40; // eax
  int v41; // esi
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  float v49; // [esp+18h] [ebp-30h] BYREF
  float v50; // [esp+1Ch] [ebp-2Ch]
  float v51; // [esp+20h] [ebp-28h]
  float v52; // [esp+24h] [ebp-24h]
  float v53; // [esp+28h] [ebp-20h]
  float v54; // [esp+2Ch] [ebp-1Ch]
  float v55; // [esp+30h] [ebp-18h]
  float v56; // [esp+34h] [ebp-14h]
  float v57; // [esp+38h] [ebp-10h]
  float v58; // [esp+3Ch] [ebp-Ch]
  float v59; // [esp+40h] [ebp-8h]
  float v60; // [esp+44h] [ebp-4h]
  int v61; // [esp+4Ch] [ebp+4h]
  float v62; // [esp+54h] [ebp+Ch]

  v4 = MEMORY[0xBA9DE4]; /*0x8e0504*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e050d*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e0514*/
  v7 = this; /*0x8e051d*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8e052b*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e052d*/
    v9 = *(_DWORD **)(v6 + 0x1A4); /*0x8e052f*/
    *v9 = "TtSimulate"; /*0x8e0535*/
    v10 = __rdtsc(); /*0x8e053b*/
    v9[1] = v10; /*0x8e0545*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8e054b*/
  }
  v7[2] = a4; /*0x8e055f*/
  v62 = a4 + a4; /*0x8e0562*/
  a2[1].m128_f32[0] = a3 + a2[1].m128_f32[0]; /*0x8e056d*/
  *(float *)&v61 = v62 * flt_A34BA0; /*0x8e057a*/
  while ( 1 )
  {
    while ( 1 )
    {
      if ( fabs(a2[1].m128_f32[0] - a2[1].m128_f32[2]) < *(float *)&v61 && a3 / v62 > kFaceEarNormalMatchRadius ) /*0x8e05a6*/
        a2[1].m128_i32[0] = a2[1].m128_i32[2]; /*0x8e05ab*/
      v12 = a2[1].m128_f32[2]; /*0x8e05ae*/
      v13 = a2[1].m128_f32[1]; /*0x8e05b1*/
      v49 = a2[1].m128_f32[1]; /*0x8e05b4*/
      v50 = v12; /*0x8e05ba*/
      v51 = v12 - v13; /*0x8e05c2*/
      v52 = v51 == *(float *)&SrcStr ? 0.0 : fConstant_1 / v51;
      v14 = a2[1].m128_f32[2]; /*0x8e05f6*/
      if ( *((_DWORD *)v7 + 3) ) /*0x8e05f3*/
        break; /*0x8e05f3*/
      if ( v14 >= a2[1].m128_f32[0] ) /*0x8e0609*/
        goto LABEL_35; /*0x8e0609*/
      v15 = sub_8992B0(a2); /*0x8e0611*/
      v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8e0619*/
      if ( !v16 ) /*0x8e0623*/
        v16 = unk_BA7D9C; /*0x8e0625*/
      if ( v15 > *(_DWORD *)(v16 + 0x2C) - *(_DWORD *)(v16 + 0x20) - 0x10 )
      {
        v17 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8e0643*/
        v18 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8e0645*/
        v19 = v18 > v17 ? v18 - v17 : 0;
        if ( v15 > v19 ) /*0x8e0654*/
        {
          *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8e07ad*/
          v25 = ThreadLocalStoragePointer[v4]; /*0x8e07b4*/
          if ( *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8) ) /*0x8e07c3*/
          {
            v26 = ThreadLocalStoragePointer[v4]; /*0x8e07c5*/
            v27 = *(_DWORD **)(v25 + 0x1A4); /*0x8e07c7*/
            *v27 = "Et"; /*0x8e07cd*/
            v28 = __rdtsc(); /*0x8e07d3*/
            v27[1] = v28; /*0x8e07dd*/
            *(_DWORD *)(v26 + 0x1A4) = v27 + 3; /*0x8e07e3*/
          }
          return 1; /*0x8e07f5*/
        }
      }
      v20 = v62 + a2[1].m128_f32[2]; /*0x8e0661*/
      a2[1].m128_i32[1] = a2[1].m128_i32[2]; /*0x8e0664*/
      a2[1].m128_f32[2] = v20; /*0x8e0667*/
      v21 = a2[1].m128_f32[1]; /*0x8e066a*/
      v53 = a2[1].m128_f32[1]; /*0x8e066d*/
      v54 = v20; /*0x8e0673*/
      v55 = v20 - v21; /*0x8e067b*/
      if ( v55 == *(float *)&SrcStr ) /*0x8e0692*/
        v56 = 0.0; /*0x8e0694*/
      else
        v56 = fConstant_1 / v55; /*0x8e06a8*/
      v49 = v53; /*0x8e06b8*/
      v52 = v56; /*0x8e06c0*/
      v51 = v55; /*0x8e06c4*/
      v22 = a2[5].m128_i32[3]; /*0x8e06c8*/
      v50 = v54; /*0x8e06d0*/
      (*(void (__thiscall **)(__int32, __m128 *, float *))(*(_DWORD *)v22 + 0xC))(v22, a2, &v49); /*0x8e06d7*/
      v7 = this; /*0x8e06dd*/
      a2->m128_i32[3] = a2[1].m128_i32[1]; /*0x8e06e9*/
      sub_8D6E40(a2, &v49); /*0x8e06ec*/
      *((_DWORD *)this + 3) = 1; /*0x8e06f1*/
    }
    if ( (v14 + a2[1].m128_f32[1]) * kHeadBodyNormalMatchRadius >= a2[1].m128_f32[0] ) /*0x8e070e*/
    {
LABEL_35:
      a2->m128_i32[3] = a2[1].m128_i32[0]; /*0x8e083c*/
      v34 = ThreadLocalStoragePointer[v4]; /*0x8e0842*/
      if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) ) /*0x8e0851*/
      {
        v35 = ThreadLocalStoragePointer[v4]; /*0x8e0853*/
        v36 = *(_DWORD **)(v34 + 0x1A4); /*0x8e0855*/
        *v36 = "TtPostSimulateCb"; /*0x8e085b*/
        v37 = __rdtsc(); /*0x8e0861*/
        v36[1] = v37; /*0x8e086b*/
        *(_DWORD *)(v35 + 0x1A4) = v36 + 3; /*0x8e0871*/
      }
      v38 = a2[1].m128_f32[0]; /*0x8e0877*/
      v39 = v38 - a3; /*0x8e087d*/
      v49 = v39; /*0x8e0881*/
      v50 = v38; /*0x8e0887*/
      v51 = v38 - v39; /*0x8e088f*/
      if ( v51 == *(float *)&SrcStr ) /*0x8e08a6*/
        v52 = 0.0; /*0x8e08a8*/
      else
        v52 = fConstant_1 / v51; /*0x8e08bc*/
      sub_8DCD60((int)&v49, (int)a2, (int)&v49); /*0x8e08c6*/
      v40 = ThreadLocalStoragePointer[v4]; /*0x8e08cb*/
      if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) ) /*0x8e08df*/
      {
        v41 = ThreadLocalStoragePointer[v4]; /*0x8e08e1*/
        v42 = *(_DWORD **)(v40 + 0x1A4); /*0x8e08e3*/
        *v42 = "Et"; /*0x8e08e9*/
        v43 = __rdtsc(); /*0x8e08ef*/
        v42[1] = v43; /*0x8e08f9*/
        *(_DWORD *)(v41 + 0x1A4) = v42 + 3; /*0x8e08ff*/
      }
      v44 = ThreadLocalStoragePointer[v4]; /*0x8e0905*/
      if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x8e0914*/
      {
        v45 = ThreadLocalStoragePointer[v4]; /*0x8e0916*/
        v46 = *(_DWORD **)(v44 + 0x1A4); /*0x8e0918*/
        *v46 = "Et"; /*0x8e091e*/
        v47 = __rdtsc(); /*0x8e0924*/
        v46[1] = v47; /*0x8e092e*/
        *(_DWORD *)(v45 + 0x1A4) = v46 + 3; /*0x8e0934*/
      }
      return 0; /*0x8e093d*/
    }
    v23 = a2[1].m128_f32[2]; /*0x8e0714*/
    v24 = a2[1].m128_f32[1]; /*0x8e0717*/
    v57 = a2[1].m128_f32[1]; /*0x8e071a*/
    v58 = v23; /*0x8e0720*/
    v59 = v23 - v24; /*0x8e0728*/
    v60 = v59 == *(float *)&SrcStr ? 0.0 : fConstant_1 / v59;
    v50 = v58; /*0x8e0765*/
    v49 = v57; /*0x8e076d*/
    v51 = v59; /*0x8e0776*/
    v52 = v60; /*0x8e077d*/
    sub_8D7920((int)a2, &v49); /*0x8e0781*/
    if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8e0790*/
      break; /*0x8e0790*/
    v7[3] = 0.0; /*0x8e0792*/
    a2->m128_f32[3] = (a2[1].m128_f32[2] + a2[1].m128_f32[1]) * kHeadBodyNormalMatchRadius; /*0x8e07a5*/
  }
  v30 = ThreadLocalStoragePointer[v4]; /*0x8e07f8*/
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x8e0807*/
  {
    v31 = ThreadLocalStoragePointer[v4]; /*0x8e0809*/
    v32 = *(_DWORD **)(v30 + 0x1A4); /*0x8e080b*/
    *v32 = "Et"; /*0x8e0811*/
    v33 = __rdtsc(); /*0x8e0817*/
    v32[1] = v33; /*0x8e0821*/
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x8e0827*/
  }
  return 2; /*0x8e07e9*/
}
