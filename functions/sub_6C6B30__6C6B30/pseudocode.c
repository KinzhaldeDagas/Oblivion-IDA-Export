// Maps one sequence time into a partner sequence by matching case-insensitive m: text keys. Computes source local time without committing it, brackets the previous/next source morph keys with cycle wrap, finds identical full key strings in the partner, linearly interpolates between partner key times, then wraps the result to the partner start/end range. Used only by the native morph/transition update path.
double __userpurge NiControllerSequence_MapTimeByMorphKeys@<st0>(float *this@<ecx>, int a2@<edi>, int a3, float a4)
{
  float *v5; // ebx
  float *v6; // esi
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  int v10; // eax
  float *v11; // edx
  float *v12; // ebp
  int v13; // esi
  const char *v14; // eax
  double v15; // st6
  double v16; // st6
  double v17; // st7
  double v18; // st6
  int v19; // eax
  unsigned int v20; // edi
  int v21; // eax
  float *v22; // edx
  float *v23; // ecx
  unsigned int v24; // ebp
  int v25; // esi
  double result; // st7
  double v27; // st6
  bool v28; // c0
  bool v29; // c3
  double v30; // st6
  size_t v31; // [esp+4h] [ebp-2Ch]
  char v32; // [esp+1Bh] [ebp-15h]
  float *v33; // [esp+1Ch] [ebp-14h]
  float *v35; // [esp+24h] [ebp-Ch]
  float *v36; // [esp+28h] [ebp-8h]
  float *v37; // [esp+2Ch] [ebp-4h]
  float v38; // [esp+2Ch] [ebp-4h]
  int v39; // [esp+34h] [ebp+4h]
  bool v40; // [esp+34h] [ebp+4h]
  int v41; // [esp+34h] [ebp+4h]
  float v42; // [esp+38h] [ebp+8h]
  float v43; // [esp+38h] [ebp+8h]
  float v44; // [esp+38h] [ebp+8h]
  bool v45; // [esp+38h] [ebp+8h]
  float v46; // [esp+38h] [ebp+8h]
  float v47; // [esp+38h] [ebp+8h]

  HIDWORD(v31) = a2; /*0x6c6b3a*/
  v5 = 0; /*0x6c6b3f*/
  v6 = this; /*0x6c6b42*/
  v42 = NiControllerSequence_AdvanceTime(a3, a4, 0); /*0x6c6b53*/
  v7 = *(_DWORD *)(a3 + 0x20); /*0x6c6b57*/
  v8 = v42; /*0x6c6b5a*/
  v9 = *(_DWORD *)(v7 + 0xC); /*0x6c6b5e*/
  v10 = *(_DWORD *)(v7 + 0x10); /*0x6c6b61*/
  v11 = 0; /*0x6c6b64*/
  v12 = 0; /*0x6c6b66*/
  v33 = 0; /*0x6c6b6a*/
  v37 = 0; /*0x6c6b6e*/
  if ( v9 ) /*0x6c6b72*/
  {
    v13 = v10; /*0x6c6b76*/
    v39 = v9; /*0x6c6b78*/
    do /*0x6c6bcf*/
    {
      v14 = *(const char **)(v13 + 4); /*0x6c6b80*/
      if ( v14 ) /*0x6c6b85*/
      {
        LODWORD(v31) = MaxCount; /*0x6c6b93*/
        if ( !_strnicmp(v14, off_B241C4, v31) ) /*0x6c6b96*/
        {
          v37 = (float *)v13; /*0x6c6ba4*/
          if ( !v12 ) /*0x6c6ba8*/
            v12 = (float *)v13; /*0x6c6baa*/
          if ( v42 <= (double)*(float *)v13 ) /*0x6c6bb9*/
          {
            if ( !v5 ) /*0x6c6bc3*/
              v5 = (float *)v13; /*0x6c6bc5*/
          }
          else
          {
            v33 = (float *)v13; /*0x6c6bbb*/
          }
        }
      }
      v13 += 8; /*0x6c6bc7*/
      --v39; /*0x6c6bca*/
    }
    while ( v39 ); /*0x6c6bcf*/
    v8 = v42; /*0x6c6bd1*/
    v6 = this; /*0x6c6bd5*/
    v11 = v37; /*0x6c6bd9*/
  }
  v32 = 0; /*0x6c6be3*/
  if ( v5 ) /*0x6c6be8*/
  {
    if ( v33 ) /*0x6c6bec*/
    {
      v15 = *v33; /*0x6c6bee*/
    }
    else
    {
      v33 = v11; /*0x6c6c1d*/
      v15 = *(float *)(a3 + 0x2C) - *(float *)(a3 + 0x30) + *v11; /*0x6c6c24*/
    }
    v44 = v15; /*0x6c6c26*/
    v17 = v8 - v44; /*0x6c6c30*/
    v18 = *v5 - v44; /*0x6c6c32*/
  }
  else
  {
    v5 = v12; /*0x6c6bf4*/
    v32 = 1; /*0x6c6bfa*/
    v16 = *v33; /*0x6c6bff*/
    v17 = v8 - v16; /*0x6c6c05*/
    v43 = *(float *)(a3 + 0x30) - *(float *)(a3 + 0x2C) + *v12; /*0x6c6c10*/
    v18 = v43 - v16; /*0x6c6c14*/
  }
  v19 = *((_DWORD *)v6 + 8); /*0x6c6c3b*/
  v20 = *(_DWORD *)(v19 + 0xC); /*0x6c6c3e*/
  v21 = *(_DWORD *)(v19 + 0x10); /*0x6c6c41*/
  v40 = v33 == 0; /*0x6c6c44*/
  v45 = v5 == 0; /*0x6c6c4b*/
  v22 = 0; /*0x6c6c50*/
  v23 = 0; /*0x6c6c52*/
  v24 = 0; /*0x6c6c54*/
  v35 = 0; /*0x6c6c58*/
  v36 = 0; /*0x6c6c5c*/
  if ( v20 ) /*0x6c6c64*/
  {
    v25 = v21; /*0x6c6c66*/
    while ( 1 ) /*0x6c6c68*/
    {
      if ( v40 ) /*0x6c6c6d*/
      {
        if ( v45 ) /*0x6c6c74*/
          goto LABEL_30; /*0x6c6c74*/
      }
      else
      {
        if ( !CRT_StricmpLocaleDispatch(*(unsigned __int8 **)(v25 + 4), *((unsigned __int8 **)v33 + 1)) ) /*0x6c6c84*/
        {
          v35 = (float *)v25; /*0x6c6c90*/
          v40 = 1; /*0x6c6c94*/
        }
        if ( v45 ) /*0x6c6c9e*/
          goto LABEL_29; /*0x6c6c9e*/
      }
      if ( !CRT_StricmpLocaleDispatch(*(unsigned __int8 **)(v25 + 4), *((unsigned __int8 **)v5 + 1)) ) /*0x6c6ca8*/
      {
        v36 = (float *)v25; /*0x6c6cb4*/
        v45 = 1; /*0x6c6cb8*/
      }
LABEL_29:
      v22 = v35; /*0x6c6cbd*/
      v23 = v36; /*0x6c6cc1*/
      ++v24; /*0x6c6cc5*/
      v25 += 8; /*0x6c6cc8*/
      if ( v24 >= v20 ) /*0x6c6ccd*/
      {
LABEL_30:
        v6 = this; /*0x6c6ccf*/
        break; /*0x6c6ccf*/
      }
    }
  }
  v46 = 0.0; /*0x6c6cd3*/
  *(float *)&v41 = 0.0; /*0x6c6cdb*/
  if ( v22 == v23 ) /*0x6c6cdf*/
  {
    v41 = *(int *)v22; /*0x6c6ce8*/
    v46 = *v23; /*0x6c6cee*/
    if ( v32 ) /*0x6c6cf2*/
      v46 = v6[0xC] - v6[0xB] + v46; /*0x6c6cfe*/
    else
      *(float *)&v41 = *(float *)&v41 - (v6[0xC] - v6[0xB]); /*0x6c6d10*/
  }
  else
  {
    if ( v23 ) /*0x6c6d18*/
      v46 = *v23; /*0x6c6d1c*/
    if ( v22 ) /*0x6c6d22*/
      v41 = *(int *)v22; /*0x6c6d26*/
    if ( v46 < (double)*(float *)&v41 ) /*0x6c6d3b*/
      v46 = v46 + v6[0xC] - v6[0xB]; /*0x6c6d45*/
  }
  v38 = v17 / v18; /*0x6c6c60*/
  v47 = (v46 - *(float *)&v41) * v38 + *(float *)&v41; /*0x6c6d61*/
  result = v47; /*0x6c6d65*/
  v27 = v6[0xB]; /*0x6c6d69*/
  v28 = v27 < v47; /*0x6c6d6c*/
  v29 = v27 == v47; /*0x6c6d6c*/
  v30 = v6[0xC]; /*0x6c6d70*/
  if ( v28 || v29 ) /*0x6c6d73*/
  {
    if ( v30 < result ) /*0x6c6d96*/
      return (float)(result - (v6[0xC] - v6[0xB])); /*0x6c6da4*/
  }
  else
  {
    return (float)(result + v30 - v6[0xB]); /*0x6c6d85*/
  }
  return result; /*0x6c6d89*/
}
