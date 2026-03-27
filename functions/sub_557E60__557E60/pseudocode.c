char __thiscall sub_557E60(char *this, int a2, int *a3, unsigned int a4)
{
  int v5; // eax
  Ni2DBuffer *v6; // esi
  int v7; // edi
  int v8; // ebx
  int v9; // esi
  LONG (__stdcall *v10)(volatile LONG *, LONG, LONG); // edi
  LONG v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  _DWORD *v16; // ebx
  unsigned int v17; // esi
  _DWORD *v18; // eax
  BSFaceGenImage *v19; // eax
  BSFaceGenImage *v20; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // esi
  _DWORD *v26; // ebx
  char *v27; // ebx
  int v28; // esi
  int v29; // ecx
  int v30; // esi
  int v31; // esi
  int v32; // ecx
  int v33; // esi
  _DWORD *v34; // esi
  int v35; // eax
  char *v36; // ebp
  int v37; // esi
  char *v38; // ebx
  int v39; // esi
  int v40; // ecx
  int v41; // esi
  int v42; // eax
  int v43; // ecx
  int v44; // esi
  int v45; // ebp
  int v46; // eax
  int v47; // ebp
  int v48; // esi
  int v49; // eax
  int *v50; // ebx
  int v51; // edx
  _DWORD *v52; // ecx
  int v53; // esi
  unsigned int i; // eax
  bool v55; // zf
  double v56; // st7
  int j; // ebx
  _DWORD *v58; // ebp
  unsigned int v59; // esi
  bool v60; // cf
  bool v61; // cc
  int v62; // ebp
  unsigned int v63; // esi
  unsigned int v64; // ecx
  int *v65; // eax
  unsigned int v66; // edx
  double v67; // st6
  unsigned int v68; // edx
  int *v69; // ecx
  unsigned int v70; // eax
  double v71; // st6
  UInt32 v72; // ebx
  Ni2DBuffer *v73; // eax
  Ni2DBuffer *v74; // esi
  int v75; // edi
  UInt32 v76; // [esp+28h] [ebp-5Ch] BYREF
  unsigned int v77; // [esp+2Ch] [ebp-58h]
  char *v78; // [esp+30h] [ebp-54h]
  unsigned int v79; // [esp+34h] [ebp-50h]
  unsigned int v80; // [esp+38h] [ebp-4Ch]
  unsigned int v81; // [esp+3Ch] [ebp-48h]
  unsigned int v82; // [esp+40h] [ebp-44h]
  unsigned int v83; // [esp+44h] [ebp-40h]
  unsigned int v84; // [esp+48h] [ebp-3Ch]
  _DWORD *v85; // [esp+4Ch] [ebp-38h]
  int v86; // [esp+50h] [ebp-34h]
  int v87; // [esp+54h] [ebp-30h]
  _DWORD *v88; // [esp+58h] [ebp-2Ch]
  volatile LONG *Destination; // [esp+5Ch] [ebp-28h]
  char *v90; // [esp+60h] [ebp-24h] BYREF
  float v91; // [esp+64h] [ebp-20h]
  int v92[4]; // [esp+68h] [ebp-1Ch] BYREF
  unsigned int v93; // [esp+80h] [ebp-4h]
  unsigned int v94; // [esp+88h] [ebp+4h]
  unsigned int v95; // [esp+88h] [ebp+4h]
  int v96; // [esp+90h] [ebp+Ch]
  int *v97; // [esp+90h] [ebp+Ch]

  v78 = this;
  v76 = 0;
  v93 = 0;
  v5 = sub_523D80();
  v6 = (Ni2DBuffer *)*a3;
  v7 = v5;
  if ( *a3 != v5 )
  {
    if ( v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v6->__vftable)(v6, 1);
    }
    *a3 = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)(v7 + 4));
  }
  if ( !*((_DWORD *)this + 3) )
    return 0;
  v8 = a2;
  if ( !a2 )
  {
    v8 = sub_5538D0();
    if ( !v8 )
      return 0;
  }
  if ( !sub_551960((unsigned int **)this) )
  {
    v9 = *((_DWORD *)this + 3);
    if ( !*(_DWORD *)(v9 + 8) )
    {
      if ( !BSStringT_GetLen(*((BSStringT **)this + 3)) )
        goto LABEL_28;
      *(_DWORD *)(*((_DWORD *)this + 3) + 8) = sub_557C80(*(char **)v9);
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 3) + 8) )
      goto LABEL_15;
LABEL_28:
    v93 = 0xFFFFFFFF;
    sub_7016A0((NiD3DVertexShader *)&v76);
    return 0;
  }
LABEL_15:
  v10 = InterlockedCompareExchange;
  Destination = (volatile LONG *)(this + 0x18);
  v90 = this + 0x18;
  v11 = v10((volatile LONG *)this + 6, 1, 0);
  LOBYTE(v91) = v11 == 0;
  LOBYTE(v93) = 1;
  if ( v11 )
    goto LABEL_28;
  v12 = *(_DWORD *)(*((_DWORD *)this + 3) + 8);
  if ( !v12 )
  {
    v10((volatile LONG *)this + 6, 0, 1);
    goto LABEL_28;
  }
  v13 = *(_DWORD *)(sub_556320((_DWORD *)(v12 + 4), 0) + 4);
  v14 = *(_DWORD *)(sub_556320((_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 8) + 4), 0) + 8);
  v77 = v14;
  if ( !v13 || !v14 )
  {
LABEL_27:
    sub_5563B0((int)&v90);
    goto LABEL_28;
  }
  v15 = *(_DWORD *)(*((_DWORD *)this + 3) + 8);
  v16 = (_DWORD *)(v8 + 0x30);
  v17 = 0;
  v85 = v16;
  v18 = (_DWORD *)(v15 + 8);
  do
  {
    if ( *v18 && *v16 < (unsigned int)((v18[1] - *v18) >> 6) )
    {
      PrintError("FaceGen - Tried to apply a coordinate that did not match the EGT basis.");
      goto LABEL_27;
    }
    ++v17;
    v16 += 6;
    v18 += 4;
  }
  while ( v17 < 2 );
  *(float *)&v92[3] = 0.0;
  *(float *)&v92[2] = 0.0;
  *(float *)&v92[1] = 0.0;
  *(float *)v92 = 0.0;
  v19 = (BSFaceGenImage *)FormHeapAlloc(0x24u);
  LOBYTE(v93) = 2;
  if ( v19 )
    v20 = BSFaceGenImage::BSFaceGenImage(v19, 0);
  else
    v20 = 0;
  LOBYTE(v93) = 1;
  NiSmartPointer_Set__((Ni2DBuffer **)&v76, (Ni2DBuffer *)v20);
  v22 = (_DWORD *)v76;
  v23 = v77;
  *(_DWORD *)(v76 + 0x1C) = v13;
  v22[8] = v23;
  v24 = v13 * v23;
  v88 = sub_54E390(v22);
  sub_54E230(v88, v24, v92);
  v80 = FormHeapAlloc((unsigned __int64)(3 * v24) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * v24);
  _memset(v80, 0, 0xC * v24);
  v25 = a4;
  if ( a4 )
  {
    v26 = (_DWORD *)(*(_DWORD *)(*((_DWORD *)v78 + 3) + 8) + 4);
    v79 = a4;
    if ( a4 > sub_556300(v26) )
    {
      v25 = sub_556300(v26);
LABEL_36:
      v79 = v25;
    }
  }
  else
  {
    v25 = sub_556300((_DWORD *)(*(_DWORD *)(*((_DWORD *)v78 + 3) + 8) + 4));
    v79 = v25;
    if ( v25 > 0x1E )
    {
      v25 = 0x1E;
      goto LABEL_36;
    }
  }
  v94 = 0;
  if ( v25 )
  {
    v96 = 0;
    do
    {
      v27 = v78;
      v28 = *(_DWORD *)(*((_DWORD *)v78 + 3) + 8);
      v29 = *(_DWORD *)(v28 + 8);
      v30 = v28 + 4;
      if ( !v29 || v94 >= (*(_DWORD *)(v30 + 8) - v29) >> 6 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(v30 + 4) + v96 + 4) != v13 )
        sub_6ED6D0((int)"..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp", 0x462);
      v31 = *(_DWORD *)(*((_DWORD *)v27 + 3) + 8);
      v32 = *(_DWORD *)(v31 + 8);
      v33 = v31 + 4;
      if ( !v32 || v94 >= (*(_DWORD *)(v33 + 8) - v32) >> 6 )
        _invalid_parameter_noinfo();
      if ( *(_DWORD *)(*(_DWORD *)(v33 + 4) + v96 + 8) != v77 )
        sub_6ED6D0((int)"..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp", 0x463);
      v34 = v85;
      v35 = v85[3];
      if ( !v35 || !((v85[4] - v35) >> 2) )
        _invalid_parameter_noinfo();
      v86 = Double_To_SInt32(*(float *)(v34[3] + 4 * v94 * v34[1]) * dbl_A3B1B8);
      if ( v86 )
      {
        v36 = v78;
        v37 = *(_DWORD *)(sub_556320((_DWORD *)(*(_DWORD *)(*((_DWORD *)v78 + 3) + 8) + 4), v94) + 0xC);
        v87 = v37 + *(_DWORD *)(sub_556320((_DWORD *)(*(_DWORD *)(*((_DWORD *)v36 + 3) + 8) + 4), v94) + 4);
        v81 = 0;
        v82 = v80;
        do
        {
          v38 = v78;
          v39 = *(_DWORD *)(*((_DWORD *)v78 + 3) + 8);
          v40 = *(_DWORD *)(v39 + 8);
          v41 = v39 + 4;
          if ( !v40 || v94 >= (*(_DWORD *)(v41 + 8) - v40) >> 6 )
            _invalid_parameter_noinfo();
          v42 = Double_To_SInt32(*(float *)(*(_DWORD *)(v41 + 4) + v96) * dbl_A3B1B8);
          v43 = *((_DWORD *)v38 + 3);
          v44 = *(_DWORD *)(v43 + 8) + 4;
          v45 = v42;
          v46 = *(_DWORD *)(*(_DWORD *)(v43 + 8) + 8);
          v47 = v86 * v45;
          if ( !v46 || v94 >= (*(_DWORD *)(*(_DWORD *)(v43 + 8) + 0xC) - v46) >> 6 )
            _invalid_parameter_noinfo();
          v48 = v96 + *(_DWORD *)(v44 + 4);
          v49 = *(_DWORD *)(v81 + v48 + 0x14);
          v50 = (int *)(v81 + v48 + 0x14);
          if ( !v49 || *(_DWORD *)(v81 + v48 + 0x18) == v49 )
            _invalid_parameter_noinfo();
          v51 = *v50;
          if ( v77 )
          {
            v52 = (_DWORD *)v82;
            v53 = 0xC * v13;
            v83 = v82;
            v84 = v77;
            do
            {
              for ( i = 0; i < v13; ++i )
              {
                *v52 += v47 * *(char *)(i + v51);
                v52 += 3;
              }
              v51 += v87;
              v52 = (_DWORD *)(v53 + v83);
              v55 = v84-- == 1;
              v83 += v53;
            }
            while ( !v55 );
          }
          v82 += 4;
          v81 += 0x10;
        }
        while ( v81 < 0x30 );
      }
      v96 += 0x40;
      ++v94;
    }
    while ( v94 < v79 );
  }
  v56 = dbl_A64AA0;
  for ( j = 0; j < 3; ++j )
  {
    v58 = v88;
    v59 = v88[1];
    v60 = v59 < v88[2];
    v61 = v59 <= v88[2];
    v84 = v59;
    if ( !v61 )
    {
      _invalid_parameter_noinfo();
      v56 = dbl_A64AA0;
      v60 = v59 < v58[2];
    }
    if ( !v60 )
    {
      _invalid_parameter_noinfo();
      v56 = dbl_A64AA0;
    }
    if ( v77 )
    {
      v86 = 0xC * v13;
      v62 = 0;
      v87 = 0x10 * v13;
      v97 = (int *)(v80 + 4 * j);
      v95 = v84 + 4 * j;
      v83 = v77;
      do
      {
        v63 = 0;
        if ( v13 >= 4 )
        {
          v64 = v95;
          v65 = v97;
          v66 = ((unsigned int)(v13 - 4) >> 2) + 1;
          v63 = 4 * v66;
          do
          {
            v67 = (double)*v65;
            v65 += 0xC;
            v64 += 0x40;
            --v66;
            *(float *)(v64 - 0x40) = v67 * v56;
            *(float *)(v64 - 0x30) = (double)v65[0xFFFFFFF7] * v56;
            *(float *)(v64 - 0x20) = (double)v65[0xFFFFFFFA] * v56;
            *(float *)(v64 - 0x10) = (double)v65[0xFFFFFFFD] * v56;
          }
          while ( v66 );
        }
        if ( v63 < v13 )
        {
          v68 = v84 + 4 * (j + 4 * (v63 + v62));
          v69 = (int *)(v80 + 4 * (v63 + v62 + j + 2 * (v63 + v62)));
          v70 = v13 - v63;
          do
          {
            v71 = (double)*v69;
            v69 += 3;
            v68 += 0x10;
            --v70;
            *(float *)(v68 - 0x10) = v71 * v56;
          }
          while ( v70 );
        }
        v95 += v87;
        v97 = (int *)((char *)v97 + v86);
        v62 += v13;
        --v83;
      }
      while ( v83 );
    }
  }
  FormHeapFree(v80);
  v72 = v76;
  v73 = sub_54DA40((unsigned int *)v76, flt_A64A9C, flt_A40098, flt_A3D65C, &unk_B26040);
  v74 = (Ni2DBuffer *)*a3;
  v75 = (int)v73;
  if ( (Ni2DBuffer *)*a3 != v73 )
  {
    if ( v74 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v74->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v74->__vftable)(v74, 1);
    }
    *a3 = v75;
    if ( v75 )
      InterlockedIncrement((volatile LONG *)(v75 + 4));
  }
  InterlockedCompareExchange(Destination, 0, 1);
  v93 = 0xFFFFFFFF;
  if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) )
    (**(void (__thiscall ***)(UInt32, int))v72)(v72, 1);
  return 1;
}
