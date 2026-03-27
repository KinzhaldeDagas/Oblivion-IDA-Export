char __thiscall sub_558840(char *this, unsigned int *a2, int a3, float a4, float *a5)
{
  char *v5; // edi
  NiObject *v6; // esi
  int v7; // ecx
  BSStringT *v8; // ecx
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  int v11; // edx
  volatile LONG *v12; // ebp
  LONG v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  int v16; // edx
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned int v20; // ebp
  int v21; // edi
  int v22; // ecx
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // edx
  int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // esi
  int v30; // ecx
  int v31; // ebx
  int v32; // edx
  int v33; // eax
  unsigned int v35; // ebp
  unsigned int *v36; // esi
  unsigned int v37; // eax
  float *v38; // edi
  int v39; // edx
  int v40; // esi
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  float *v44; // edi
  int v45; // esi
  int v46; // edx
  __int16 *v47; // esi
  int v48; // ebp
  _DWORD *v49; // ebx
  _DWORD *v50; // eax
  unsigned int v51; // ebx
  unsigned int v52; // ebx
  float *v53; // edi
  bool v54; // cf
  float v55; // edx
  float *v56; // eax
  float v57; // ecx
  _DWORD *v58; // ebx
  _DWORD *v59; // eax
  unsigned int v60; // ebx
  unsigned int i; // edi
  float *v62; // eax
  float v63; // ecx
  float v64; // edx
  float *v65; // eax
  float v66; // edx
  int v67; // eax
  unsigned int v68; // [esp+14h] [ebp-74h]
  float v69; // [esp+14h] [ebp-74h]
  unsigned int *v70; // [esp+18h] [ebp-70h]
  unsigned int v71; // [esp+18h] [ebp-70h]
  unsigned int v72; // [esp+18h] [ebp-70h]
  unsigned int v73; // [esp+1Ch] [ebp-6Ch]
  int v75; // [esp+24h] [ebp-64h]
  volatile LONG *Destination; // [esp+28h] [ebp-60h]
  int v77; // [esp+2Ch] [ebp-5Ch]
  unsigned int v78; // [esp+2Ch] [ebp-5Ch]
  unsigned int v79; // [esp+30h] [ebp-58h]
  unsigned int v80; // [esp+34h] [ebp-54h]
  unsigned int v81; // [esp+38h] [ebp-50h]
  unsigned int *v82; // [esp+3Ch] [ebp-4Ch]
  int v83; // [esp+40h] [ebp-48h]
  int v84; // [esp+44h] [ebp-44h]
  int v85; // [esp+58h] [ebp-30h] BYREF
  int v86; // [esp+5Ch] [ebp-2Ch]
  char v87; // [esp+60h] [ebp-28h]
  float v88; // [esp+64h] [ebp-24h]
  float v89; // [esp+68h] [ebp-20h]
  float v90; // [esp+6Ch] [ebp-1Ch]
  float v91; // [esp+70h] [ebp-18h]
  float v92; // [esp+74h] [ebp-14h]
  float v93; // [esp+78h] [ebp-10h]
  int v94; // [esp+84h] [ebp-4h]

  v5 = this;
  v6 = sub_5508A0(a3);
  if ( !*((_DWORD *)v5 + 2) )
    return 0;
  if ( !a2 )
  {
    a2 = (unsigned int *)sub_5538D0();
    if ( !a2 )
      return 0;
  }
  v85 = 0;
  v86 = 0;
  v87 = 0;
  if ( a3 )
  {
    v7 = *(_DWORD *)(a3 + 0xB4);
    if ( v7 )
    {
      if ( sub_728AB0(v7, 1) )
        sub_728B60(*(_DWORD *)(a3 + 0xB4), (int)&v85);
    }
  }
  if ( v6 && v6->__vftable[1].Unk_02(v6) )
  {
    v75 = (int)v6->__vftable[1].Unk_02(v6);
    v73 = ((int (__thiscall *)(NiObject *, _DWORD))v6->__vftable[1].Unk_03)(v6, 0);
  }
  else
  {
    if ( !v85 )
      return 0;
    v73 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 0xB4) + 8);
    v75 = 0;
    byte_B39D84 = 1;
  }
  if ( !sub_551930((unsigned int **)v5) )
  {
    v8 = *((BSStringT **)v5 + 2);
    if ( !v8[1].m_data )
    {
      if ( !BSStringT_GetLen(v8) )
        return 0;
      v9 = (_DWORD *)FormHeapAlloc(0x24u);
      v94 = 0;
      if ( v9 )
        v10 = sub_558770(v9, **((char ***)v5 + 2));
      else
        v10 = 0;
      v11 = *((_DWORD *)v5 + 2);
      v94 = 0xFFFFFFFF;
      *(_DWORD *)(v11 + 8) = v10;
    }
    if ( !*(_DWORD *)(*((_DWORD *)v5 + 2) + 8) )
      return 0;
  }
  v12 = (volatile LONG *)(v5 + 0x14);
  Destination = (volatile LONG *)(v5 + 0x14);
  v13 = InterlockedCompareExchange((volatile LONG *)v5 + 5, 1, 0);
  v94 = 1;
  if ( !v13 )
  {
    v14 = 0;
    v68 = 0;
    v70 = a2;
    while ( 1 )
    {
      v15 = *(_DWORD *)(*((_DWORD *)v5 + 2) + 8);
      v16 = *(_DWORD *)(v15 + v14 + 8);
      v17 = v15 + v14 + 4;
      if ( v16 )
      {
        v19 = (int)((unsigned __int64)(0x66666667LL * (*(_DWORD *)(v17 + 8) - v16)) >> 0x20) >> 3;
        v18 = v19 + (v19 >> 0x1F);
        if ( *v70 < v18 )
        {
          PrintError("FaceGen - Tried to apply a coordinate that did not match the EGM basis.");
          InterlockedCompareExchange(v12, 0, 1);
          return 0;
        }
      }
      else
      {
        v18 = 0;
      }
      v20 = 0;
      if ( v18 )
        break;
LABEL_38:
      v70 += 6;
      v14 += 0x10;
      v68 = v14;
      if ( v14 >= 0x20 )
      {
        v29 = 0;
        v81 = 0;
        do
        {
          v30 = *(_DWORD *)(*((_DWORD *)this + 2) + 8);
          v31 = 0x10 * v29;
          v32 = *(_DWORD *)(v30 + 0x10 * v29 + 8);
          v83 = 0x10 * v29;
          if ( v32 )
            v33 = (*(_DWORD *)(v30 + 0x10 * v29 + 0xC) - v32) / 0x14;
          else
            v33 = 0;
          v35 = 0;
          v80 = v33;
          v79 = 0;
          if ( v33 )
          {
            v36 = &a2[6 * v29];
            v82 = v36;
            while ( 1 )
            {
              v37 = v36[3];
              if ( !v37 || !((int)(v36[4] - v37) >> 2) )
                _invalid_parameter_noinfo();
              v38 = (float *)(v36[3] + 4 * v35 * v36[1]);
              v39 = *((_DWORD *)this + 2);
              v40 = *(_DWORD *)(v39 + 8) + v31 + 4;
              v41 = *(_DWORD *)(*(_DWORD *)(v39 + 8) + v31 + 8);
              if ( !v41 || v35 >= (*(_DWORD *)(*(_DWORD *)(v39 + 8) + v31 + 0xC) - v41) / 0x14 )
                _invalid_parameter_noinfo();
              v77 = 0x14 * v35;
              v69 = *v38 * a4 * *(float *)(*(_DWORD *)(v40 + 4) + 0x14 * v35);
              if ( 0.0 != v69 )
              {
                v42 = *(_DWORD *)(*((_DWORD *)this + 2) + 8);
                v43 = *(_DWORD *)(v42 + v31 + 8);
                v44 = (float *)v75;
                v45 = v42 + v31 + 4;
                if ( !v43 || v35 >= (*(_DWORD *)(v42 + v31 + 0xC) - v43) / 0x14 )
                  _invalid_parameter_noinfo();
                v46 = *(_DWORD *)(v45 + 4);
                v47 = *(__int16 **)(v46 + v77 + 8);
                v48 = v46 + v77 + 4;
                if ( (unsigned int)v47 > *(_DWORD *)(v46 + v77 + 0xC) )
                  _invalid_parameter_noinfo();
                v78 = *(unsigned __int16 *)(*(_DWORD *)(a3 + 0xB4) + 8);
                if ( a5 )
                {
                  if ( v75 )
                  {
                    v71 = 0;
                    if ( *(_WORD *)(*(_DWORD *)(a3 + 0xB4) + 8) )
                    {
                      v49 = (_DWORD *)v75;
                      do
                      {
                        if ( !v48 )
                          _invalid_parameter_noinfo();
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        *v44 = (double)*v47 * v69 + *a5;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44[1] = (double)v47[1] * v69 + a5[1];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44 += 3;
                        v44[0xFFFFFFFF] = (double)v47[2] * v69 + a5[2];
                        v50 = (_DWORD *)(v85 + v71 * v86);
                        *v50 = *v49;
                        v50[1] = v49[1];
                        v50[2] = v49[2];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v47 += 3;
                        v49 += 3;
                        ++v71;
                      }
                      while ( v71 < v78 );
                    }
                    if ( v71 < v73 )
                    {
                      v51 = v73 - v71;
                      do
                      {
                        if ( !v48 )
                          _invalid_parameter_noinfo();
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        *v44 = (double)*v47 * v69 + *a5;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44[1] = (double)v47[1] * v69 + a5[1];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44 += 3;
                        v44[0xFFFFFFFF] = (double)v47[2] * v69 + a5[2];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v47 += 3;
                        --v51;
                      }
                      while ( v51 );
                    }
                  }
                  else
                  {
                    v52 = 0;
                    if ( v73 )
                    {
                      v53 = a5 + 2;
                      do
                      {
                        if ( !v48 )
                          _invalid_parameter_noinfo();
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v54 = (unsigned int)v47 < *(_DWORD *)(v48 + 8);
                        v91 = (double)*v47 * v69 + v53[0xFFFFFFFE];
                        if ( !v54 )
                          _invalid_parameter_noinfo();
                        v54 = (unsigned int)v47 < *(_DWORD *)(v48 + 8);
                        v92 = (double)v47[1] * v69 + v53[0xFFFFFFFF];
                        if ( !v54 )
                          _invalid_parameter_noinfo();
                        v55 = v92;
                        v93 = (double)v47[2] * v69 + *v53;
                        v56 = (float *)(v85 + v52 * v86);
                        *v56 = v91;
                        v57 = v93;
                        v56[1] = v55;
                        v56[2] = v57;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        ++v52;
                        v47 += 3;
                        v53 += 3;
                      }
                      while ( v52 < v73 );
                    }
                  }
                }
                else
                {
                  v58 = (_DWORD *)v75;
                  if ( v75 )
                  {
                    v72 = 0;
                    if ( *(_WORD *)(*(_DWORD *)(a3 + 0xB4) + 8) )
                    {
                      do
                      {
                        if ( !v48 )
                          _invalid_parameter_noinfo();
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        *v44 = (double)*v47 * v69 + *v44;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44[1] = (double)v47[1] * v69 + v44[1];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44 += 3;
                        v44[0xFFFFFFFF] = (double)v47[2] * v69 + v44[0xFFFFFFFF];
                        v59 = (_DWORD *)(v85 + v72 * v86);
                        *v59 = *v58;
                        v59[1] = v58[1];
                        v59[2] = v58[2];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v47 += 3;
                        v58 += 3;
                        ++v72;
                      }
                      while ( v72 < v78 );
                    }
                    if ( v72 < v73 )
                    {
                      v60 = v73 - v72;
                      do
                      {
                        if ( !v48 )
                          _invalid_parameter_noinfo();
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        *v44 = (double)*v47 * v69 + *v44;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44[1] = (double)v47[1] * v69 + v44[1];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v44 += 3;
                        v44[0xFFFFFFFF] = (double)v47[2] * v69 + v44[0xFFFFFFFF];
                        if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                          _invalid_parameter_noinfo();
                        v47 += 3;
                        --v60;
                      }
                      while ( v60 );
                    }
                  }
                  else
                  {
                    for ( i = 0; i < v73; v47 += 3 )
                    {
                      v62 = (float *)(v85 + i * v86);
                      v63 = v62[1];
                      v88 = *v62;
                      v64 = v62[2];
                      v89 = v63;
                      v90 = v64;
                      if ( !v48 )
                        _invalid_parameter_noinfo();
                      if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                        _invalid_parameter_noinfo();
                      v54 = (unsigned int)v47 < *(_DWORD *)(v48 + 8);
                      v88 = (double)*v47 * v69 + v88;
                      if ( !v54 )
                        _invalid_parameter_noinfo();
                      v54 = (unsigned int)v47 < *(_DWORD *)(v48 + 8);
                      v89 = (double)v47[1] * v69 + v89;
                      if ( !v54 )
                        _invalid_parameter_noinfo();
                      v65 = (float *)(v85 + i * v86);
                      v84 = v47[2];
                      v66 = v89;
                      *v65 = v88;
                      v65[1] = v66;
                      v90 = (double)v84 * v69 + v90;
                      v65[2] = v90;
                      if ( (unsigned int)v47 >= *(_DWORD *)(v48 + 8) )
                        _invalid_parameter_noinfo();
                      ++i;
                    }
                  }
                }
              }
              v35 = ++v79;
              if ( v79 >= v80 )
                break;
              v36 = v82;
              v31 = v83;
            }
            v29 = v81;
          }
          v81 = ++v29;
        }
        while ( v29 < 2 );
        v67 = *(_DWORD *)(a3 + 0xB4);
        if ( *(_DWORD *)(v67 + 0x1C) )
          *(_WORD *)(v67 + 0x2E) |= 1u;
        sub_728B20(*(_DWORD *)(a3 + 0xB4));
        InterlockedCompareExchange(Destination, 0, 1);
        return 1;
      }
      v12 = Destination;
    }
    v21 = 0;
    while ( 1 )
    {
      v22 = *(_DWORD *)(*((_DWORD *)this + 2) + 8);
      v23 = *(_DWORD *)(v22 + v68 + 8);
      v24 = v22 + v68 + 4;
      if ( !v23 || v20 >= (*(_DWORD *)(v22 + v68 + 0xC) - v23) / 0x14 )
        _invalid_parameter_noinfo();
      v25 = *(_DWORD *)(v24 + 4);
      v26 = *(_DWORD *)(v21 + v25 + 8);
      v27 = v21 + v25 + 4;
      v28 = v26 ? (*(_DWORD *)(v27 + 8) - v26) / 6 : 0;
      if ( v28 < v73 )
        break;
      ++v20;
      v21 += 0x14;
      if ( v20 >= v18 )
      {
        v5 = this;
        v14 = v68;
        goto LABEL_38;
      }
    }
    PrintError("FaceGen - EGM basis did not match the provided model data.");
    InterlockedCompareExchange(Destination, 0, 1);
  }
  return 0;
}
