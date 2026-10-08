int __thiscall sub_8E4BC0(_DWORD *this, int a2, const void **a3, char a4)
{
  _DWORD *v4; // edx
  int v5; // ecx
  int v6; // eax
  unsigned int v7; // esi
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  char **v11; // eax
  int v12; // esi
  signed int v13; // ecx
  char *v14; // edx
  unsigned int v15; // edx
  int v16; // ebp
  int v17; // eax
  int v18; // esi
  int v19; // edx
  int v20; // esi
  int v21; // ecx
  const void *v22; // eax
  _DWORD *v23; // ecx
  int v24; // esi
  _DWORD *v25; // eax
  const void **v26; // edi
  int v27; // edi
  signed int v28; // ecx
  _WORD *v29; // edx
  unsigned int v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // esi
  int v34; // edx
  _DWORD *v35; // esi
  _DWORD *v36; // ecx
  const void *v37; // eax
  _DWORD *v38; // ecx
  int v39; // esi
  _DWORD *v40; // eax
  const void **v41; // edi
  int v42; // edi
  signed int v43; // ecx
  _WORD *v44; // edx
  int v45; // edx
  int v46; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int result; // eax
  int v49; // [esp+8h] [ebp-430h]
  int v50; // [esp+8h] [ebp-430h]
  _DWORD *v51; // [esp+Ch] [ebp-42Ch]
  unsigned int v52; // [esp+10h] [ebp-428h]
  __int16 v53; // [esp+14h] [ebp-424h]
  unsigned int v54; // [esp+18h] [ebp-420h]
  int v55; // [esp+1Ch] [ebp-41Ch]
  char *v56; // [esp+20h] [ebp-418h] BYREF
  int v57; // [esp+24h] [ebp-414h]
  int v58; // [esp+28h] [ebp-410h]
  char v59; // [esp+2Ch] [ebp-40Ch] BYREF
  char *v60; // [esp+22Ch] [ebp-20Ch] BYREF
  int v61; // [esp+230h] [ebp-208h]
  int v62; // [esp+234h] [ebp-204h]
  char v63; // [esp+238h] [ebp-200h] BYREF

  v4 = this; /*0x8e4bc6*/
  v60 = &v63; /*0x8e4bcf*/
  v62 = 0x80000100; /*0x8e4bde*/
  v58 = 0x80000100; /*0x8e4be9*/
  v5 = *(this + 0x14); /*0x8e4bed*/
  v61 = 0; /*0x8e4bf0*/
  v57 = 0; /*0x8e4bf7*/
  v6 = v4[0x13]; /*0x8e4bfb*/
  v56 = &v59; /*0x8e4bfe*/
  v7 = v6 + 4; /*0x8e4c06*/
  v51 = v4; /*0x8e4c0c*/
  v54 = v6 + 4 * v5 - 4; /*0x8e4c10*/
  v52 = v6 + 4; /*0x8e4c14*/
  if ( v6 + 4 >= v54 ) /*0x8e4c18*/
    goto LABEL_63; /*0x8e4c18*/
  while ( 2 ) /*0x8e4c30*/
  {
    v8 = *(unsigned __int16 *)(v7 + 2); /*0x8e4c30*/
    v53 = *(_WORD *)(v7 + 2); /*0x8e4c4c*/
    v9 = *(_DWORD *)(a2 + 4 * (v8 >> 5)) & (1 << (v53 & 0x1F)); /*0x8e4c50*/
    v55 = v9; /*0x8e4c57*/
    if ( (*(_BYTE *)v7 & 1) != 0 ) /*0x8e4c5b*/
    {
      v10 = v9 == 0; /*0x8e4c5d*/
      v11 = &v60; /*0x8e4c5f*/
      if ( v10 ) /*0x8e4c66*/
        v11 = &v56; /*0x8e4c68*/
      v12 = (int)v11[1]; /*0x8e4c6c*/
      v13 = 0; /*0x8e4c6f*/
      if ( v12 <= 0 ) /*0x8e4c73*/
      {
LABEL_11:
        v15 = 0xFFFFFFFF; /*0x8e4c87*/
      }
      else
      {
        v14 = *v11; /*0x8e4c75*/
        while ( *(_WORD *)v14 != (_WORD)v8 ) /*0x8e4c7a*/
        {
          ++v13; /*0x8e4c7f*/
          v14 += 2; /*0x8e4c80*/
          if ( v13 >= (int)v11[1] ) /*0x8e4c85*/
            goto LABEL_11; /*0x8e4c85*/
        }
        v15 = v13; /*0x8e4c9f*/
      }
      v11[1] = (char *)(v12 - 1); /*0x8e4c8d*/
      *(_WORD *)&(*v11)[2 * v15] = *(_WORD *)&(*v11)[2 * v12 - 2]; /*0x8e4c96*/
      goto LABEL_62; /*0x8e4c9a*/
    }
    v16 = v4[0x10] + 0x10 * v8; /*0x8e4cb2*/
    v49 = 0; /*0x8e4cb6*/
    if ( v61 > 0 ) /*0x8e4cbe*/
    {
      while ( 1 ) /*0x8e4cd4*/
      {
        v17 = v51[0x10]; /*0x8e4cd4*/
        v18 = 0x10 * *(unsigned __int16 *)&v60[2 * v49]; /*0x8e4ce9*/
        v19 = *(_DWORD *)(v18 + v17 + 4); /*0x8e4cec*/
        v20 = v17 + v18; /*0x8e4cf0*/
        v21 = v16; /*0x8e4cf9*/
        if ( (((*(_DWORD *)(v16 + 4) - *(_DWORD *)v20) | (v19 - *(_DWORD *)v16)) & 0x80008000) == 0 ) /*0x8e4d03*/
        {
          if ( (*(_BYTE *)(v16 + 0xC) & 1) != 0 ) /*0x8e4d0d*/
            goto LABEL_22; /*0x8e4d0d*/
          if ( (*(_BYTE *)(v20 + 0xC) & 1) != 0 ) /*0x8e4d13*/
          {
            v21 = v20; /*0x8e4d4b*/
            v20 = v16; /*0x8e4d4d*/
LABEL_22:
            v24 = (v20 - v17) >> 4; /*0x8e4d4f*/
            v25 = (_DWORD *)(v51[0x1E] + (*(_DWORD *)(v21 + 0xC) & 0xFFFFFFFE)); /*0x8e4d68*/
            if ( a4 ) /*0x8e4d6c*/
            {
              v26 = (const void **)(v25 + 1); /*0x8e4d71*/
              if ( v25[2] == (v25[3] & 0x3FFFFFFF) ) /*0x8e4d7f*/
                sub_8A6EE0(v26, 2); /*0x8e4d84*/
              *((_WORD *)*v26 + (_DWORD)v26[1]) = v24; /*0x8e4d91*/
              v26[1] = (char *)v26[1] + 1; /*0x8e4d95*/
            }
            else
            {
              v27 = v25[2]; /*0x8e4d9a*/
              v28 = 0; /*0x8e4d9d*/
              if ( v27 <= 0 ) /*0x8e4da1*/
              {
LABEL_30:
                v30 = 0xFFFFFFFF; /*0x8e4db7*/
              }
              else
              {
                v29 = (_WORD *)v25[1]; /*0x8e4da3*/
                while ( *v29 != (_WORD)v24 ) /*0x8e4da9*/
                {
                  ++v28; /*0x8e4daf*/
                  ++v29; /*0x8e4db0*/
                  if ( v28 >= v27 ) /*0x8e4db5*/
                    goto LABEL_30; /*0x8e4db5*/
                }
                v30 = v28; /*0x8e4e88*/
              }
              v31 = v25[2] - 1; /*0x8e4dbd*/
              v25[2] = v31; /*0x8e4dbe*/
              *(_WORD *)(v25[1] + 2 * v30) = *(_WORD *)(v25[1] + 2 * v31); /*0x8e4dc8*/
            }
            goto LABEL_32; /*0x8e4d98*/
          }
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e4d22*/
            sub_8A6EE0(a3, 8); /*0x8e4d27*/
          v22 = a3[1]; /*0x8e4d2f*/
          v23 = (char *)*a3 + 8 * (_DWORD)v22; /*0x8e4d34*/
          a3[1] = (char *)v22 + 1; /*0x8e4d38*/
          *v23 = *(_DWORD *)(v20 + 0xC); /*0x8e4d3e*/
          v23[1] = *(_DWORD *)(v16 + 0xC); /*0x8e4d43*/
        }
LABEL_32:
        if ( ++v49 >= v61 ) /*0x8e4dde*/
        {
          v9 = v55; /*0x8e4de4*/
          LOWORD(v8) = v53; /*0x8e4de8*/
          break; /*0x8e4de8*/
        }
      }
    }
    if ( !v9 ) /*0x8e4dee*/
    {
      if ( v57 == (v58 & 0x3FFFFFFF) ) /*0x8e4f7e*/
        sub_8A6EE0((const void **)&v56, 2); /*0x8e4f87*/
      *(_WORD *)&v56[2 * v57++] = v8; /*0x8e4f97*/
      goto LABEL_62; /*0x8e4f9b*/
    }
    v50 = 0; /*0x8e4dfa*/
    if ( v57 <= 0 ) /*0x8e4e02*/
      goto LABEL_56; /*0x8e4e02*/
    do /*0x8e4f21*/
    {
      v32 = v51[0x10]; /*0x8e4e14*/
      v33 = 0x10 * *(unsigned __int16 *)&v56[2 * v50]; /*0x8e4e26*/
      v34 = *(_DWORD *)(v33 + v32 + 4); /*0x8e4e29*/
      v35 = (_DWORD *)(v32 + v33); /*0x8e4e2d*/
      v36 = (_DWORD *)v16; /*0x8e4e36*/
      if ( (((*(_DWORD *)(v16 + 4) - *v35) | (v34 - *(_DWORD *)v16)) & 0x80008000) != 0 ) /*0x8e4e40*/
        goto LABEL_54; /*0x8e4e40*/
      if ( (*(_BYTE *)(v16 + 0xC) & 1) == 0 ) /*0x8e4e4a*/
      {
        if ( (v35[3] & 1) == 0 ) /*0x8e4e50*/
        {
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e4e5f*/
            sub_8A6EE0(a3, 8); /*0x8e4e64*/
          v37 = a3[1]; /*0x8e4e6c*/
          v38 = (char *)*a3 + 8 * (_DWORD)v37; /*0x8e4e71*/
          a3[1] = (char *)v37 + 1; /*0x8e4e75*/
          *v38 = v35[3]; /*0x8e4e7b*/
          v38[1] = *(_DWORD *)(v16 + 0xC); /*0x8e4e80*/
          goto LABEL_54; /*0x8e4e83*/
        }
        v36 = v35; /*0x8e4e8f*/
        v35 = (_DWORD *)v16; /*0x8e4e91*/
      }
      v39 = ((int)v35 - v32) >> 4; /*0x8e4ea9*/
      v40 = (_DWORD *)(v51[0x1E] + (v36[3] & 0xFFFFFFFE)); /*0x8e4eac*/
      if ( a4 ) /*0x8e4eb0*/
      {
        v41 = (const void **)(v40 + 1); /*0x8e4eb5*/
        if ( v40[2] == (v40[3] & 0x3FFFFFFF) ) /*0x8e4ec3*/
          sub_8A6EE0(v41, 2); /*0x8e4ec8*/
        *((_WORD *)*v41 + (_DWORD)v41[1]) = v39; /*0x8e4ed5*/
        v41[1] = (char *)v41[1] + 1; /*0x8e4ed9*/
      }
      else
      {
        v42 = v40[2]; /*0x8e4ede*/
        v43 = 0; /*0x8e4ee1*/
        if ( v42 <= 0 ) /*0x8e4ee5*/
        {
LABEL_52:
          v43 = 0xFFFFFFFF; /*0x8e4efd*/
        }
        else
        {
          v44 = (_WORD *)v40[1]; /*0x8e4ee7*/
          while ( *v44 != (_WORD)v39 ) /*0x8e4ef3*/
          {
            ++v43; /*0x8e4ef5*/
            ++v44; /*0x8e4ef6*/
            if ( v43 >= v42 ) /*0x8e4efb*/
              goto LABEL_52; /*0x8e4efb*/
          }
        }
        v45 = v40[2] - 1; /*0x8e4f03*/
        v40[2] = v45; /*0x8e4f04*/
        *(_WORD *)(v40[1] + 2 * v43) = *(_WORD *)(v40[1] + 2 * v45); /*0x8e4f0e*/
      }
LABEL_54:
      ++v50; /*0x8e4f12*/
    }
    while ( v50 < v57 ); /*0x8e4f21*/
    LOWORD(v8) = v53; /*0x8e4f27*/
LABEL_56:
    if ( v61 == (v62 & 0x3FFFFFFF) ) /*0x8e4f40*/
      sub_8A6EE0((const void **)&v60, 2); /*0x8e4f4c*/
    *(_WORD *)&v60[2 * v61++] = v8; /*0x8e4f62*/
LABEL_62:
    v7 = v52 + 4; /*0x8e4f9f*/
    v52 += 4; /*0x8e4fac*/
    if ( v52 < v54 ) /*0x8e4fb0*/
    {
      v4 = v51; /*0x8e4c29*/
      continue; /*0x8e4c29*/
    }
    break;
  }
LABEL_63:
  v46 = MEMORY[0xBA9DE4]; /*0x8e4fb8*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e4fc4*/
  if ( v58 >= 0 ) /*0x8e4fcb*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v46] + 0x19C), v56, 2 * (v58 & 0x3FFFFFFF), 0x14); /*0x8e4fe5*/
  result = v62; /*0x8e4fea*/
  if ( v62 >= 0 ) /*0x8e4ff3*/
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v46] + 0x19C), v60, 2 * (v62 & 0x3FFFFFFF), 0x14); /*0x8e5010*/
  return result; /*0x8e5015*/
}
