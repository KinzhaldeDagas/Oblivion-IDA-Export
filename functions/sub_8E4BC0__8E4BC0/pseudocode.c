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

  v4 = this;
  v60 = &v63;
  v62 = 0x80000100;
  v58 = 0x80000100;
  v5 = *(this + 0x14);
  v61 = 0;
  v57 = 0;
  v6 = v4[0x13];
  v56 = &v59;
  v7 = v6 + 4;
  v51 = v4;
  v54 = v6 + 4 * v5 - 4;
  v52 = v6 + 4;
  if ( v6 + 4 >= v54 )
    goto LABEL_63;
  while ( 2 )
  {
    v8 = *(unsigned __int16 *)(v7 + 2);
    v53 = *(_WORD *)(v7 + 2);
    v9 = *(_DWORD *)(a2 + 4 * (v8 >> 5)) & (1 << (v53 & 0x1F));
    v55 = v9;
    if ( (*(_BYTE *)v7 & 1) != 0 )
    {
      v10 = v9 == 0;
      v11 = &v60;
      if ( v10 )
        v11 = &v56;
      v12 = (int)v11[1];
      v13 = 0;
      if ( v12 <= 0 )
      {
LABEL_11:
        v15 = 0xFFFFFFFF;
      }
      else
      {
        v14 = *v11;
        while ( *(_WORD *)v14 != (_WORD)v8 )
        {
          ++v13;
          v14 += 2;
          if ( v13 >= (int)v11[1] )
            goto LABEL_11;
        }
        v15 = v13;
      }
      v11[1] = (char *)(v12 - 1);
      *(_WORD *)&(*v11)[2 * v15] = *(_WORD *)&(*v11)[2 * v12 - 2];
      goto LABEL_62;
    }
    v16 = v4[0x10] + 0x10 * v8;
    v49 = 0;
    if ( v61 > 0 )
    {
      while ( 1 )
      {
        v17 = v51[0x10];
        v18 = 0x10 * *(unsigned __int16 *)&v60[2 * v49];
        v19 = *(_DWORD *)(v18 + v17 + 4);
        v20 = v17 + v18;
        v21 = v16;
        if ( (((*(_DWORD *)(v16 + 4) - *(_DWORD *)v20) | (v19 - *(_DWORD *)v16)) & 0x80008000) == 0 )
        {
          if ( (*(_BYTE *)(v16 + 0xC) & 1) != 0 )
            goto LABEL_22;
          if ( (*(_BYTE *)(v20 + 0xC) & 1) != 0 )
          {
            v21 = v20;
            v20 = v16;
LABEL_22:
            v24 = (v20 - v17) >> 4;
            v25 = (_DWORD *)(v51[0x1E] + (*(_DWORD *)(v21 + 0xC) & 0xFFFFFFFE));
            if ( a4 )
            {
              v26 = (const void **)(v25 + 1);
              if ( v25[2] == (v25[3] & 0x3FFFFFFF) )
                sub_8A6EE0(v26, 2);
              *((_WORD *)*v26 + (_DWORD)v26[1]) = v24;
              v26[1] = (char *)v26[1] + 1;
            }
            else
            {
              v27 = v25[2];
              v28 = 0;
              if ( v27 <= 0 )
              {
LABEL_30:
                v30 = 0xFFFFFFFF;
              }
              else
              {
                v29 = (_WORD *)v25[1];
                while ( *v29 != (_WORD)v24 )
                {
                  ++v28;
                  ++v29;
                  if ( v28 >= v27 )
                    goto LABEL_30;
                }
                v30 = v28;
              }
              v31 = v25[2] - 1;
              v25[2] = v31;
              *(_WORD *)(v25[1] + 2 * v30) = *(_WORD *)(v25[1] + 2 * v31);
            }
            goto LABEL_32;
          }
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a3, 8);
          v22 = a3[1];
          v23 = (char *)*a3 + 8 * (_DWORD)v22;
          a3[1] = (char *)v22 + 1;
          *v23 = *(_DWORD *)(v20 + 0xC);
          v23[1] = *(_DWORD *)(v16 + 0xC);
        }
LABEL_32:
        if ( ++v49 >= v61 )
        {
          v9 = v55;
          LOWORD(v8) = v53;
          break;
        }
      }
    }
    if ( !v9 )
    {
      if ( v57 == (v58 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v56, 2);
      *(_WORD *)&v56[2 * v57++] = v8;
      goto LABEL_62;
    }
    v50 = 0;
    if ( v57 <= 0 )
      goto LABEL_56;
    do
    {
      v32 = v51[0x10];
      v33 = 0x10 * *(unsigned __int16 *)&v56[2 * v50];
      v34 = *(_DWORD *)(v33 + v32 + 4);
      v35 = (_DWORD *)(v32 + v33);
      v36 = (_DWORD *)v16;
      if ( (((*(_DWORD *)(v16 + 4) - *v35) | (v34 - *(_DWORD *)v16)) & 0x80008000) != 0 )
        goto LABEL_54;
      if ( (*(_BYTE *)(v16 + 0xC) & 1) == 0 )
      {
        if ( (v35[3] & 1) == 0 )
        {
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a3, 8);
          v37 = a3[1];
          v38 = (char *)*a3 + 8 * (_DWORD)v37;
          a3[1] = (char *)v37 + 1;
          *v38 = v35[3];
          v38[1] = *(_DWORD *)(v16 + 0xC);
          goto LABEL_54;
        }
        v36 = v35;
        v35 = (_DWORD *)v16;
      }
      v39 = ((int)v35 - v32) >> 4;
      v40 = (_DWORD *)(v51[0x1E] + (v36[3] & 0xFFFFFFFE));
      if ( a4 )
      {
        v41 = (const void **)(v40 + 1);
        if ( v40[2] == (v40[3] & 0x3FFFFFFF) )
          sub_8A6EE0(v41, 2);
        *((_WORD *)*v41 + (_DWORD)v41[1]) = v39;
        v41[1] = (char *)v41[1] + 1;
      }
      else
      {
        v42 = v40[2];
        v43 = 0;
        if ( v42 <= 0 )
        {
LABEL_52:
          v43 = 0xFFFFFFFF;
        }
        else
        {
          v44 = (_WORD *)v40[1];
          while ( *v44 != (_WORD)v39 )
          {
            ++v43;
            ++v44;
            if ( v43 >= v42 )
              goto LABEL_52;
          }
        }
        v45 = v40[2] - 1;
        v40[2] = v45;
        *(_WORD *)(v40[1] + 2 * v43) = *(_WORD *)(v40[1] + 2 * v45);
      }
LABEL_54:
      ++v50;
    }
    while ( v50 < v57 );
    LOWORD(v8) = v53;
LABEL_56:
    if ( v61 == (v62 & 0x3FFFFFFF) )
      sub_8A6EE0((const void **)&v60, 2);
    *(_WORD *)&v60[2 * v61++] = v8;
LABEL_62:
    v7 = v52 + 4;
    v52 += 4;
    if ( v52 < v54 )
    {
      v4 = v51;
      continue;
    }
    break;
  }
LABEL_63:
  v46 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v58 >= 0 )
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v46] + 0x19C), v56, 2 * (v58 & 0x3FFFFFFF), 0x14);
  result = v62;
  if ( v62 >= 0 )
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v46] + 0x19C), v60, 2 * (v62 & 0x3FFFFFFF), 0x14);
  return result;
}
