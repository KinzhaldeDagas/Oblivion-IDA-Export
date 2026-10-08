// CTL FanControls loader/precompute at manager+0xC8. First block: 20 FaceGenFanProjectionRecord records at +0x25C, indexed [fan 0..4][control 0..1][channel 0..1], strides 0x80/0x40/0x20. Each contains basis 1 x dimensions[2*channel], reciprocalSquaredLength (+0x18), and projectionOffset (+0x1C). Offset meaning verified in runtime getter. Later pair data/projection/inverse precomputation remains partially decoded. Initialized byte set after completion.
bool __thiscall FanControls_ReadCtlDataAndPrecompute(
        void *this,
        BSFaceGenBinaryFile *file,
        const unsigned int *basisDimensions)
{
  FaceGenMatrix *v3; // esi
  unsigned int v4; // edi
  double v5; // st7
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // edi
  _DWORD *v9; // esi
  double v10; // st7
  unsigned int v11; // ebp
  FaceGenMatrix *v12; // esi
  unsigned int v13; // edi
  int v14; // esi
  unsigned int v15; // ebp
  FaceGenMatrix *v16; // esi
  unsigned int v17; // eax
  int v18; // edi
  FaceGenMatrix *v19; // edi
  const FaceGenMatrix *v20; // ebp
  FaceGenMatrix *v21; // eax
  FaceGenMatrix *v22; // eax
  FaceGenMatrix *v23; // ebx
  float *begin; // eax
  FaceGenMatrix *v25; // eax
  FaceGenMatrix *v26; // eax
  float *v27; // eax
  int v28; // ebx
  float *v29; // edi
  const FaceGenMatrix *v30; // ebp
  FaceGenMatrix *v31; // eax
  FaceGenMatrix *v32; // esi
  float *v33; // eax
  float *v34; // eax
  bool v35; // zf
  double v36; // st7
  double v37; // st6
  double v38; // st7
  unsigned int v40; // [esp+50h] [ebp-B0h]
  unsigned int v41; // [esp+50h] [ebp-B0h]
  FaceGenMatrix *v42; // [esp+6Ch] [ebp-94h]
  FaceGenMatrix *v43; // [esp+6Ch] [ebp-94h]
  FaceGenMatrix *v44; // [esp+6Ch] [ebp-94h]
  FaceGenMatrix *v45; // [esp+6Ch] [ebp-94h]
  char *v46; // [esp+70h] [ebp-90h]
  unsigned int v47; // [esp+70h] [ebp-90h]
  float v48; // [esp+70h] [ebp-90h]
  float v49; // [esp+70h] [ebp-90h]
  float scale; // [esp+70h] [ebp-90h]
  float v51; // [esp+70h] [ebp-90h]
  float v52; // [esp+70h] [ebp-90h]
  float v53; // [esp+70h] [ebp-90h]
  int v54; // [esp+70h] [ebp-90h]
  int v55; // [esp+74h] [ebp-8Ch]
  int v56; // [esp+74h] [ebp-8Ch]
  int v57; // [esp+74h] [ebp-8Ch]
  int v58; // [esp+74h] [ebp-8Ch]
  float *v59; // [esp+74h] [ebp-8Ch]
  FaceGenMatrix *v60; // [esp+78h] [ebp-88h]
  float v61; // [esp+78h] [ebp-88h]
  FaceGenMatrix *v62; // [esp+78h] [ebp-88h]
  FaceGenMatrix *v63; // [esp+78h] [ebp-88h]
  int v64; // [esp+7Ch] [ebp-84h]
  unsigned int v65; // [esp+7Ch] [ebp-84h]
  int v66; // [esp+7Ch] [ebp-84h]
  FaceGenMatrix *v67; // [esp+7Ch] [ebp-84h]
  int v68; // [esp+80h] [ebp-80h]
  float v69; // [esp+80h] [ebp-80h]
  float v70; // [esp+80h] [ebp-80h]
  int v71; // [esp+84h] [ebp-7Ch]
  FaceGenMatrix outDifference; // [esp+8Ch] [ebp-74h] BYREF
  int v74; // [esp+A4h] [ebp-5Ch]
  FaceGenMatrix v75; // [esp+ACh] [ebp-54h] BYREF
  FaceGenMatrix out; // [esp+C4h] [ebp-3Ch] BYREF
  FaceGenMatrix v77; // [esp+DCh] [ebp-24h] BYREF
  int v78; // [esp+FCh] [ebp-4h]

  v55 = 0; /*0x6ee2ae*/
  v60 = (FaceGenMatrix *)((char *)this + 0x268); /*0x6ee2b6*/
LABEL_2:
  v64 = 0; /*0x6ee2ba*/
  v42 = v60; /*0x6ee2c6*/
LABEL_3:
  v3 = v42; /*0x6ee2ca*/
  v4 = 0; /*0x6ee2ce*/
  while ( 1 ) /*0x6ee2e3*/
  {
    v40 = basisDimensions[2 * v4]; /*0x6ee2e3*/
    v3[0xFFFFFFFF].begin = (float *)1; /*0x6ee2e7*/
    v3[0xFFFFFFFF].end = (float *)v40; /*0x6ee2ee*/
    FaceGenFloatVector_ResizeFill( /*0x6ee2f1*/
      (OB_stVector4_010201A0 *)&v3[0xFFFFFFFF].capacityEnd,
      v4,
      v40,
      COERCE_UNSIGNED_INT(0.0));
    if ( !v3->rows || !((signed int)(v3->columns - v3->rows) >> 2) ) /*0x6ee301*/
      _invalid_parameter_noinfo((int)file, v4, (int)v3); /*0x6ee306*/
    if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int, int, const unsigned int))(*(_DWORD *)file + 0x10))( /*0x6ee33b*/
            file,
            v3->rows,
            4,
            basisDimensions[2 * v4])
      || !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, float **, int, int))(*(_DWORD *)file + 0x10))(
            file,
            &v3->end,
            4,
            1) )                                // Reads one 4-byte projectionOffset into record+0x1C. Matched to runtime GetControlValue addition at 0x6EDDF3.
    {
      return 0; /*0x6ee9e7*/
    }
    v5 = FaceGenMatrix_SumSquares((FaceGenMatrix *)((char *)v3 + 0xFFFFFFF4)); /*0x6ee347*/
    ++v4; /*0x6ee350*/
    v3 = (FaceGenMatrix *)((char *)v3 + 0x20); /*0x6ee353*/
    *(float *)&v3[0xFFFFFFFF].columns = 1.0 / v5;// Computes 1/sumSquares without a zero or finite check in this path; degenerate file vectors can produce nonfinite cached reciprocal. Asset reachability/gameplay impact not established. /*0x6ee359*/
    if ( v4 >= 2 ) /*0x6ee35c*/
    {
      v42 = (FaceGenMatrix *)((char *)v42 + 0x40); /*0x6ee366*/
      if ( (unsigned int)++v64 < 2 ) /*0x6ee375*/
        goto LABEL_3; /*0x6ee375*/
      v60 = (FaceGenMatrix *)((char *)v60 + 0x80); /*0x6ee37f*/
      if ( (unsigned int)++v55 >= 5 ) /*0x6ee391*/
      {
        v6 = 0; /*0x6ee397*/
        v56 = 0; /*0x6ee399*/
        v43 = 0; /*0x6ee39d*/
        while ( 2 ) /*0x6ee3a1*/
        {
          v7 = 0; /*0x6ee3a1*/
          v65 = 0; /*0x6ee3a3*/
          do /*0x6ee48b*/
          {
            if ( v7 != v56 ) /*0x6ee3ab*/
            {
              v61 = 0.0; /*0x6ee3b9*/
              v8 = 0; /*0x6ee3c9*/
              v46 = (char *)this + 0x38 * v6 + 0x38 * v7; /*0x6ee3cb*/
              v9 = v46 + 0x4E8; /*0x6ee3cf*/
              while ( 1 ) /*0x6ee3e8*/
              {
                v41 = basisDimensions[2 * v8]; /*0x6ee3e8*/
                v9[0xFFFFFFFD] = 1; /*0x6ee3ec*/
                v9[0xFFFFFFFE] = v41; /*0x6ee3f3*/
                FaceGenFloatVector_ResizeFill( /*0x6ee3f6*/
                  (OB_stVector4_010201A0 *)(v9 + 0xFFFFFFFF),
                  v8,
                  v41,
                  COERCE_UNSIGNED_INT(0.0));
                if ( !*v9 || !((v9[1] - *v9) >> 2) ) /*0x6ee406*/
                  _invalid_parameter_noinfo((int)file, v8, (int)v9); /*0x6ee40b*/
                if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, _DWORD, int, const unsigned int))(*(_DWORD *)file + 0x10))( /*0x6ee427*/
                        file,
                        *v9,
                        4,
                        basisDimensions[2 * v8]) )
                  return 0; /*0x6ee42b*/
                v10 = FaceGenMatrix_SumSquares((const FaceGenMatrix *)(v9 + 0xFFFFFFFD)); /*0x6ee433*/
                ++v8; /*0x6ee43c*/
                v9 += 6; /*0x6ee43f*/
                v61 = v10 + v61; /*0x6ee445*/
                if ( v8 >= 2 ) /*0x6ee449*/
                {
                  if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, char *, int, int))(*(_DWORD *)file + 0x10))( /*0x6ee465*/
                          file,
                          v46 + 0x510,
                          4,
                          1) )
                    return 0; /*0x6ee465*/
                  v6 = (unsigned int)v43; /*0x6ee46f*/
                  v7 = v65; /*0x6ee475*/
                  *((float *)v46 + 0x143) = 1.0 / v61; /*0x6ee47b*/
                  break; /*0x6ee47b*/
                }
              }
            }
            v65 = ++v7; /*0x6ee487*/
          }
          while ( v7 < 5 ); /*0x6ee48b*/
          ++v56; /*0x6ee491*/
          v6 += 5; /*0x6ee496*/
          v43 = (FaceGenMatrix *)v6; /*0x6ee49c*/
          if ( v6 < 0x19 ) /*0x6ee4a0*/
            continue; /*0x6ee4a0*/
          break;
        }
        v57 = 0; /*0x6ee4b2*/
        v47 = *basisDimensions + basisDimensions[2]; /*0x6ee4ba*/
        v44 = (FaceGenMatrix *)((char *)this + 0x40); /*0x6ee4c5*/
LABEL_26:
        v11 = 0; /*0x6ee4d0*/
        v12 = v44 + 0xFFFFFFFE; /*0x6ee4d6*/
        while ( 1 ) /*0x6ee4e9*/
        {
          v13 = basisDimensions[2 * v11]; /*0x6ee4e9*/
          v12[0xFFFFFFFF].begin = (float *)v13; /*0x6ee4f4*/
          v12[0xFFFFFFFF].end = (float *)1; /*0x6ee4f7*/
          FaceGenFloatVector_ResizeFill( /*0x6ee4fe*/
            (OB_stVector4_010201A0 *)&v12[0xFFFFFFFF].capacityEnd,
            v13,
            v13,
            COERCE_UNSIGNED_INT(0.0));
          if ( !v12->rows || !((signed int)(v12->columns - v12->rows) >> 2) ) /*0x6ee50e*/
            _invalid_parameter_noinfo((int)file, v13, (int)v12); /*0x6ee513*/
          if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int, int, unsigned int))(*(_DWORD *)file + 0x10))( /*0x6ee525*/
                  file,
                  v12->rows,
                  4,
                  v13) )
            return 0; /*0x6ee529*/
          ++v11; /*0x6ee52f*/
          ++v12; /*0x6ee532*/
          if ( v11 >= 2 ) /*0x6ee538*/
          {
            v44[0xFFFFFFFF].begin = (float *)v47; /*0x6ee544*/
            v44[0xFFFFFFFF].end = (float *)v47; /*0x6ee547*/
            v14 = v47 * v47; /*0x6ee54a*/
            FaceGenFloatVector_ResizeFill( /*0x6ee555*/
              (OB_stVector4_010201A0 *)&v44[0xFFFFFFFF].capacityEnd,
              (int)v44,
              v47 * v47,
              COERCE_UNSIGNED_INT(0.0));
            if ( !v44->rows || !((signed int)(v44->columns - v44->rows) >> 2) ) /*0x6ee565*/
              _invalid_parameter_noinfo((int)file, (int)v44, v14); /*0x6ee56a*/
            if ( (*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int, int, int))(*(_DWORD *)file /*0x6ee57c*/
                                                                                                  + 0x10))(
                   file,
                   v44->rows,
                   4,
                   v14) )
            {
              v15 = 0; /*0x6ee58a*/
              v16 = v44 + 1; /*0x6ee58c*/
              while ( 1 ) /*0x6ee599*/
              {
                v17 = basisDimensions[2 * v15]; /*0x6ee599*/
                v18 = v17 * v17; /*0x6ee59e*/
                v16[0xFFFFFFFF].begin = (float *)v17; /*0x6ee5a5*/
                v16[0xFFFFFFFF].end = (float *)v17; /*0x6ee5ac*/
                FaceGenFloatVector_ResizeFill( /*0x6ee5af*/
                  (OB_stVector4_010201A0 *)&v16[0xFFFFFFFF].capacityEnd,
                  v17 * v17,
                  v17 * v17,
                  COERCE_UNSIGNED_INT(0.0));
                if ( !v16->rows || !((signed int)(v16->columns - v16->rows) >> 2) ) /*0x6ee5bf*/
                  _invalid_parameter_noinfo((int)file, v18, (int)v16); /*0x6ee5c4*/
                if ( !(*(unsigned __int8 (__thiscall **)(BSFaceGenBinaryFile *, unsigned int, int, int))(*(_DWORD *)file + 0x10))( /*0x6ee5d6*/
                        file,
                        v16->rows,
                        4,
                        v18) )
                  break; /*0x6ee5d6*/
                ++v15; /*0x6ee5e0*/
                ++v16; /*0x6ee5e3*/
                if ( v15 >= 2 ) /*0x6ee5e9*/
                {
                  v44 += 5; /*0x6ee5ef*/
                  if ( (unsigned int)++v57 < 5 ) /*0x6ee5fe*/
                    goto LABEL_26; /*0x6ee5fe*/
                  v62 = (FaceGenMatrix *)((char *)this + 0x29C); /*0x6ee60e*/
                  v19 = (FaceGenMatrix *)((char *)this + 0xA6C); /*0x6ee612*/
                  v58 = 5; /*0x6ee618*/
                  do /*0x6ee831*/
                  {
                    v20 = v62; /*0x6ee620*/
                    v66 = 2; /*0x6ee624*/
                    do /*0x6ee81e*/
                    {
                      v48 = FaceGenMatrix_SumSquares((const FaceGenMatrix *)((char *)v20 + 0xFFFFFFC0)); /*0x6ee63a*/
                      v49 = sqrt(v48); /*0x6ee647*/
                      if ( v49 <= dbl_A7CD98 ) /*0x6ee662*/
                        FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0x85); /*0x6ee66e*/
                      v21 = FaceGenMatrix_DivideScalar( /*0x6ee685*/
                              (const FaceGenMatrix *)((char *)v20 + 0xFFFFFFC0),
                              &outDifference,
                              v49);
                      v78 = 0; /*0x6ee690*/
                      FaceGenMatrix_Assign(v19 + 0xFFFFFFFF, v21); /*0x6ee69b*/
                      v78 = 0xFFFFFFFF; /*0x6ee6a6*/
                      if ( outDifference.begin ) /*0x6ee6b1*/
                        FormHeapFree((unsigned int)outDifference.begin); /*0x6ee6b4*/
                      v22 = FaceGenMatrix_Transpose(v19 + 0xFFFFFFFF, &out); /*0x6ee6c3*/
                      v78 = 1; /*0x6ee6d0*/
                      v23 = FaceGenMatrix_Multiply(v20, &outDifference, v22); /*0x6ee6e0*/
                      begin = v23->begin; /*0x6ee6e2*/
                      if ( !begin || !(v23->end - begin) ) /*0x6ee6ee*/
                        _invalid_parameter_noinfo((int)v23, (int)v19, (int)&v19[0xFFFFFFFF]); /*0x6ee6f3*/
                      scale = *v23->begin; /*0x6ee703*/
                      if ( outDifference.begin ) /*0x6ee709*/
                        FormHeapFree((unsigned int)outDifference.begin); /*0x6ee70c*/
                      memset(&outDifference.begin, 0, 0xC); /*0x6ee71c*/
                      v78 = 0xFFFFFFFF; /*0x6ee728*/
                      if ( out.begin ) /*0x6ee733*/
                        FormHeapFree((unsigned int)out.begin); /*0x6ee736*/
                      v25 = FaceGenMatrix_Scale(v19 + 0xFFFFFFFF, &out, scale); /*0x6ee74d*/
                      v78 = 2; /*0x6ee75a*/
                      v26 = FaceGenMatrix_Subtract(v20, &outDifference, v25); /*0x6ee765*/
                      LOBYTE(v78) = 3; /*0x6ee76d*/
                      FaceGenMatrix_Assign(v19, v26); /*0x6ee775*/
                      if ( outDifference.begin ) /*0x6ee782*/
                        FormHeapFree((unsigned int)outDifference.begin); /*0x6ee785*/
                      memset(&outDifference.begin, 0, 0xC); /*0x6ee793*/
                      v78 = 0xFFFFFFFF; /*0x6ee79f*/
                      if ( out.begin ) /*0x6ee7aa*/
                        FormHeapFree((unsigned int)out.begin); /*0x6ee7ad*/
                      v51 = FaceGenMatrix_SumSquares(v19); /*0x6ee7bc*/
                      v52 = sqrt(v51); /*0x6ee7c9*/
                      if ( v52 <= dbl_A7CD98 ) /*0x6ee7e4*/
                        FaceGen_ReportAssertionViolation(".\\FanControls.cpp", 0x8D); /*0x6ee7f0*/
                      v53 = 1.0 / v52; /*0x6ee803*/
                      FaceGenMatrix_ScaleInPlace(v19, v53); /*0x6ee80e*/
                      v20 = (const FaceGenMatrix *)((char *)v20 + 0x20); /*0x6ee813*/
                      v19 += 2; /*0x6ee816*/
                      --v66; /*0x6ee819*/
                    }
                    while ( v66 ); /*0x6ee81e*/
                    v62 = (FaceGenMatrix *)((char *)v62 + 0x80); /*0x6ee824*/
                    --v58; /*0x6ee82c*/
                  }
                  while ( v58 ); /*0x6ee831*/
                  v27 = (float *)((char *)this + 0xC38); /*0x6ee83b*/
                  v67 = (FaceGenMatrix *)((char *)this + 0x25C); /*0x6ee847*/
                  v54 = 5; /*0x6ee84b*/
                  do /*0x6ee9d9*/
                  {
                    v45 = v67; /*0x6ee857*/
                    v59 = v27; /*0x6ee85b*/
                    v71 = 2; /*0x6ee85f*/
                    do /*0x6ee9c7*/
                    {
                      v28 = (int)(v59 + 0xFFFFFFFF); /*0x6ee86b*/
                      v59[0xFFFFFFFF] = 0.0; /*0x6ee870*/
                      *v59 = 0.0; /*0x6ee872*/
                      v59[1] = 0.0; /*0x6ee875*/
                      v59[2] = 0.0; /*0x6ee878*/
                      v29 = v59 + 0xFFFFFFFF; /*0x6ee87f*/
                      v63 = v45; /*0x6ee881*/
                      v68 = 2; /*0x6ee885*/
                      do /*0x6ee948*/
                      {
                        v30 = v45; /*0x6ee890*/
                        v74 = 2; /*0x6ee894*/
                        do /*0x6ee939*/
                        {
                          v31 = FaceGenMatrix_Transpose(v30, &v77); /*0x6ee8aa*/
                          v78 = 4; /*0x6ee8b9*/
                          v32 = FaceGenMatrix_Multiply(v63, &v75, v31); /*0x6ee8c9*/
                          v33 = v32->begin; /*0x6ee8cb*/
                          if ( !v33 || !(v32->end - v33) ) /*0x6ee8d7*/
                            _invalid_parameter_noinfo(v28, (int)v29, (int)v32); /*0x6ee8dc*/
                          v34 = v75.begin; /*0x6ee8e8*/
                          v35 = v75.begin == 0; /*0x6ee8ee*/
                          *v29 = *v29 + *v32->begin; /*0x6ee8f0*/
                          if ( !v35 ) /*0x6ee8f2*/
                            FormHeapFree((unsigned int)v34); /*0x6ee8f5*/
                          memset(&v75.begin, 0, 0xC); /*0x6ee908*/
                          v78 = 0xFFFFFFFF; /*0x6ee914*/
                          if ( v77.begin ) /*0x6ee91f*/
                            FormHeapFree((unsigned int)v77.begin); /*0x6ee922*/
                          ++v29; /*0x6ee92f*/
                          v30 = (const FaceGenMatrix *)((char *)v30 + 0x40); /*0x6ee932*/
                          --v74; /*0x6ee935*/
                        }
                        while ( v74 ); /*0x6ee939*/
                        v63 = (FaceGenMatrix *)((char *)v63 + 0x40); /*0x6ee93f*/
                        --v68; /*0x6ee944*/
                      }
                      while ( v68 ); /*0x6ee948*/
                      v45 = (FaceGenMatrix *)((char *)v45 + 0x20); /*0x6ee955*/
                      v36 = v59[2] * *(float *)v28; /*0x6ee95a*/
                      v27 = v59 + 4; /*0x6ee95c*/
                      v35 = v71-- == 1; /*0x6ee95f*/
                      v37 = v59[1] * *v59; /*0x6ee966*/
                      v59 = v27; /*0x6ee969*/
                      v69 = v36 - v37; /*0x6ee96f*/
                      v70 = 1.0 / v69; /*0x6ee97b*/
                      *(float *)&outDifference.rows = v27[0xFFFFFFFE] * v70; /*0x6ee98c*/
                      *(float *)&outDifference.columns = -v27[0xFFFFFFFC] * v70; /*0x6ee99b*/
                      *(float *)&outDifference.allocator08 = -v27[0xFFFFFFFD] * v70; /*0x6ee9a6*/
                      v38 = v70 * *(float *)v28; /*0x6ee9aa*/
                      *(_DWORD *)v28 = outDifference.rows; /*0x6ee9ac*/
                      *(_DWORD *)(v28 + 4) = outDifference.columns; /*0x6ee9b2*/
                      *(float *)&outDifference.begin = v38; /*0x6ee9b9*/
                      *(_DWORD *)(v28 + 8) = outDifference.allocator08; /*0x6ee9bd*/
                      *(_DWORD *)(v28 + 0xC) = outDifference.begin; /*0x6ee9c4*/
                    }
                    while ( !v35 ); /*0x6ee9c7*/
                    v67 = (FaceGenMatrix *)((char *)v67 + 0x80); /*0x6ee9cd*/
                    --v54; /*0x6ee9d5*/
                  }
                  while ( v54 ); /*0x6ee9d9*/
                  *(_BYTE *)this = 1; /*0x6ee9e3*/
                  return 1; /*0x6eea00*/
                }
              }
            }
            return 0; /*0x6ee5da*/
          }
        }
      }
      goto LABEL_2; /*0x6ee391*/
    }
  }
}
