_WORD *__cdecl sub_8E3E90(
        int a1,
        int a2,
        unsigned __int16 *a3,
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

  v8 = *(_DWORD *)(a1 + 0x58); /*0x8e3e94*/
  v10 = *a3; /*0x8e3e9e*/
  v11 = *(unsigned __int16 *)(v8 + 4 * v10 - 4); /*0x8e3ea1*/
  for ( i = (_WORD *)(v8 + 4 * v10); a5 < v11; LOWORD(v10) = v10 - 1 ) /*0x8e3eae*/
  {
    v13 = i[0xFFFFFFFF]; /*0x8e3eb4*/
    v14 = a2 + 0x10 * v13; /*0x8e3ec1*/
    *i = v11; /*0x8e3ec5*/
    i[1] = v13; /*0x8e3ec8*/
    if ( (v11 & 1) != 0 ) /*0x8e3ecc*/
    {
      v15 = *(_WORD *)(v14 + 0xA) - a3[4]; /*0x8e3ee8*/
      v16 = (a3[3] - *(_WORD *)(v14 + 2)) | (a3[5] - *(_WORD *)(v14 + 8)); /*0x8e3eec*/
      v17 = *(_WORD *)(v14 + 6) - a3[1]; /*0x8e3ef4*/
      *(_WORD *)(v14 + 4) = v10; /*0x8e3efa*/
      if ( (char)((unsigned __int16)(v17 | v15 | v16) >> 8) >= 0 ) /*0x8e3f02*/
      {
        v18 = a7; /*0x8e3f04*/
        if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) ) /*0x8e3f16*/
        {
          sub_8A6EE0(a7, 8); /*0x8e3f1b*/
          v18 = a7; /*0x8e3f20*/
        }
        v19 = v18[1]; /*0x8e3f27*/
        v20 = (char *)*v18 + 8 * (_DWORD)v19; /*0x8e3f2c*/
        v18[1] = (char *)v19 + 1; /*0x8e3f30*/
        *v20 = *((_DWORD *)a3 + 3); /*0x8e3f36*/
        v20[1] = *(_DWORD *)(v14 + 0xC); /*0x8e3f3b*/
      }
    }
    else
    {
      *(_WORD *)v14 = v10; /*0x8e3f40*/
    }
    i += 0xFFFFFFFE; /*0x8e3f4c*/
    i[1] = a4; /*0x8e3f4f*/
    v11 = (unsigned __int16)i[0xFFFFFFFE]; /*0x8e3f53*/
  }
  *a3 = v10; /*0x8e3f69*/
  *i = a5; /*0x8e3f6c*/
  v21 = a6; /*0x8e3f76*/
  v22 = *(_DWORD *)(a1 + 0x58) + 4 * a3[2]; /*0x8e3f7a*/
  v23 = *(unsigned __int16 *)(v22 + 4); /*0x8e3f7d*/
  v24 = v22 + 4; /*0x8e3f81*/
  v46 = 0; /*0x8e3f86*/
  if ( a6 > v23 ) /*0x8e3f8e*/
  {
    do /*0x8e403a*/
    {
      ++v46; /*0x8e3f9f*/
      v25 = 0x10 * *(unsigned __int16 *)(v24 + 2); /*0x8e3fa7*/
      *(_DWORD *)(v24 - 4) = *(_DWORD *)v24; /*0x8e3faa*/
      v26 = a2 + v25; /*0x8e3fb2*/
      *(_WORD *)(v24 + 2) = a4; /*0x8e3fb6*/
      if ( (v23 & 1) != 0 ) /*0x8e3fba*/
      {
        --*(_WORD *)(v26 + 4); /*0x8e402d*/
      }
      else
      {
        v27 = (*(_WORD *)(v26 + 6) - a3[1]) /*0x8e3fe8*/
            | (*(_WORD *)(v26 + 0xA) - a3[4])
            | (a3[3] - *(_WORD *)(v26 + 2))
            | (a3[5] - *(_WORD *)(v26 + 8));
        --*(_WORD *)v26; /*0x8e3fea*/
        if ( v27 >= 0 ) /*0x8e3fef*/
        {
          if ( a7[1] == (const void *)((unsigned int)a7[2] & 0x3FFFFFFF) ) /*0x8e4002*/
          {
            sub_8A6EE0(a7, 8); /*0x8e4007*/
            v21 = a6; /*0x8e400c*/
          }
          v28 = a7[1]; /*0x8e4013*/
          v29 = (char *)*a7 + 8 * (_DWORD)v28; /*0x8e4019*/
          a7[1] = (char *)v28 + 1; /*0x8e401d*/
          *v29 = *((_DWORD *)a3 + 3); /*0x8e4023*/
          v29[1] = *(_DWORD *)(v26 + 0xC); /*0x8e4028*/
        }
      }
      v23 = *(unsigned __int16 *)(v24 + 4); /*0x8e4031*/
      v24 += 4; /*0x8e4035*/
    }
    while ( v21 > v23 ); /*0x8e403a*/
  }
  a3[2] += v46; /*0x8e4045*/
  v30 = *(_DWORD *)(a1 + 0x58) + 4 * a3[2]; /*0x8e4058*/
  v31 = *(unsigned __int16 *)(v30 - 4); /*0x8e405b*/
  for ( j = 0; v21 < v31; v31 = *(unsigned __int16 *)(v30 - 4) ) /*0x8e4069*/
  {
    v30 -= 4; /*0x8e4078*/
    --j; /*0x8e407c*/
    v32 = a2 + 0x10 * *(unsigned __int16 *)(v30 + 2); /*0x8e4087*/
    *(_DWORD *)(v30 + 4) = *(_DWORD *)v30; /*0x8e408d*/
    *(_WORD *)(v30 + 2) = a4; /*0x8e4095*/
    if ( (v31 & 1) != 0 ) /*0x8e4099*/
    {
      ++*(_WORD *)(v32 + 4); /*0x8e4108*/
    }
    else
    {
      v33 = (*(_WORD *)(v32 + 6) - a3[1]) /*0x8e40c7*/
          | (*(_WORD *)(v32 + 0xA) - a3[4])
          | (a3[3] - *(_WORD *)(v32 + 2))
          | (a3[5] - *(_WORD *)(v32 + 8));
      ++*(_WORD *)v32; /*0x8e40c9*/
      if ( v33 >= 0 ) /*0x8e40ce*/
      {
        if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) ) /*0x8e40dd*/
        {
          sub_8A6EE0(a8, 8); /*0x8e40e2*/
          v21 = a6; /*0x8e40e7*/
        }
        v34 = a8[1]; /*0x8e40ee*/
        v35 = (char *)*a8 + 8 * (_DWORD)v34; /*0x8e40f4*/
        a8[1] = (char *)v34 + 1; /*0x8e40f8*/
        *v35 = *((_DWORD *)a3 + 3); /*0x8e40fe*/
        v35[1] = *(_DWORD *)(v32 + 0xC); /*0x8e4103*/
      }
    }
  }
  a3[2] += j; /*0x8e411d*/
  *(_WORD *)v30 = v21; /*0x8e4125*/
  v36 = (_WORD *)(*(_DWORD *)(a1 + 0x58) + 4 * *a3); /*0x8e4132*/
  v37 = (unsigned __int16)v36[2]; /*0x8e4135*/
  result = v36 + 2; /*0x8e4139*/
  v39 = 0; /*0x8e413c*/
  if ( a5 <= v37 ) /*0x8e4140*/
  {
    *a3 = *a3; /*0x8e41ff*/
    *v36 = a5; /*0x8e4202*/
  }
  else
  {
    do /*0x8e41eb*/
    {
      v40 = result; /*0x8e4146*/
      v41 = a2 + 0x10 * (unsigned __int16)result[1]; /*0x8e4153*/
      ++v39; /*0x8e4157*/
      *((_DWORD *)result + 0xFFFFFFFF) = *(_DWORD *)result; /*0x8e415b*/
      v45 = v39; /*0x8e4163*/
      result[1] = a4; /*0x8e4167*/
      if ( (v37 & 1) != 0 ) /*0x8e416b*/
      {
        v42 = (*(_WORD *)(v41 + 6) - a3[1]) /*0x8e4199*/
            | (*(_WORD *)(v41 + 0xA) - a3[4])
            | (a3[3] - *(_WORD *)(v41 + 2))
            | (a3[5] - *(_WORD *)(v41 + 8));
        --*(_WORD *)(v41 + 4); /*0x8e419b*/
        if ( v42 >= 0 ) /*0x8e41a1*/
        {
          if ( a8[1] == (const void *)((unsigned int)a8[2] & 0x3FFFFFFF) ) /*0x8e41b0*/
          {
            sub_8A6EE0(a8, 8); /*0x8e41b5*/
            v39 = v45; /*0x8e41ba*/
          }
          v43 = a8[1]; /*0x8e41c1*/
          v44 = (char *)*a8 + 8 * (_DWORD)v43; /*0x8e41c7*/
          a8[1] = (char *)v43 + 1; /*0x8e41cb*/
          *v44 = *((_DWORD *)a3 + 3); /*0x8e41d1*/
          v44[1] = *(_DWORD *)(v41 + 0xC); /*0x8e41d6*/
        }
      }
      else
      {
        --*(_WORD *)v41; /*0x8e41db*/
      }
      v37 = (unsigned __int16)v40[2]; /*0x8e41de*/
      result = v40 + 2; /*0x8e41e8*/
    }
    while ( a5 > v37 ); /*0x8e41eb*/
    *a3 += v39; /*0x8e41f1*/
    *v40 = a5; /*0x8e41fa*/
  }
  return result; /*0x8e41f7*/
}
