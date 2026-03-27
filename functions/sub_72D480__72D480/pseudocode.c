void __thiscall sub_72D480(
        int this,
        int a2,
        _DWORD *a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        char a7,
        unsigned __int8 a8,
        unsigned int a9)
{
  _DWORD *v9; // ebp
  int v10; // eax
  unsigned int i; // eax
  __int16 v13; // cx
  char *v14; // edi
  int v15; // edi
  int v16; // ecx
  unsigned int v17; // edi
  __int64 v18; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  float *v21; // ebp
  double v22; // st6
  _BYTE *v23; // edi
  _DWORD *v24; // edx
  unsigned int v25; // eax
  float *k; // ecx
  int v27; // edx
  unsigned int v28; // ebx
  unsigned int v29; // edi
  unsigned int v30; // edx
  unsigned int v31; // ecx
  unsigned __int16 v32; // ax
  unsigned int v33; // edi
  __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // ecx
  bool v37; // zf
  float *v38; // edx
  _DWORD *v39; // ebx
  unsigned int v40; // eax
  unsigned int v41; // edi
  unsigned int v42; // ecx
  _DWORD *v43; // ebx
  int v44; // ebp
  _DWORD *v45; // edx
  int v46; // eax
  unsigned int v47; // edx
  _BYTE *v48; // ecx
  unsigned int m; // eax
  _BYTE *v50; // [esp+14h] [ebp+4h]
  float v51; // [esp+14h] [ebp+4h]
  float *v52; // [esp+18h] [ebp+8h]
  unsigned int j; // [esp+1Ch] [ebp+Ch]
  _DWORD *v54; // [esp+1Ch] [ebp+Ch]
  unsigned int v55; // [esp+24h] [ebp+14h]
  float *v56; // [esp+24h] [ebp+14h]
  _DWORD *v57; // [esp+28h] [ebp+18h]
  float v58; // [esp+28h] [ebp+18h]
  unsigned int v59; // [esp+2Ch] [ebp+1Ch]
  unsigned int v60; // [esp+2Ch] [ebp+1Ch]
  unsigned int v61; // [esp+30h] [ebp+20h]

  v9 = a3;
  v10 = a3[2];
  if ( v10 <= a8 )
    LOWORD(v10) = a8;
  *(_WORD *)(this + 0x20) = v10;
  *(_WORD *)(this + 0x1E) = *(_WORD *)(a2 + 8);
  *(_DWORD *)(this + 4) = FormHeapAlloc(
                            (unsigned __int64)(unsigned __int16)v10 >> 0x1F != 0
                          ? 0xFFFFFFFF
                          : 2 * (unsigned __int16)v10);
  for ( i = 0; i < *(unsigned __int16 *)(this + 0x20); *(_WORD *)(*(_DWORD *)(this + 4) + 2 * i++) = v13 )
  {
    if ( i >= a3[2] )
      v13 = 0;
    else
      v13 = *(_WORD *)(*a3 + 2 * i);
  }
  v14 = sub_72CF50((_WORD *)this, (_DWORD *)a2, a4);
  sub_72D090((unsigned __int16 *)this, (_DWORD *)a2, (int)a4, (int)v14);
  FormHeapFree((unsigned int)v14);
  v15 = *(unsigned __int16 *)(this + 0x1C);
  v16 = 0;
  if ( a6 )
  {
    *(_WORD *)(this + 0x24) = a8;
    v17 = a8 * v15;
    v18 = 4LL * v17;
    LOBYTE(v16) = HIDWORD(v18) != 0;
    *(_DWORD *)(this + 8) = FormHeapAlloc(v18 | -v16);
    *(_DWORD *)(this + 0x10) = FormHeapAlloc(v17);
    v19 = FormHeapAlloc((unsigned __int64)a9 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a9);
    v20 = 0;
    for ( j = v19; v20 < a3[2]; ++v20 )
      *(_DWORD *)(v19 + 4 * *(unsigned __int16 *)(*(_DWORD *)(this + 4) + 2 * v20)) = v20;
    v52 = *(float **)(this + 8);
    v50 = *(_BYTE **)(this + 0x10);
    v21 = (float *)FormHeapAlloc(
                     (unsigned __int64)*(unsigned __int16 *)(this + 0x24) >> 0x1E != 0
                   ? 0xFFFFFFFF
                   : 4 * *(unsigned __int16 *)(this + 0x24));
    v55 = FormHeapAlloc(*(unsigned __int16 *)(this + 0x24));
    v59 = 0;
    if ( *(_WORD *)(this + 0x1C) )
    {
      v22 = flt_A3B888;
      do
      {
        v23 = (_BYTE *)v55;
        v24 = (_DWORD *)(a5 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(this + 0xC) + 2 * v59));
        v25 = 0;
        v57 = v24;
        for ( k = v21; v25 < v57[2]; ++v23 )
        {
          v27 = *v24;
          *k = *(float *)(v27 + 8 * v25 + 4);
          *v23 = *(_BYTE *)(v19 + 4 * *(_DWORD *)(v27 + 8 * v25));
          v24 = v57;
          ++v25;
          ++k;
        }
        for ( ; v25 < *(unsigned __int16 *)(this + 0x24); ++v23 )
        {
          ++v25;
          *k = 0.0;
          *v23 = 0;
          ++k;
        }
        v28 = 0;
        if ( *(_WORD *)(this + 0x24) )
        {
          v29 = *(unsigned __int16 *)(this + 0x24);
          do
          {
            v30 = 1;
            v31 = 0;
            v58 = *v21;
            if ( *(_WORD *)(this + 0x24) > 1u )
            {
              do
              {
                if ( v58 < (double)v21[v30] )
                {
                  v31 = v30;
                  v58 = v21[v30];
                }
                ++v30;
              }
              while ( v30 < v29 );
            }
            *v52++ = v21[v31];
            *v50 = *(_BYTE *)(v31 + v55);
            v21[v31] = v22;
            ++v50;
            v29 = *(unsigned __int16 *)(this + 0x24);
            ++v28;
          }
          while ( v28 < v29 );
        }
        v19 = j;
        ++v59;
      }
      while ( v59 < *(unsigned __int16 *)(this + 0x1C) );
    }
    FormHeapFree((unsigned int)v21);
    FormHeapFree(v55);
    FormHeapFree(v19);
  }
  else
  {
    v32 = *(_WORD *)(this + 0x20);
    *(_WORD *)(this + 0x24) = v32;
    v33 = v32 * v15;
    v34 = 4LL * v33;
    LOBYTE(v16) = HIDWORD(v34) != 0;
    v61 = v33;
    v35 = FormHeapAlloc(v34 | -v16);
    v36 = 0;
    v37 = *(_WORD *)(this + 0x1C) == 0;
    v38 = (float *)v35;
    *(_DWORD *)(this + 8) = v35;
    v56 = (float *)v35;
    v60 = 0;
    if ( !v37 )
    {
      do
      {
        v39 = (_DWORD *)(a5 + 0xC * *(unsigned __int16 *)(*(_DWORD *)(this + 0xC) + 2 * v36));
        v40 = 0;
        v54 = v39;
        if ( v9[2] )
        {
          while ( 1 )
          {
            v41 = v39[2];
            v42 = 0;
            if ( v41 )
            {
              v43 = (_DWORD *)*v39;
              v44 = *(unsigned __int16 *)(*v9 + 2 * v40);
              v45 = v43;
              while ( *v45 != v44 )
              {
                ++v42;
                v45 += 2;
                if ( v42 >= v41 )
                {
                  v9 = a3;
                  v38 = v56;
                  goto LABEL_35;
                }
              }
              v9 = a3;
              v38 = v56;
              v51 = *(float *)&v43[2 * v42 + 1];
            }
            else
            {
LABEL_35:
              v51 = 0.0;
            }
            ++v38;
            v38[0xFFFFFFFF] = v51;
            ++v40;
            v56 = v38;
            if ( v40 >= v9[2] )
              break;
            v39 = v54;
          }
          v36 = v60;
          v33 = v61;
        }
        if ( v40 < *(unsigned __int16 *)(this + 0x20) )
        {
          do
          {
            *v38 = 0.0;
            ++v40;
            ++v38;
          }
          while ( v40 < *(unsigned __int16 *)(this + 0x20) );
          v56 = v38;
        }
        v60 = ++v36;
      }
      while ( v36 < *(unsigned __int16 *)(this + 0x1C) );
    }
    if ( a7 )
    {
      v46 = FormHeapAlloc(v33);
      v47 = 0;
      v37 = *(_WORD *)(this + 0x1C) == 0;
      *(_DWORD *)(this + 0x10) = v46;
      v48 = (_BYTE *)v46;
      if ( !v37 )
      {
        do
        {
          for ( m = 0; m < *(unsigned __int16 *)(this + 0x20); *v48++ = m++ )
            ;
          ++v47;
        }
        while ( v47 < *(unsigned __int16 *)(this + 0x1C) );
      }
    }
  }
}
