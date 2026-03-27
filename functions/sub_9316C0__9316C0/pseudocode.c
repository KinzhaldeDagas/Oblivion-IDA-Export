bool *__cdecl sub_9316C0(bool *a1, int a2, int a3, char a4, int *a5)
{
  int v5; // edx
  int v6; // ebp
  int v7; // eax
  char v8; // dl
  int v9; // edi
  int v10; // esi
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // eax
  int v15; // edi
  int v16; // esi
  int v17; // edx
  _DWORD *v18; // eax
  int v19; // eax
  int *v20; // eax
  bool v21; // cl
  int v22; // ebp
  int v23; // eax
  int v24; // edi
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // esi
  _BYTE *v28; // eax
  bool v29; // al
  int v30; // eax
  bool v31; // zf
  int v32; // eax
  _BYTE *v33; // eax
  bool v34; // al
  int *v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int *v39; // esi
  int v40; // eax
  int v41; // ebp
  int v42; // edi
  int v43; // edx
  int *v44; // ecx
  int v45; // eax
  int v46; // edx
  char v47; // bl
  int v48; // ecx
  _WORD *v49; // eax
  bool v50; // al
  int v51; // edx
  int i; // eax
  char v53; // [esp+12h] [ebp-1Ah] BYREF
  char v54; // [esp+13h] [ebp-19h] BYREF
  int v55; // [esp+14h] [ebp-18h]
  char v56; // [esp+18h] [ebp-14h]
  int v57; // [esp+1Ch] [ebp-10h]
  int v58; // [esp+20h] [ebp-Ch]
  char v59; // [esp+24h] [ebp-8h]
  int v60; // [esp+28h] [ebp-4h]

  v5 = *(_DWORD *)(a2 + 8);
  v55 = *(_DWORD *)(a2 + 4);
  v6 = 0;
  v7 = 0;
  if ( v5 > 0 )
  {
    do
      *(_WORD *)(*(_DWORD *)(a2 + 4) + 8 * v7++ + 6) = 0;
    while ( v7 < *(_DWORD *)(a2 + 8) );
  }
  v8 = a4;
  if ( a4 )
    v9 = *(_DWORD *)*a5;
  else
    v9 = *(_DWORD *)(*a5 + 4);
  v10 = a5[1] - 1;
  if ( v10 < 0 )
  {
LABEL_18:
    *a1 = 1;
    return a1;
  }
  else
  {
    v11 = 4 * v10;
    do
    {
      v12 = (_DWORD *)*a5;
      if ( v8 )
        v13 = v12[v11];
      else
        v13 = v12[v11 + 1];
      if ( v13 != v9 )
      {
        ++v6;
        v9 = v13;
        if ( v8 )
          v13 = v55 + 8 * *(unsigned __int16 *)(v13 + 2);
        if ( *(_WORD *)(v13 + 6) == 3 )
        {
LABEL_39:
          *a1 = 0;
          return a1;
        }
        *(_WORD *)(v13 + 6) = 3;
        v8 = a4;
      }
      --v10;
      v11 -= 4;
    }
    while ( v10 >= 0 );
    if ( !v6 )
      goto LABEL_18;
    if ( v8 )
      v15 = *(_DWORD *)*a5;
    else
      v15 = *(_DWORD *)(*a5 + 4);
    v16 = a5[1] - 1;
    if ( v16 >= 0 )
    {
      v17 = 4 * v16;
      do
      {
        v18 = (_DWORD *)*a5;
        if ( a4 )
          v19 = v18[v17];
        else
          v19 = v18[v17 + 1];
        if ( v19 != v15 )
        {
          v15 = v19;
          if ( !a4 )
            v19 = v55 + 8 * *(unsigned __int16 *)(v19 + 2);
          if ( *(_WORD *)(v19 + 6) )
          {
            if ( *(_WORD *)(v19 + 6) == 1 )
              goto LABEL_39;
            if ( *(_WORD *)(v19 + 6) == 3 )
              *(_WORD *)(v19 + 6) = 2;
          }
          else
          {
            *(_WORD *)(v19 + 6) = 1;
          }
        }
        --v16;
        v17 -= 4;
      }
      while ( v16 >= 0 );
      v8 = a4;
    }
    v20 = (int *)*a5;
    v21 = 1;
    v56 = 1;
    if ( v8 )
      v22 = *v20;
    else
      v22 = v20[1];
    v23 = a5[1] - 1;
    if ( v23 >= 0 )
    {
      v24 = 4 * v23;
      v58 = a5[1];
      do
      {
        v25 = (_DWORD *)*a5;
        if ( v8 )
          v26 = v25[v24];
        else
          v26 = v25[v24 + 1];
        if ( v26 != v22 )
        {
          v22 = v26;
          if ( v8 )
            v27 = v26;
          else
            v27 = v55 + 8 * *(unsigned __int16 *)(v26 + 2);
          if ( *(_WORD *)(v27 + 6) == 1 )
          {
            v29 = 0;
            if ( v21 )
            {
              v28 = sub_931520(&v53, a2, v27, 1);
              v8 = a4;
              if ( *v28 )
                v29 = 1;
            }
            v21 = v29;
          }
          v30 = *(unsigned __int16 *)(v27 + 2);
          v31 = *(_WORD *)(v55 + 8 * v30 + 6) == 3;
          v32 = v55 + 8 * v30;
          if ( v31 )
          {
            v34 = 0;
            if ( v21 )
            {
              v33 = sub_931520(&v54, a2, v32, 3);
              v8 = a4;
              if ( *v33 )
                v34 = 1;
            }
            v21 = v34;
          }
        }
        v24 -= 4;
        --v58;
      }
      while ( v58 );
      v56 = v21;
    }
    v35 = (int *)*a5;
    if ( v8 )
      v36 = *v35;
    else
      v36 = v35[1];
    v57 = v36;
    v37 = a5[1] - 1;
    if ( v37 >= 0 )
    {
      v60 = a5[1];
      v58 = 0x10 * v37;
      v38 = 0x10 * v37;
      while ( 1 )
      {
        v39 = (int *)*a5;
        if ( v8 )
          v40 = *(int *)((char *)v39 + v38);
        else
          v40 = *(int *)((char *)v39 + v38 + 4);
        if ( v40 != v57 )
        {
          v57 = v40;
          v41 = v8 ? v40 : v55 + 8 * *(unsigned __int16 *)(v40 + 2);
          if ( *(_WORD *)(v41 + 6) == 2 )
          {
            v59 = 1;
            if ( v8 )
              v42 = *v39;
            else
              v42 = v39[1];
            v43 = a5[1] - 1;
            if ( v43 >= 0 )
            {
              v44 = &v39[4 * v43];
              while ( 1 )
              {
                v45 = a4 ? *v44 : v44[1];
                if ( v45 != v42 )
                {
                  v42 = v45;
                  if ( *(_WORD *)(v45 + 6) != 2 )
                    break;
                }
                --v43;
                v44 += 0xFFFFFFFC;
                if ( v43 < 0 )
                  goto LABEL_91;
              }
              v59 = 0;
            }
LABEL_91:
            v46 = *(_DWORD *)(a2 + 8);
            v47 = 0;
            v48 = 0;
            if ( v46 > 0 )
            {
              v49 = (_WORD *)(*(_DWORD *)(a2 + 4) + 6);
              while ( *v49 )
              {
                ++v48;
                v49 += 4;
                if ( v48 >= v46 )
                  goto LABEL_97;
              }
              v47 = 1;
            }
LABEL_97:
            if ( v59 )
            {
              if ( v47 )
              {
                v50 = v56 && *sub_931520(&v54, a2, v41, 3);
                v56 = v50;
              }
            }
          }
        }
        v38 = v58 - 0x10;
        v31 = v60 == 1;
        v58 -= 0x10;
        --v60;
        if ( v31 )
          break;
        v8 = a4;
      }
      v21 = v56;
    }
    v51 = *(_DWORD *)(a2 + 8);
    for ( i = 0; i < v51; ++i )
      v21 = v21 && *(_WORD *)(*(_DWORD *)(a2 + 4) + 8 * i + 6);
    *a1 = v21;
    return a1;
  }
}
