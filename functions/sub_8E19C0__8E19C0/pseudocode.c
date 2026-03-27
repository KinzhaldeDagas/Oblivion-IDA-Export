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
  int v16; // eax
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

  v4 = *(this + 0x11);
  v44 = *a2;
  v45 = (__m64 **)(this + 0x10);
  v5 = (unsigned __int16 *)(*(this + 0x10) + 0x10 * *a2);
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v7 = *(_DWORD **)(v6 + 0x19C);
  v8 = (_OWORD *)v7[8];
  v52 = v6;
  v9 = (char *)v8 + ((4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0);
  v46 = *(this + 0x11);
  if ( (unsigned int)v9 > v7[0xB] )
  {
    v48 = (_OWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (4 * (v4 >> 5) + 0x30) & 0xFFFFFFF0);
  }
  else
  {
    v7[8] = v9;
    v48 = v8;
  }
  v10 = v48;
  sub_8E0E90(this, v4, *(unsigned __int16 *)(*(this + 0x13) + 4 * v5[4]), (int)v5, v44, v48);
  v11 = *v45;
  v12 = (unsigned int)v48 + 4 * ((int)*(this + 0x11) >> 5) + 4;
  v13 = (unsigned int *)v48;
  v50 = (unsigned int *)v48;
  v49 = *v45;
  v51 = v12;
  if ( (unsigned int)v48 < v12 )
  {
    do
    {
      v14 = *v13;
      v47 = v11;
      v43 = *v13;
      if ( *v13 )
      {
        do
        {
          if ( (_BYTE)v14 )
          {
            if ( (v14 & 1) != 0
              && (((v11->m64_i32[1] - *(_DWORD *)v5) | (*((_DWORD *)v5 + 1) - v11->m64_i32[0])) & 0x80008000) == 0 )
            {
              v15 = v11[1].m64_i32[1];
              if ( (v15 & 1) != 0 )
              {
                v18 = *(this + 0x1E);
                v19 = v15 & 0xFFFFFFFE;
                v20 = *(_DWORD *)(v19 + v18 + 8);
                v21 = v18 + v19;
                v22 = 0;
                if ( v20 <= 0 )
                {
LABEL_19:
                  v22 = 0xFFFFFFFF;
                }
                else
                {
                  v23 = *(_WORD **)(v21 + 4);
                  while ( *v23 != (_WORD)v44 )
                  {
                    ++v22;
                    ++v23;
                    if ( v22 >= v20 )
                    {
                      v14 = v43;
                      goto LABEL_19;
                    }
                  }
                  v14 = v43;
                }
                v24 = *(_DWORD *)(v21 + 8) - 1;
                *(_DWORD *)(v21 + 8) = v24;
                *(_WORD *)(*(_DWORD *)(v21 + 4) + 2 * v22) = *(_WORD *)(*(_DWORD *)(v21 + 4) + 2 * v24);
              }
              else
              {
                if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
                  sub_8A6EE0(a3, 8);
                v16 = (int)a3[1];
                v17 = *a3;
                v17[2 * v16] = a2;
                v14 = v43;
                v17[2 * v16 + 1] = v15;
                a3[1] = (char *)a3[1] + 1;
              }
            }
            v10 = v48;
            v11 = v47 + 2;
            v14 >>= 1;
          }
          else
          {
            v11 += 0x10;
            v14 >>= 8;
          }
          v47 = v11;
          v43 = v14;
        }
        while ( v14 );
        v12 = v51;
        v13 = v50;
      }
      ++v13;
      v11 = v49 + 0x40;
      v49 += 0x40;
      v50 = v13;
    }
    while ( (unsigned int)v13 < v12 );
  }
  v25 = *(_DWORD **)(v52 + 0x19C);
  v26 = v10 == (_OWORD *)v25[0xA];
  v25[8] = v10;
  if ( v26 )
    (*(void (__thiscall **)(_DWORD *, _OWORD *))(*v25 + 0x10))(v25, v10);
  v53 = *v45;
  sub_8E0E30(this + 0x13, v5[4], v5[5]);
  v27 = this + 0x16;
  sub_8E0E30(this + 0x16, *v5, v5[2]);
  v28 = this + 0x19;
  sub_8E0E30(this + 0x19, v5[1], v5[3]);
  sub_8E0B30(v53, v46, (__int16 *)v5);
  if ( v44 < v46 - 1 )
  {
    v29 = &(*v45)[2 * v46 - 2];
    *(_DWORD *)v5 = v29->m64_i32[0];
    *((_DWORD *)v5 + 1) = v29->m64_i32[1];
    *((_DWORD *)v5 + 2) = v29[1].m64_i32[0];
    *((_DWORD *)v5 + 3) = v29[1].m64_i32[1];
    *(_WORD *)(*(this + 0x13) + 4 * v5[4] + 2) = v44;
    *(_WORD *)(*(this + 0x13) + 4 * v5[5] + 2) = v44;
    v30 = *((_DWORD *)v5 + 3);
    if ( (v30 & 1) != 0 )
    {
      *(_WORD *)((v30 & 0xFFFFFFFE) + *(this + 0x1E)) = v44;
    }
    else
    {
      *(_WORD *)(*v27 + 4 * *v5 + 2) = v44;
      *(_WORD *)(*v27 + 4 * v5[2] + 2) = v44;
      *(_WORD *)(*v28 + 4 * v5[1] + 2) = v44;
      *(_WORD *)(*v28 + 4 * v5[3] + 2) = v44;
      **((_DWORD **)v5 + 3) = v44;
    }
    if ( *(this + 0x1C) )
    {
      if ( (v5[6] & 1) == 0 )
      {
        v31 = v5[4];
        v32 = *(this + 0x13);
        v33 = *(unsigned __int16 *)(v32 + 4 * v31) >> (0x10 - *((_BYTE *)this + 0x74));
        if ( v33 )
        {
          if ( (unsigned int)(*v45)[2 * *(unsigned __int16 *)(0x10 * v33 + *(this + 0x1E) - 0x10) + 1].m64_i16[1] > v31 )
            --v33;
        }
        if ( v33 <= (*(unsigned __int16 *)(v32 + 4 * v5[5]) >> (0x10 - *((_BYTE *)this + 0x74))) - 1 )
        {
          v34 = 0x10 * v33;
          v54 = (*(unsigned __int16 *)(v32 + 4 * v5[5]) >> (0x10 - *((_BYTE *)this + 0x74))) - v33;
          do
          {
            v35 = *(this + 0x1E);
            v36 = *(_DWORD *)(v35 + v34 + 8);
            v37 = v34 + v35;
            v38 = 0;
            if ( v36 <= 0 )
            {
LABEL_43:
              v38 = 0xFFFFFFFF;
            }
            else
            {
              v39 = *(_WORD **)(v37 + 4);
              while ( *v39 != (_WORD)v46 - 1 )
              {
                ++v38;
                ++v39;
                if ( v38 >= v36 )
                  goto LABEL_43;
              }
            }
            *(_WORD *)(*(_DWORD *)(v37 + 4) + 2 * v38) = v44;
            v34 += 0x10;
            --v54;
          }
          while ( v54 );
        }
      }
    }
  }
  v40 = v46 - 1;
  result = (unsigned int)v45[2] & 0x3FFFFFFF;
  if ( result < v46 - 1 )
  {
    v42 = 2 * result;
    if ( v40 >= v42 )
      v42 = v46 - 1;
    result = sub_8A6E40((const void **)v45, v42, 0x10);
  }
  v45[1] = (__m64 *)v40;
  return result;
}
