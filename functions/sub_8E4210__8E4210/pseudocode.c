_WORD *__cdecl sub_8E4210(
        int a1,
        int a2,
        int a3,
        __int16 a4,
        unsigned int a5,
        unsigned int a6,
        const void **a7,
        const void **a8)
{
  int v8; // ecx
  int v10; // ebp
  unsigned int v11; // eax
  _WORD *i; // ebx
  unsigned __int16 v13; // cx
  int v14; // edi
  __int16 v15; // cx
  __int16 v16; // ax
  __int16 v17; // dx
  const void **v18; // eax
  const void *v19; // ecx
  _DWORD *v20; // edx
  unsigned int v21; // edx
  int v22; // ebx
  unsigned int v23; // eax
  int v24; // ebx
  int v25; // edi
  int v26; // edi
  __int16 v27; // ax
  const void *v28; // eax
  _DWORD *v29; // ecx
  int v30; // ebx
  unsigned int v31; // eax
  int v32; // edi
  __int16 v33; // ax
  const void *v34; // eax
  _DWORD *v35; // ecx
  _WORD *v36; // edi
  unsigned int v37; // ecx
  _WORD *result; // eax
  int v39; // edx
  _WORD *v40; // ebx
  int v41; // edi
  __int16 v42; // ax
  const void *v43; // eax
  _DWORD *v44; // ecx
  int v45; // [esp+14h] [ebp+4h]
  __int16 v46; // [esp+1Ch] [ebp+Ch]
  __int16 j; // [esp+1Ch] [ebp+Ch]

  v8 = *(_DWORD *)(a1 + 0x64); /*0x8e4214*/
  v10 = *(unsigned __int16 *)(a3 + 2); /*0x8e421e*/
  v11 = *(unsigned __int16 *)(v8 + 4 * v10 - 4); /*0x8e4222*/
  for ( i = (_WORD *)(v8 + 4 * v10); a5 < v11; LOWORD(v10) = v10 - 1 ) /*0x8e422f*/
  {
    v13 = i[0xFFFFFFFF]; /*0x8e4235*/
    v14 = a2 + 0x10 * v13; /*0x8e4242*/
    *i = v11; /*0x8e4246*/
    i[1] = v13; /*0x8e4249*/
    if ( (v11 & 1) != 0 ) /*0x8e424d*/
    {
      v15 = *(_WORD *)(v14 + 4) - *(_WORD *)a3; /*0x8e4269*/
      v16 = (*(_WORD *)(v14 + 0xA) - *(_WORD *)(a3 + 8)) | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v14 + 8)); /*0x8e426c*/
      v17 = *(_WORD *)(a3 + 4) - *(_WORD *)v14; /*0x8e4274*/
      *(_WORD *)(v14 + 6) = v10; /*0x8e4279*/
      if ( (char)((unsigned __int16)(v17 | v15 | v16) >> 8) >= 0 ) /*0x8e4281*/
      {
        v18 = a7; /*0x8e4283*/
        if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) ) /*0x8e4295*/
        {
          sub_8A6EE0(a7, 8); /*0x8e429a*/
          v18 = a7; /*0x8e429f*/
        }
        v19 = v18[1]; /*0x8e42a6*/
        v20 = (char *)*v18 + 8 * (_DWORD)v19; /*0x8e42ab*/
        v18[1] = (char *)v19 + 1; /*0x8e42af*/
        *v20 = *(_DWORD *)(a3 + 0xC); /*0x8e42b5*/
        v20[1] = *(_DWORD *)(v14 + 0xC); /*0x8e42ba*/
      }
    }
    else
    {
      *(_WORD *)(v14 + 2) = v10; /*0x8e42bf*/
    }
    i += 0xFFFFFFFE; /*0x8e42cc*/
    i[1] = a4; /*0x8e42cf*/
    v11 = (unsigned __int16)i[0xFFFFFFFE]; /*0x8e42d3*/
  }
  *(_WORD *)(a3 + 2) = v10; /*0x8e42e9*/
  *i = a5; /*0x8e42ed*/
  v21 = a6; /*0x8e42f7*/
  v22 = *(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 6); /*0x8e42fb*/
  v23 = *(unsigned __int16 *)(v22 + 4); /*0x8e42fe*/
  v24 = v22 + 4; /*0x8e4302*/
  v46 = 0; /*0x8e4307*/
  if ( a6 > v23 ) /*0x8e430f*/
  {
    do /*0x8e43ba*/
    {
      ++v46; /*0x8e4320*/
      v25 = 0x10 * *(unsigned __int16 *)(v24 + 2); /*0x8e4328*/
      *(_DWORD *)(v24 - 4) = *(_DWORD *)v24; /*0x8e432b*/
      v26 = a2 + v25; /*0x8e4333*/
      *(_WORD *)(v24 + 2) = a4; /*0x8e4337*/
      if ( (v23 & 1) != 0 ) /*0x8e433b*/
      {
        --*(_WORD *)(v26 + 6); /*0x8e43ad*/
      }
      else
      {
        v27 = (*(_WORD *)(a3 + 4) - *(_WORD *)v26) /*0x8e4367*/
            | (*(_WORD *)(v26 + 4) - *(_WORD *)a3)
            | (*(_WORD *)(v26 + 0xA) - *(_WORD *)(a3 + 8))
            | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v26 + 8));
        --*(_WORD *)(v26 + 2); /*0x8e4369*/
        if ( v27 >= 0 ) /*0x8e436f*/
        {
          if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) ) /*0x8e4382*/
          {
            sub_8A6EE0(a7, 8); /*0x8e4387*/
            v21 = a6; /*0x8e438c*/
          }
          v28 = a7[1]; /*0x8e4393*/
          v29 = (char *)*a7 + 8 * (_DWORD)v28; /*0x8e4399*/
          a7[1] = (char *)v28 + 1; /*0x8e439d*/
          *v29 = *(_DWORD *)(a3 + 0xC); /*0x8e43a3*/
          v29[1] = *(_DWORD *)(v26 + 0xC); /*0x8e43a8*/
        }
      }
      v23 = *(unsigned __int16 *)(v24 + 4); /*0x8e43b1*/
      v24 += 4; /*0x8e43b5*/
    }
    while ( v21 > v23 ); /*0x8e43ba*/
  }
  *(_WORD *)(a3 + 6) += v46; /*0x8e43c5*/
  v30 = *(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 6); /*0x8e43d8*/
  v31 = *(unsigned __int16 *)(v30 - 4); /*0x8e43db*/
  for ( j = 0; v21 < v31; v31 = *(unsigned __int16 *)(v30 - 4) ) /*0x8e43e9*/
  {
    v30 -= 4; /*0x8e43f8*/
    --j; /*0x8e43fc*/
    v32 = a2 + 0x10 * *(unsigned __int16 *)(v30 + 2); /*0x8e4407*/
    *(_DWORD *)(v30 + 4) = *(_DWORD *)v30; /*0x8e440d*/
    *(_WORD *)(v30 + 2) = a4; /*0x8e4415*/
    if ( (v31 & 1) != 0 ) /*0x8e4419*/
    {
      ++*(_WORD *)(v32 + 6); /*0x8e4487*/
    }
    else
    {
      v33 = (*(_WORD *)(a3 + 4) - *(_WORD *)v32) /*0x8e4445*/
          | (*(_WORD *)(v32 + 4) - *(_WORD *)a3)
          | (*(_WORD *)(v32 + 0xA) - *(_WORD *)(a3 + 8))
          | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v32 + 8));
      ++*(_WORD *)(v32 + 2); /*0x8e4447*/
      if ( v33 >= 0 ) /*0x8e444d*/
      {
        if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) ) /*0x8e445c*/
        {
          sub_8A6EE0(a8, 8); /*0x8e4461*/
          v21 = a6; /*0x8e4466*/
        }
        v34 = a8[1]; /*0x8e446d*/
        v35 = (char *)*a8 + 8 * (_DWORD)v34; /*0x8e4473*/
        a8[1] = (char *)v34 + 1; /*0x8e4477*/
        *v35 = *(_DWORD *)(a3 + 0xC); /*0x8e447d*/
        v35[1] = *(_DWORD *)(v32 + 0xC); /*0x8e4482*/
      }
    }
  }
  *(_WORD *)(a3 + 6) += j; /*0x8e449c*/
  *(_WORD *)v30 = v21; /*0x8e44a4*/
  v36 = (_WORD *)(*(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 2)); /*0x8e44b2*/
  v37 = (unsigned __int16)v36[2]; /*0x8e44b5*/
  result = v36 + 2; /*0x8e44b9*/
  v39 = 0; /*0x8e44bc*/
  if ( a5 <= v37 ) /*0x8e44c0*/
  {
    *(_WORD *)(a3 + 2) = *(_WORD *)(a3 + 2); /*0x8e457f*/
    *v36 = a5; /*0x8e4583*/
  }
  else
  {
    do /*0x8e456a*/
    {
      v40 = result; /*0x8e44c6*/
      v41 = a2 + 0x10 * (unsigned __int16)result[1]; /*0x8e44d3*/
      ++v39; /*0x8e44d7*/
      *((_DWORD *)result + 0xFFFFFFFF) = *(_DWORD *)result; /*0x8e44db*/
      v45 = v39; /*0x8e44e3*/
      result[1] = a4; /*0x8e44e7*/
      if ( (v37 & 1) != 0 ) /*0x8e44eb*/
      {
        v42 = (*(_WORD *)(v41 + 4) - *(_WORD *)a3) /*0x8e4517*/
            | (*(_WORD *)(a3 + 4) - *(_WORD *)v41)
            | (*(_WORD *)(v41 + 0xA) - *(_WORD *)(a3 + 8))
            | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v41 + 8));
        --*(_WORD *)(v41 + 6); /*0x8e4519*/
        if ( v42 >= 0 ) /*0x8e451f*/
        {
          if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) ) /*0x8e452e*/
          {
            sub_8A6EE0(a8, 8); /*0x8e4533*/
            v39 = v45; /*0x8e4538*/
          }
          v43 = a8[1]; /*0x8e453f*/
          v44 = (char *)*a8 + 8 * (_DWORD)v43; /*0x8e4545*/
          a8[1] = (char *)v43 + 1; /*0x8e4549*/
          *v44 = *(_DWORD *)(a3 + 0xC); /*0x8e454f*/
          v44[1] = *(_DWORD *)(v41 + 0xC); /*0x8e4554*/
        }
      }
      else
      {
        --*(_WORD *)(v41 + 2); /*0x8e4559*/
      }
      v37 = (unsigned __int16)v40[2]; /*0x8e455d*/
      result = v40 + 2; /*0x8e4567*/
    }
    while ( a5 > v37 ); /*0x8e456a*/
    *(_WORD *)(a3 + 2) += v39; /*0x8e4570*/
    *v40 = a5; /*0x8e457a*/
  }
  return result; /*0x8e4577*/
}
