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

  v8 = *(_DWORD *)(a1 + 0x64);
  v10 = *(unsigned __int16 *)(a3 + 2);
  v11 = *(unsigned __int16 *)(v8 + 4 * v10 - 4);
  for ( i = (_WORD *)(v8 + 4 * v10); a5 < v11; LOWORD(v10) = v10 - 1 )
  {
    v13 = i[0xFFFFFFFF];
    v14 = a2 + 0x10 * v13;
    *i = v11;
    i[1] = v13;
    if ( (v11 & 1) != 0 )
    {
      v15 = *(_WORD *)(v14 + 4) - *(_WORD *)a3;
      v16 = (*(_WORD *)(v14 + 0xA) - *(_WORD *)(a3 + 8)) | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v14 + 8));
      v17 = *(_WORD *)(a3 + 4) - *(_WORD *)v14;
      *(_WORD *)(v14 + 6) = v10;
      if ( (char)((unsigned __int16)(v17 | v15 | v16) >> 8) >= 0 )
      {
        v18 = a7;
        if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) )
        {
          sub_8A6EE0(a7, 8);
          v18 = a7;
        }
        v19 = v18[1];
        v20 = (char *)*v18 + 8 * (_DWORD)v19;
        v18[1] = (char *)v19 + 1;
        *v20 = *(_DWORD *)(a3 + 0xC);
        v20[1] = *(_DWORD *)(v14 + 0xC);
      }
    }
    else
    {
      *(_WORD *)(v14 + 2) = v10;
    }
    i += 0xFFFFFFFE;
    i[1] = a4;
    v11 = (unsigned __int16)i[0xFFFFFFFE];
  }
  *(_WORD *)(a3 + 2) = v10;
  *i = a5;
  v21 = a6;
  v22 = *(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 6);
  v23 = *(unsigned __int16 *)(v22 + 4);
  v24 = v22 + 4;
  v46 = 0;
  if ( a6 > v23 )
  {
    do
    {
      ++v46;
      v25 = 0x10 * *(unsigned __int16 *)(v24 + 2);
      *(_DWORD *)(v24 - 4) = *(_DWORD *)v24;
      v26 = a2 + v25;
      *(_WORD *)(v24 + 2) = a4;
      if ( (v23 & 1) != 0 )
      {
        --*(_WORD *)(v26 + 6);
      }
      else
      {
        v27 = (*(_WORD *)(a3 + 4) - *(_WORD *)v26)
            | (*(_WORD *)(v26 + 4) - *(_WORD *)a3)
            | (*(_WORD *)(v26 + 0xA) - *(_WORD *)(a3 + 8))
            | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v26 + 8));
        --*(_WORD *)(v26 + 2);
        if ( v27 >= 0 )
        {
          if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) )
          {
            sub_8A6EE0(a7, 8);
            v21 = a6;
          }
          v28 = a7[1];
          v29 = (char *)*a7 + 8 * (_DWORD)v28;
          a7[1] = (char *)v28 + 1;
          *v29 = *(_DWORD *)(a3 + 0xC);
          v29[1] = *(_DWORD *)(v26 + 0xC);
        }
      }
      v23 = *(unsigned __int16 *)(v24 + 4);
      v24 += 4;
    }
    while ( v21 > v23 );
  }
  *(_WORD *)(a3 + 6) += v46;
  v30 = *(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 6);
  v31 = *(unsigned __int16 *)(v30 - 4);
  for ( j = 0; v21 < v31; v31 = *(unsigned __int16 *)(v30 - 4) )
  {
    v30 -= 4;
    --j;
    v32 = a2 + 0x10 * *(unsigned __int16 *)(v30 + 2);
    *(_DWORD *)(v30 + 4) = *(_DWORD *)v30;
    *(_WORD *)(v30 + 2) = a4;
    if ( (v31 & 1) != 0 )
    {
      ++*(_WORD *)(v32 + 6);
    }
    else
    {
      v33 = (*(_WORD *)(a3 + 4) - *(_WORD *)v32)
          | (*(_WORD *)(v32 + 4) - *(_WORD *)a3)
          | (*(_WORD *)(v32 + 0xA) - *(_WORD *)(a3 + 8))
          | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v32 + 8));
      ++*(_WORD *)(v32 + 2);
      if ( v33 >= 0 )
      {
        if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) )
        {
          sub_8A6EE0(a8, 8);
          v21 = a6;
        }
        v34 = a8[1];
        v35 = (char *)*a8 + 8 * (_DWORD)v34;
        a8[1] = (char *)v34 + 1;
        *v35 = *(_DWORD *)(a3 + 0xC);
        v35[1] = *(_DWORD *)(v32 + 0xC);
      }
    }
  }
  *(_WORD *)(a3 + 6) += j;
  *(_WORD *)v30 = v21;
  v36 = (_WORD *)(*(_DWORD *)(a1 + 0x64) + 4 * *(unsigned __int16 *)(a3 + 2));
  v37 = (unsigned __int16)v36[2];
  result = v36 + 2;
  v39 = 0;
  if ( a5 <= v37 )
  {
    *(_WORD *)(a3 + 2) = *(_WORD *)(a3 + 2);
    *v36 = a5;
  }
  else
  {
    do
    {
      v40 = result;
      v41 = a2 + 0x10 * (unsigned __int16)result[1];
      ++v39;
      *((_DWORD *)result + 0xFFFFFFFF) = *(_DWORD *)result;
      v45 = v39;
      result[1] = a4;
      if ( (v37 & 1) != 0 )
      {
        v42 = (*(_WORD *)(v41 + 4) - *(_WORD *)a3)
            | (*(_WORD *)(a3 + 4) - *(_WORD *)v41)
            | (*(_WORD *)(v41 + 0xA) - *(_WORD *)(a3 + 8))
            | (*(_WORD *)(a3 + 0xA) - *(_WORD *)(v41 + 8));
        --*(_WORD *)(v41 + 6);
        if ( v42 >= 0 )
        {
          if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) )
          {
            sub_8A6EE0(a8, 8);
            v39 = v45;
          }
          v43 = a8[1];
          v44 = (char *)*a8 + 8 * (_DWORD)v43;
          a8[1] = (char *)v43 + 1;
          *v44 = *(_DWORD *)(a3 + 0xC);
          v44[1] = *(_DWORD *)(v41 + 0xC);
        }
      }
      else
      {
        --*(_WORD *)(v41 + 2);
      }
      v37 = (unsigned __int16)v40[2];
      result = v40 + 2;
    }
    while ( a5 > v37 );
    *(_WORD *)(a3 + 2) += v39;
    *v40 = a5;
  }
  return result;
}
