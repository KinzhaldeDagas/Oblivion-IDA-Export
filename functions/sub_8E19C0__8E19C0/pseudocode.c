int __thiscall sub_8E19C0(_DWORD *this, unsigned int *a2, const void **a3)
{
  unsigned int v4; // ebx
  unsigned __int16 *v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  _OWORD *v8; // edx
  char *v9; // edi
  _OWORD *v10; // edi
  __m64 *v11; // eax
  unsigned int v12; // ebx
  unsigned int *v13; // ecx
  unsigned int v14; // edx
  __int32 v15; // ebx
  const void *v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // ecx
  int v21; // ebx
  signed int v22; // eax
  _WORD *v23; // edi
  int v24; // ecx
  _DWORD *v25; // ecx
  bool v26; // zf
  _DWORD *v27; // edi
  _DWORD *v28; // ebx
  __m64 *v29; // eax
  int v30; // eax
  unsigned __int16 v31; // dx
  int v32; // edi
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  int v36; // esi
  int v37; // eax
  signed int v38; // ecx
  _WORD *v39; // edi
  int v40; // esi
  int result; // eax
  int v42; // eax
  unsigned int v43; // [esp+10h] [ebp-2Ch]
  unsigned int v44; // [esp+14h] [ebp-28h]
  __m64 **v45; // [esp+18h] [ebp-24h]
  int v46; // [esp+1Ch] [ebp-20h]
  __m64 *v47; // [esp+20h] [ebp-1Ch]
  _OWORD *v48; // [esp+24h] [ebp-18h]
  __m64 *v49; // [esp+28h] [ebp-14h]
  unsigned int *v50; // [esp+2Ch] [ebp-10h]
  unsigned int v51; // [esp+34h] [ebp-8h]
  int v52; // [esp+38h] [ebp-4h]
  __m64 *v53; // [esp+40h] [ebp+4h]
  int v54; // [esp+40h] [ebp+4h]

  v4 = *(this + 0x11); /*0x8e19d5*/
  v44 = *a2; /*0x8e19de*/
  v45 = (__m64 **)(this + 0x10); /*0x8e19e5*/
  v5 = (unsigned __int16 *)(*(this + 0x10) + 0x10 * *a2); /*0x8e19e9*/
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e19f1*/
  v7 = *(_DWORD **)(v6 + 0x19C); /*0x8e19f4*/
  v8 = (_OWORD *)v7[8]; /*0x8e19fa*/
  v52 = v6; /*0x8e19fd*/
  v9 = (char *)v8 + ((4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0); /*0x8e1a11*/
  v46 = *(this + 0x11); /*0x8e1a1b*/
  if ( (unsigned int)v9 > v7[0xB] ) /*0x8e1a1f*/
  {
    v48 = (_OWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0); /*0x8e1a30*/
  }
  else
  {
    v7[8] = v9; /*0x8e1a21*/
    v48 = v8; /*0x8e1a24*/
  }
  v10 = v48; /*0x8e1a38*/
  sub_8E0E90(this, v4, *(unsigned __int16 *)(*(this + 0x13) + 4 * v5[4]), (int)v5, v44, v48); /*0x8e1a4e*/
  v11 = *v45; /*0x8e1a57*/
  v12 = (unsigned int)v48 + 4 * ((int)*(this + 0x11) >> 5) + 4; /*0x8e1a5f*/
  v13 = (unsigned int *)v48; /*0x8e1a65*/
  v50 = (unsigned int *)v48; /*0x8e1a67*/
  v49 = *v45; /*0x8e1a6b*/
  v51 = v12; /*0x8e1a6f*/
  if ( (unsigned int)v48 < v12 ) /*0x8e1a73*/
  {
    do /*0x8e1b8a*/
    {
      v14 = *v13; /*0x8e1a80*/
      v47 = v11; /*0x8e1a84*/
      v43 = *v13; /*0x8e1a88*/
      if ( *v13 ) /*0x8e1a80*/
      {
        do /*0x8e1b66*/
        {
          if ( (_BYTE)v14 ) /*0x8e1a94*/
          {
            if ( (v14 & 1) != 0 /*0x8e1ac2*/
              && (((v11->m64_i32[1] - *(_DWORD *)v5) | (*((_DWORD *)v5 + 1) - v11->m64_i32[0])) & 0x80008000) == 0 )
            {
              v15 = v11[1].m64_i32[1]; /*0x8e1ac8*/
              if ( (v15 & 1) != 0 ) /*0x8e1ace*/
              {
                v18 = *(this + 0x1E); /*0x8e1b08*/
                v19 = v15 & 0xFFFFFFFE; /*0x8e1b0b*/
                v20 = *(_DWORD *)(v19 + v18 + 8); /*0x8e1b0e*/
                v21 = v18 + v19; /*0x8e1b12*/
                v22 = 0; /*0x8e1b14*/
                if ( v20 <= 0 ) /*0x8e1b18*/
                {
LABEL_19:
                  v22 = 0xFFFFFFFF; /*0x8e1b3a*/
                }
                else
                {
                  v23 = *(_WORD **)(v21 + 4); /*0x8e1b1a*/
                  while ( *v23 != (_WORD)v44 ) /*0x8e1b28*/
                  {
                    ++v22; /*0x8e1b2e*/
                    ++v23; /*0x8e1b2f*/
                    if ( v22 >= v20 ) /*0x8e1b34*/
                    {
                      v14 = v43; /*0x8e1b36*/
                      goto LABEL_19; /*0x8e1b36*/
                    }
                  }
                  v14 = v43; /*0x8e1c8a*/
                }
                v24 = *(_DWORD *)(v21 + 8) - 1; /*0x8e1b40*/
                *(_DWORD *)(v21 + 8) = v24; /*0x8e1b41*/
                *(_WORD *)(*(_DWORD *)(v21 + 4) + 2 * v22) = *(_WORD *)(*(_DWORD *)(v21 + 4) + 2 * v24); /*0x8e1b4b*/
              }
              else
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8e1ae2*/
                  sub_8A6EE0(a3, 8); /*0x8e1ae7*/
                v16 = a3[1]; /*0x8e1aef*/
                v17 = *a3; /*0x8e1af2*/
                v17[2 * (_DWORD)v16] = a2; /*0x8e1af8*/
                v14 = v43; /*0x8e1afb*/
                v17[2 * (_DWORD)v16 + 1] = v15; /*0x8e1aff*/
                a3[1] = (char *)a3[1] + 1; /*0x8e1b03*/
              }
            }
            v10 = v48; /*0x8e1b53*/
            v11 = v47 + 2; /*0x8e1b57*/
            v14 >>= 1; /*0x8e1b5a*/
          }
          else
          {
            v11 += 0x10; /*0x8e1a96*/
            v14 >>= 8; /*0x8e1a9b*/
          }
          v47 = v11; /*0x8e1b5e*/
          v43 = v14; /*0x8e1b62*/
        }
        while ( v14 ); /*0x8e1b66*/
        v12 = v51; /*0x8e1b6c*/
        v13 = v50; /*0x8e1b70*/
      }
      ++v13; /*0x8e1b78*/
      v11 = v49 + 0x40; /*0x8e1b7b*/
      v49 += 0x40; /*0x8e1b82*/
      v50 = v13; /*0x8e1b86*/
    }
    while ( (unsigned int)v13 < v12 ); /*0x8e1b8a*/
  }
  v25 = *(_DWORD **)(v52 + 0x19C); /*0x8e1b94*/
  v26 = v10 == (_OWORD *)v25[0xA]; /*0x8e1b9a*/
  v25[8] = v10; /*0x8e1b9d*/
  if ( v26 ) /*0x8e1ba0*/
    (*(void (__thiscall **)(_DWORD *, _OWORD *))(*v25 + 0x10))(v25, v10); /*0x8e1ba5*/
  v53 = *v45; /*0x8e1bbb*/
  sub_8E0E30(this + 0x13, v5[4], v5[5]); /*0x8e1bbf*/
  v27 = this + 0x16; /*0x8e1bcc*/
  sub_8E0E30(this + 0x16, *v5, v5[2]); /*0x8e1bd2*/
  v28 = this + 0x19; /*0x8e1be0*/
  sub_8E0E30(this + 0x19, v5[1], v5[3]); /*0x8e1be6*/
  sub_8E0B30(v53, v46, (__int16 *)v5); /*0x8e1bf8*/
  if ( v44 < v46 - 1 ) /*0x8e1c0a*/
  {
    v29 = &(*v45)[2 * v46 - 2]; /*0x8e1c19*/
    *(_DWORD *)v5 = v29->m64_i32[0]; /*0x8e1c21*/
    *((_DWORD *)v5 + 1) = v29->m64_i32[1]; /*0x8e1c26*/
    *((_DWORD *)v5 + 2) = v29[1].m64_i32[0]; /*0x8e1c2c*/
    *((_DWORD *)v5 + 3) = v29[1].m64_i32[1]; /*0x8e1c32*/
    *(_WORD *)(*(this + 0x13) + 4 * v5[4] + 2) = v44; /*0x8e1c40*/
    *(_WORD *)(*(this + 0x13) + 4 * v5[5] + 2) = v44; /*0x8e1c4c*/
    v30 = *((_DWORD *)v5 + 3); /*0x8e1c51*/
    if ( (v30 & 1) != 0 ) /*0x8e1c56*/
    {
      *(_WORD *)((v30 & 0xFFFFFFFE) + *(this + 0x1E)) = v44; /*0x8e1c99*/
    }
    else
    {
      *(_WORD *)(*v27 + 4 * *v5 + 2) = v44; /*0x8e1c5d*/
      *(_WORD *)(*v27 + 4 * v5[2] + 2) = v44; /*0x8e1c68*/
      *(_WORD *)(*v28 + 4 * v5[1] + 2) = v44; /*0x8e1c73*/
      *(_WORD *)(*v28 + 4 * v5[3] + 2) = v44; /*0x8e1c7e*/
      **((_DWORD **)v5 + 3) = v44; /*0x8e1c86*/
    }
    if ( *(this + 0x1C) ) /*0x8e1c9d*/
    {
      if ( (v5[6] & 1) == 0 ) /*0x8e1cac*/
      {
        v31 = v5[4]; /*0x8e1cb2*/
        v32 = *(this + 0x13); /*0x8e1cb6*/
        v33 = *(unsigned __int16 *)(v32 + 4 * v31) >> (0x10 - *((_BYTE *)this + 0x74)); /*0x8e1ccd*/
        if ( v33 ) /*0x8e1cd1*/
        {
          if ( (unsigned int)(*v45)[2 * *(unsigned __int16 *)(0x10 * v33 + *(this + 0x1E) - 0x10) + 1].m64_i16[1] > v31 ) /*0x8e1cf3*/
            --v33; /*0x8e1cf5*/
        }
        if ( v33 <= (*(unsigned __int16 *)(v32 + 4 * v5[5]) >> (0x10 - *((_BYTE *)this + 0x74))) - 1 ) /*0x8e1d05*/
        {
          v34 = 0x10 * v33; /*0x8e1d0b*/
          v54 = (*(unsigned __int16 *)(v32 + 4 * v5[5]) >> (0x10 - *((_BYTE *)this + 0x74))) - v33; /*0x8e1d0f*/
          do /*0x8e1d52*/
          {
            v35 = *(this + 0x1E); /*0x8e1d13*/
            v36 = *(_DWORD *)(v35 + v34 + 8); /*0x8e1d16*/
            v37 = v34 + v35; /*0x8e1d1a*/
            v38 = 0; /*0x8e1d1c*/
            if ( v36 <= 0 ) /*0x8e1d20*/
            {
LABEL_43:
              v38 = 0xFFFFFFFF; /*0x8e1d37*/
            }
            else
            {
              v39 = *(_WORD **)(v37 + 4); /*0x8e1d22*/
              while ( *v39 != (_WORD)v46 - 1 ) /*0x8e1d2d*/
              {
                ++v38; /*0x8e1d2f*/
                ++v39; /*0x8e1d30*/
                if ( v38 >= v36 ) /*0x8e1d35*/
                  goto LABEL_43; /*0x8e1d35*/
              }
            }
            *(_WORD *)(*(_DWORD *)(v37 + 4) + 2 * v38) = v44; /*0x8e1d42*/
            v34 += 0x10; /*0x8e1d4a*/
            --v54; /*0x8e1d4e*/
          }
          while ( v54 ); /*0x8e1d52*/
        }
      }
    }
  }
  v40 = v46 - 1; /*0x8e1d5f*/
  result = (unsigned int)v45[2] & 0x3FFFFFFF; /*0x8e1d60*/
  if ( result < v46 - 1 ) /*0x8e1d67*/
  {
    v42 = 2 * result; /*0x8e1d69*/
    if ( v40 >= v42 ) /*0x8e1d6d*/
      v42 = v46 - 1; /*0x8e1d6f*/
    result = sub_8A6E40((const void **)v45, v42, 0x10); /*0x8e1d75*/
  }
  v45[1] = (__m64 *)v40; /*0x8e1d7d*/
  return result; /*0x8e1d80*/
}
