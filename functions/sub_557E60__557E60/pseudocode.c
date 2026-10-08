// Negative compatibility finding: nonzero maxBasisShapes is clamped to FaceGenEgtBasisBank_GetCount before basis iteration; zero selects min(bankCount,30). Thus PF requesting 50 during randomized refresh does not alone overrun a smaller EGT bank. Precheck separately errors if model basis records exceed matrix 2/3 rows. No bound bug from the raised limit proven.
bool __thiscall BSFaceGenModel_GenerateMorphTexture(
        void *this,
        const FaceGenHeadParameters *parameters,
        NiTexture **outTexture,
        unsigned int maxBasisShapes)
{
  NiTexture *v5; // eax
  NiTexture *v6; // esi
  NiTexture *v7; // edi
  const FaceGenHeadParameters *DefaultHeadParameters; // ebx
  int v9; // esi
  LONG (__stdcall *v10)(volatile LONG *, LONG, LONG); // edi
  LONG v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // eax
  int v15; // eax
  FaceGenMatrix *v16; // ebx
  unsigned int v17; // esi
  _DWORD *v18; // eax
  BSFaceGenImage *v19; // eax
  BSFaceGenImage *v20; // eax
  _DWORD *v22; // ecx
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int basisCount; // esi
  const FaceGenEgtBasisBank *v26; // ebx
  _DWORD *v27; // ebx
  int v28; // esi
  int v29; // ecx
  int v30; // esi
  int v31; // esi
  int v32; // ecx
  int v33; // esi
  int v34; // esi
  float *begin; // eax
  _DWORD *v36; // ebp
  int v37; // esi
  _DWORD *v38; // ebx
  int v39; // esi
  int v40; // ecx
  int v41; // esi
  int v42; // eax
  int v43; // ecx
  int v44; // esi
  int v45; // ebp
  int v46; // eax
  int combinedWeight16_16; // ebp
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
  const FaceGenHeadParameters *v64; // ecx
  int *v65; // eax
  unsigned int v66; // edx
  double v67; // st6
  unsigned int v68; // edx
  int *v69; // ecx
  unsigned int v70; // eax
  double v71; // st6
  UInt32 v72; // ebx
  NiTexture *v73; // eax
  NiTexture *v74; // esi
  NiTexture *v75; // edi
  UInt32 v76; // [esp+28h] [ebp-5Ch] BYREF
  unsigned int v77; // [esp+2Ch] [ebp-58h]
  _DWORD *v78; // [esp+30h] [ebp-54h]
  unsigned int appliedBasisCount; // [esp+34h] [ebp-50h]
  int rgbAccumulation16_16; // [esp+38h] [ebp-4Ch]
  unsigned int v81; // [esp+3Ch] [ebp-48h]
  int v82; // [esp+40h] [ebp-44h]
  int v83; // [esp+44h] [ebp-40h]
  unsigned int v84; // [esp+48h] [ebp-3Ch]
  FaceGenMatrix *v85; // [esp+4Ch] [ebp-38h]
  int coordinateFixed8_8; // [esp+50h] [ebp-34h]
  int v87; // [esp+54h] [ebp-30h]
  _DWORD *v88; // [esp+58h] [ebp-2Ch]
  volatile LONG *Destination; // [esp+5Ch] [ebp-28h]
  char *v90; // [esp+60h] [ebp-24h] BYREF
  float v91; // [esp+64h] [ebp-20h]
  int v92[4]; // [esp+68h] [ebp-1Ch] BYREF
  unsigned int v93; // [esp+80h] [ebp-4h]
  unsigned int basisIndex; // [esp+88h] [ebp+4h]
  const FaceGenHeadParameters *parametersa; // [esp+88h] [ebp+4h]
  unsigned int basisRecordOffset; // [esp+90h] [ebp+Ch]
  unsigned int maxBasisShapesa; // [esp+90h] [ebp+Ch]

  v78 = this; /*0x557e89*/
  v76 = 0; /*0x557e8f*/
  v93 = 0; /*0x557e93*/
  v5 = (NiTexture *)sub_523D80(); /*0x557e97*/
  v6 = *outTexture; /*0x557ea0*/
  v7 = v5; /*0x557ea2*/
  if ( *outTexture != v5 ) /*0x557ea6*/
  {
    if ( v6 ) /*0x557eaa*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->members) ) /*0x557eb0*/
        v6->__vftable->super.super.Destructor((NiRefObject *)v6, 1); /*0x557ec6*/
    }
    *outTexture = v7; /*0x557eca*/
    if ( v7 ) /*0x557ecc*/
      InterlockedIncrement((volatile LONG *)&v7->members); /*0x557ed2*/
  }
  if ( !*((_DWORD *)this + 3) ) /*0x557ed8*/
    return 0; /*0x557ed8*/
  DefaultHeadParameters = parameters; /*0x557ee2*/
  if ( !parameters ) /*0x557ee8*/
  {
    DefaultHeadParameters = FaceGenManager_GetDefaultHeadParameters(); /*0x557eef*/
    if ( !DefaultHeadParameters ) /*0x557ef3*/
      return 0; /*0x557ef3*/
  }
  if ( !sub_551960((unsigned int **)this) ) /*0x557efa*/
  {
    v9 = *((_DWORD *)this + 3); /*0x557f06*/
    if ( !*(_DWORD *)(v9 + 8) ) /*0x557f09*/
    {
      if ( !BSStringT_GetLen(*((BSStringT **)this + 3)) ) /*0x557f18*/
        goto LABEL_28; /*0x557f18*/
      *(_DWORD *)(*((_DWORD *)this + 3) + 8) = BSFaceGenEgtData_CreateFromFile(*(const char **)v9); /*0x557f2c*/
    }
    if ( *(_DWORD *)(*((_DWORD *)this + 3) + 8) ) /*0x557f32*/
      goto LABEL_15; /*0x557f36*/
LABEL_28:
    v93 = 0xFFFFFFFF; /*0x55802c*/
    NiPointerSlot_Release((NiD3DVertexShader *)&v76); /*0x558038*/
    return 0; /*0x558052*/
  }
LABEL_15:
  v10 = InterlockedCompareExchange; /*0x557f3c*/
  Destination = (volatile LONG *)((char *)this + 0x18); /*0x557f4a*/
  v90 = (char *)this + 0x18; /*0x557f4e*/
  v11 = v10((volatile LONG *)this + 6, 1, 0); /*0x557f52*/
  LOBYTE(v91) = v11 == 0; /*0x557f59*/
  LOBYTE(v93) = 1; /*0x557f5f*/
  if ( v11 ) /*0x557f64*/
    goto LABEL_28; /*0x557f64*/
  v12 = *(_DWORD *)(*((_DWORD *)this + 3) + 8); /*0x557f6d*/
  if ( !v12 ) /*0x557f72*/
  {
    v10((volatile LONG *)this + 6, 0, 1); /*0x557f78*/
    goto LABEL_28; /*0x557f7a*/
  }
  v13 = *((_DWORD *)FaceGenEgtBasisBank_GetAt((FaceGenEgtBasisBank *)(v12 + 4), 0) + 1); /*0x557f8f*/
  v14 = *((_DWORD *)FaceGenEgtBasisBank_GetAt((FaceGenEgtBasisBank *)(*(_DWORD *)(*((_DWORD *)this + 3) + 8) + 4), 0) + 2); /*0x557f9e*/
  v77 = v14; /*0x557fa1*/
  if ( !v13 || !v14 ) /*0x557fa9*/
  {
LABEL_27:
    sub_5563B0((int)&v90); /*0x558023*/
    goto LABEL_28; /*0x558027*/
  }
  v15 = *(_DWORD *)(*((_DWORD *)this + 3) + 8); /*0x557fae*/
  v16 = &DefaultHeadParameters->matrices[2];    // EGT texture generation begins at FaceGen matrix 2 and validates/consumes matrices 2 and 3 as texture-coordinate banks. /*0x557fb1*/
  v17 = 0; /*0x557fb4*/
  v85 = v16; /*0x557fb6*/
  v18 = (_DWORD *)(v15 + 8); /*0x557fba*/
  do /*0x557fe0*/
  {
    if ( *v18 && v16->rows < (v18[1] - *v18) >> 6 ) /*0x557fd2*/
    {
      PrintError("FaceGen - Tried to apply a coordinate that did not match the EGT basis."); /*0x55801b*/
      goto LABEL_27; /*0x55801b*/
    }
    ++v17; /*0x557fd4*/
    ++v16; /*0x557fd7*/
    v18 += 4; /*0x557fda*/
  }
  while ( v17 < 2 ); /*0x557fe0*/
  *(float *)&v92[3] = 0.0; /*0x557fe6*/
  *(float *)&v92[2] = 0.0; /*0x557fea*/
  *(float *)&v92[1] = 0.0; /*0x557fee*/
  *(float *)v92 = 0.0; /*0x557ff2*/
  v19 = (BSFaceGenImage *)FormHeapAlloc(0x24u); /*0x557ff6*/
  LOBYTE(v93) = 2; /*0x558004*/
  if ( v19 ) /*0x558009*/
    v20 = BSFaceGenImage::BSFaceGenImage(v19, 0); /*0x55800f*/
  else
    v20 = 0; /*0x558055*/
  LOBYTE(v93) = 1; /*0x55805c*/
  NiSmartPointer_Set__((Ni2DBuffer **)&v76, (Ni2DBuffer *)v20); /*0x558061*/
  v22 = (_DWORD *)v76; /*0x558066*/
  v23 = v77; /*0x55806a*/
  *(_DWORD *)(v76 + 0x1C) = v13; /*0x55806e*/
  v22[8] = v23; /*0x558071*/
  v24 = v13 * v23; /*0x558079*/
  v88 = sub_54E390(v22); /*0x558084*/
  sub_54E230(v88, v24, v92); /*0x558088*/
  rgbAccumulation16_16 = FormHeapAlloc((unsigned __int64)(3 * v24) >> 0x1E != 0 ? 0xFFFFFFFF : 0xC * v24);
  _memset(rgbAccumulation16_16, 0, 0xC * v24); /*0x5580b5*/
  basisCount = maxBasisShapes; /*0x5580ba*/
  if ( maxBasisShapes ) /*0x5580c6*/
  {
    v26 = (const FaceGenEgtBasisBank *)(*(_DWORD *)(v78[3] + 8) + 4); /*0x5580d2*/
    appliedBasisCount = maxBasisShapes; /*0x5580d7*/
    if ( maxBasisShapes > FaceGenEgtBasisBank_GetCount(v26) ) /*0x5580e2*/
    {
      basisCount = FaceGenEgtBasisBank_GetCount(v26); /*0x5580eb*/
LABEL_36:
      appliedBasisCount = basisCount; /*0x558111*/
    }
  }
  else
  {
    basisCount = FaceGenEgtBasisBank_GetCount((const FaceGenEgtBasisBank *)(*(_DWORD *)(v78[3] + 8) + 4)); /*0x558101*/
    appliedBasisCount = basisCount; /*0x558106*/
    if ( basisCount > 0x1E ) /*0x55810a*/
    {
      basisCount = 0x1E; /*0x55810c*/
      goto LABEL_36; /*0x55810c*/
    }
  }
  basisIndex = 0; /*0x558115*/
  if ( basisCount ) /*0x55811f*/
  {
    basisRecordOffset = 0; /*0x558125*/
    do /*0x55834b*/
    {
      v27 = v78; /*0x558130*/
      v28 = *(_DWORD *)(v78[3] + 8); /*0x558137*/
      v29 = *(_DWORD *)(v28 + 8); /*0x55813a*/
      v30 = v28 + 4; /*0x558141*/
      if ( !v29 || basisIndex >= (*(_DWORD *)(v30 + 8) - v29) >> 6 ) /*0x558152*/
        _invalid_parameter_noinfo((int)v78, v13, v30); /*0x558154*/
      if ( *(_DWORD *)(*(_DWORD *)(v30 + 4) + basisRecordOffset + 4) != v13 ) /*0x558164*/
        FaceGen_ReportAssertionViolation("..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp", 0x462); /*0x558170*/
      v31 = *(_DWORD *)(v27[3] + 8); /*0x55817b*/
      v32 = *(_DWORD *)(v31 + 8); /*0x55817e*/
      v33 = v31 + 4; /*0x558181*/
      if ( !v32 || basisIndex >= (*(_DWORD *)(v33 + 8) - v32) >> 6 ) /*0x558192*/
        _invalid_parameter_noinfo((int)v27, v13, v33); /*0x558194*/
      if ( *(_DWORD *)(*(_DWORD *)(v33 + 4) + basisRecordOffset + 8) != v77 ) /*0x5581a8*/
        FaceGen_ReportAssertionViolation("..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp", 0x463); /*0x5581b4*/
      v34 = (int)v85; /*0x5581bc*/
      begin = v85->begin; /*0x5581c0*/
      if ( !begin || !(v85->end - begin) ) /*0x5581cc*/
        _invalid_parameter_noinfo((int)v27, v13, (int)v85); /*0x5581d1*/
      coordinateFixed8_8 = Double_To_SInt32(*(float *)(*(_DWORD *)(v34 + 0xC) + 4 * basisIndex * *(_DWORD *)(v34 + 4)) * dbl_A3B1B8); /*0x5581f2*/
      if ( coordinateFixed8_8 ) /*0x5581f6*/
      {
        v36 = v78; /*0x5581fc*/
        v37 = *((_DWORD *)FaceGenEgtBasisBank_GetAt((FaceGenEgtBasisBank *)(*(_DWORD *)(v78[3] + 8) + 4), basisIndex) + 3); /*0x558219*/
        v87 = v37 /*0x55822a*/
            + *((_DWORD *)FaceGenEgtBasisBank_GetAt((FaceGenEgtBasisBank *)(*(_DWORD *)(v36[3] + 8) + 4), basisIndex) + 1);
        v81 = 0; /*0x558232*/
        v82 = rgbAccumulation16_16; /*0x55823a*/
        do /*0x558331*/
        {
          v38 = v78; /*0x558240*/
          v39 = *(_DWORD *)(v78[3] + 8); /*0x558247*/
          v40 = *(_DWORD *)(v39 + 8); /*0x55824a*/
          v41 = v39 + 4; /*0x55824d*/
          if ( !v40 || basisIndex >= (*(_DWORD *)(v41 + 8) - v40) >> 6 ) /*0x558260*/
            _invalid_parameter_noinfo((int)v78, v13, v41); /*0x558262*/
          v42 = Double_To_SInt32(*(float *)(*(_DWORD *)(v41 + 4) + basisRecordOffset) * dbl_A3B1B8); /*0x558277*/
          v43 = v38[3]; /*0x55827c*/
          v44 = *(_DWORD *)(v43 + 8) + 4; /*0x558282*/
          v45 = v42; /*0x558285*/
          v46 = *(_DWORD *)(*(_DWORD *)(v43 + 8) + 8); /*0x558287*/
          combinedWeight16_16 = coordinateFixed8_8 * v45; /*0x55828a*/
          if ( !v46 || basisIndex >= (*(_DWORD *)(*(_DWORD *)(v43 + 8) + 0xC) - v46) >> 6 ) /*0x55829f*/
            _invalid_parameter_noinfo((int)v38, v13, v44); /*0x5582a1*/
          v48 = basisRecordOffset + *(_DWORD *)(v44 + 4); /*0x5582a9*/
          v49 = *(_DWORD *)(v81 + v48 + 0x14); /*0x5582b1*/
          v50 = (int *)(v81 + v48 + 0x14); /*0x5582b7*/
          if ( !v49 || *(_DWORD *)(v81 + v48 + 0x18) == v49 ) /*0x5582c1*/
            _invalid_parameter_noinfo((int)v50, v13, v48); /*0x5582c5*/
          v51 = *v50; /*0x5582cf*/
          if ( v77 ) /*0x5582d1*/
          {
            v52 = (_DWORD *)v82; /*0x5582d3*/
            v53 = 0xC * v13; /*0x5582e0*/
            v83 = v82; /*0x5582e2*/
            v84 = v77; /*0x5582e6*/
            do /*0x55831c*/
            {
              for ( i = 0; i < v13; ++i ) /*0x5582f0*/
              {
                *v52 += combinedWeight16_16 * *(char *)(i + v51); /*0x5582fd*/
                v52 += 3; /*0x558302*/
              }
              v51 += v87; /*0x55830d*/
              v52 = (_DWORD *)(v53 + v83); /*0x558311*/
              v55 = v84-- == 1; /*0x558313*/
              v83 += v53; /*0x558318*/
            }
            while ( !v55 ); /*0x55831c*/
          }
          v82 += 4; /*0x558322*/
          v81 += 0x10; /*0x55832d*/
        }
        while ( v81 < 0x30 ); /*0x558331*/
      }
      basisRecordOffset += 0x40; /*0x55833b*/
      ++basisIndex; /*0x558347*/
    }
    while ( basisIndex < appliedBasisCount ); /*0x55834b*/
  }
  v56 = dbl_A64AA0; /*0x558351*/
  for ( j = 0; j < 3; ++j ) /*0x558357*/
  {
    v58 = v88; /*0x558359*/
    v59 = v88[1]; /*0x55835d*/
    v60 = v59 < v88[2]; /*0x558360*/
    v61 = v59 <= v88[2]; /*0x558360*/
    v84 = v59; /*0x558363*/
    if ( !v61 ) /*0x558367*/
    {
      _invalid_parameter_noinfo(j, v13, v59); /*0x55836b*/
      v56 = dbl_A64AA0; /*0x558370*/
      v60 = v59 < v58[2]; /*0x558376*/
    }
    if ( !v60 ) /*0x558379*/
    {
      _invalid_parameter_noinfo(j, v13, v59); /*0x55837d*/
      v56 = dbl_A64AA0; /*0x558382*/
    }
    if ( v77 ) /*0x55838d*/
    {
      coordinateFixed8_8 = 0xC * v13; /*0x55839e*/
      v62 = 0; /*0x5583a4*/
      v87 = 0x10 * v13; /*0x5583ac*/
      maxBasisShapesa = rgbAccumulation16_16 + 4 * j; /*0x5583b4*/
      parametersa = (const FaceGenHeadParameters *)(v84 + 4 * j); /*0x5583bf*/
      v83 = v77; /*0x5583c3*/
      do /*0x55845a*/
      {
        v63 = 0; /*0x5583c7*/
        if ( v13 >= 4 ) /*0x5583cc*/
        {
          v64 = parametersa; /*0x5583ce*/
          v65 = (int *)maxBasisShapesa; /*0x5583d2*/
          v66 = ((unsigned int)(v13 - 4) >> 2) + 1; /*0x5583dc*/
          v63 = 4 * v66; /*0x5583df*/
          do /*0x55840e*/
          {
            v67 = (double)*v65; /*0x5583e6*/
            v65 += 0xC; /*0x5583e8*/
            v64 = (const FaceGenHeadParameters *)((char *)v64 + 0x40); /*0x5583eb*/
            --v66; /*0x5583ee*/
            *(float *)&v64[0xFFFFFFFF].matrices[1].allocator08 = v67 * v56; /*0x5583f3*/
            *(float *)&v64[0xFFFFFFFF].matrices[2].rows = (double)v65[0xFFFFFFF7] * v56; /*0x5583fb*/
            *(float *)&v64[0xFFFFFFFF].matrices[2].end = (double)v65[0xFFFFFFFA] * v56; /*0x558403*/
            *(float *)&v64[0xFFFFFFFF].matrices[3].allocator08 = (double)v65[0xFFFFFFFD] * v56; /*0x55840b*/
          }
          while ( v66 ); /*0x55840e*/
        }
        if ( v63 < v13 ) /*0x558412*/
        {
          v68 = v84 + 4 * (j + 4 * (v63 + v62)); /*0x55841e*/
          v69 = (int *)(rgbAccumulation16_16 + 4 * (v63 + v62 + j + 2 * (v63 + v62))); /*0x55842a*/
          v70 = v13 - v63; /*0x55842f*/
          do /*0x558441*/
          {
            v71 = (double)*v69; /*0x558431*/
            v69 += 3; /*0x558433*/
            v68 += 0x10; /*0x558436*/
            --v70; /*0x558439*/
            *(float *)(v68 - 0x10) = v71 * v56; /*0x55843e*/
          }
          while ( v70 ); /*0x558441*/
        }
        parametersa = (const FaceGenHeadParameters *)((char *)parametersa + v87); /*0x55844b*/
        maxBasisShapesa += coordinateFixed8_8; /*0x55844f*/
        v62 += v13; /*0x558453*/
        --v83; /*0x558455*/
      }
      while ( v83 ); /*0x55845a*/
    }
  }
  FormHeapFree(rgbAccumulation16_16); /*0x558473*/
  v72 = v76; /*0x55847e*/
  v73 = (NiTexture *)sub_54DA40((unsigned int *)v76, flt_A64A9C, flt_A40098, kHeadBodyNormalMatchRadius, &unk_B26040); /*0x5584a6*/
  v74 = *outTexture; /*0x5584af*/
  v75 = v73; /*0x5584b2*/
  if ( *outTexture != v73 ) /*0x5584b6*/
  {
    if ( v74 ) /*0x5584ba*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v74->members) ) /*0x5584c0*/
        v74->__vftable->super.super.Destructor((NiRefObject *)v74, 1); /*0x5584d6*/
    }
    *outTexture = v75; /*0x5584da*/
    if ( v75 ) /*0x5584dd*/
      InterlockedIncrement((volatile LONG *)&v75->members); /*0x5584e3*/
  }
  InterlockedCompareExchange(Destination, 0, 1); /*0x5584f2*/
  v93 = 0xFFFFFFFF; /*0x5584fc*/
  if ( !InterlockedDecrement((volatile LONG *)(v72 + 4)) ) /*0x558504*/
    (**(void (__thiscall ***)(UInt32, int))v72)(v72, 1); /*0x558516*/
  return 1; /*0x55803f*/
}
