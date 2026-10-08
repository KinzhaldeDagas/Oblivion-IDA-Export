// Oblivion SIdvLeafInfo::Parse: token 1009 clears/resizes the compact 0x54 leaf-texture vector, parses tokens 4000-4007 into a temporary, and deep-assigns each indexed slot. Oblivion is authoritative; later RT mesh fields are absent.
void __thiscall OB_SIdvLeafInfo_Parse_010201A0(OB_SIdvLeafInfo_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  unsigned int v2; // edi
  OB_SIdvLeafInfo_010201A0 *v3; // ebp
  int Dword_010201A0; // eax
  unsigned int v5; // eax
  unsigned int end; // edi
  OB_stVector_SIdvLeafTexture_010201A0 *p_leafTextures; // ebp
  bool v8; // cc
  OB_SIdvLeafTexture_010201A0 *begin; // ebp
  signed int v10; // ebp
  double v11; // st7
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  float *Vec3_010201A0; // eax
  _DWORD *v16; // eax
  float *v17; // eax
  float *v18; // eax
  float *v19; // eax
  OB_SIdvLeafTexture_010201A0 *v20; // eax
  unsigned int v21; // ecx
  int byteBufferBegin; // edx
  int v23; // ecx
  _BYTE v24[88]; // [esp-54h] [ebp-1F0h] BYREF
  _BYTE *v25; // [esp+14h] [ebp-188h]
  OB_SIdvLeafInfo_010201A0 *v26; // [esp+18h] [ebp-184h]
  signed int v27; // [esp+1Ch] [ebp-180h]
  unsigned int newSize; // [esp+20h] [ebp-17Ch]
  int v29; // [esp+24h] [ebp-178h] BYREF
  unsigned int v30; // [esp+28h] [ebp-174h]
  int v31; // [esp+38h] [ebp-164h]
  unsigned int v32; // [esp+3Ch] [ebp-160h]
  int outSmallString; // [esp+40h] [ebp-15Ch] BYREF
  unsigned int v34; // [esp+44h] [ebp-158h]
  int v35; // [esp+54h] [ebp-148h]
  unsigned int v36; // [esp+58h] [ebp-144h]
  char v37[4]; // [esp+5Ch] [ebp-140h] BYREF
  unsigned int v38; // [esp+60h] [ebp-13Ch]
  int v39; // [esp+70h] [ebp-12Ch]
  unsigned int v40; // [esp+74h] [ebp-128h]
  int v41; // [esp+78h] [ebp-124h] BYREF
  char v42; // [esp+7Ch] [ebp-120h]
  int v43; // [esp+8Ch] [ebp-110h]
  int v44; // [esp+90h] [ebp-10Ch]
  int v45; // [esp+94h] [ebp-108h] BYREF
  char v46; // [esp+98h] [ebp-104h]
  int v47; // [esp+A8h] [ebp-F4h]
  int v48; // [esp+ACh] [ebp-F0h]
  OB_stVectorIterator_SIdvLeafTexture_010201A0 result; // [esp+B0h] [ebp-ECh] BYREF
  float v50[3]; // [esp+B8h] [ebp-E4h] BYREF
  float v51[3]; // [esp+C4h] [ebp-D8h] BYREF
  float v52[3]; // [esp+D0h] [ebp-CCh] BYREF
  float outVec3[13]; // [esp+DCh] [ebp-C0h] BYREF
  _BYTE v54[40]; // [esp+110h] [ebp-8Ch] BYREF
  OB_SIdvLeafTexture_010201A0 source; // [esp+138h] [ebp-64h] BYREF
  int v56; // [esp+198h] [ebp-4h]

  v3 = this; /*0x7a6062*/
  v26 = this; /*0x7a6066*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a606a*/
  do /*0x7a6545*/
  {
    if ( Dword_010201A0 > 0xBB8 ) /*0x7a6076*/
    {
      switch ( Dword_010201A0 ) /*0x7a6499*/
      {
        case 0xBB9: /*0x7a6499*/
          v3->blossomLevel = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a64a7*/
          goto LABEL_55; /*0x7a64aa*/
        case 0xBBA: /*0x7a6499*/
          v3->blossomWeighting = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a64b6*/
          goto LABEL_55; /*0x7a64b9*/
        case 0xBBB: /*0x7a6499*/
          v21 = file->cursorOffset++;           // File_Leaf_ColorShift (3003): Oblivion consumes exactly one raw bool byte and discards it; no vec3 payload. /*0x7a64bb*/
          goto LABEL_43; /*0x7a64c0*/
        case 0xBBC: /*0x7a6499*/
        case 0xBBD: /*0x7a6499*/
          OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a64db*/
          goto LABEL_55; /*0x7a64e2*/
        case 0xBBE: /*0x7a6499*/
          v21 = file->cursorOffset++;           // File_Leaf_Lit (3006): Oblivion consumes exactly one raw bool byte through the same bounds path as 3003. /*0x7a651a*/
LABEL_43:
          byteBufferBegin = file->byteBufferBegin; /*0x7a64c2*/
          if ( !byteBufferBegin || v21 >= file->byteBufferEnd - byteBufferBegin ) /*0x7a64d0*/
            _invalid_parameter_noinfo(0, v2, (int)file); /*0x7a64d2*/
          goto LABEL_55; /*0x7a64d7*/
        case 0xBBF: /*0x7a6499*/
          v3->spacingTolerance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a652a*/
          goto LABEL_55; /*0x7a652d*/
        case 0xBC0: /*0x7a6499*/
          v3->collisionType = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a6536*/
          goto LABEL_55; /*0x7a6536*/
        case 0xBC1: /*0x7a6499*/
          v2 = file->cursorOffset++;            // File_Leaf_Dimming (3009): Oblivion consumes one raw bool byte and stores the nonzero value into SIdvLeafInfo+0x00. /*0x7a64e4*/
          v23 = file->byteBufferBegin; /*0x7a64eb*/
          if ( !v23 || v2 >= file->byteBufferEnd - v23 ) /*0x7a64f9*/
            _invalid_parameter_noinfo(0, v2, (int)file); /*0x7a64fb*/
          v3->dimmingEnabled = *(_BYTE *)(v2 + file->byteBufferBegin) != 0; /*0x7a6509*/
          goto LABEL_55; /*0x7a650c*/
        case 0xBC2: /*0x7a6499*/
          v3->dimmingScalar = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a6515*/
          goto LABEL_55; /*0x7a6518*/
        default:
          goto LABEL_58;
      }
    }
    if ( Dword_010201A0 == 0xBB8 ) /*0x7a607c*/
    {
      v3->blossomDistance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a6483*/
    }
    else
    {
      if ( Dword_010201A0 != 0x3F1 ) /*0x7a6087*/
      {
LABEL_58:
        *(_DWORD *)&v24[0x50] = 0x22; /*0x7a65cc*/
        v44 = 0xF; /*0x7a65da*/
        v43 = 0; /*0x7a65e5*/
        v42 = 0; /*0x7a65ec*/
        OB_stString28_AssignBytes_010201A0(&v41, v2, "malformed general leaf information", *(rsize_t *)&v24[0x50]); /*0x7a65f3*/
        v56 = 5; /*0x7a6605*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v54, &v41, 0); /*0x7a6610*/
        ThrowException__((DWORD)v54, &_TI3_AVIdvFileError__); /*0x7a6622*/
      }
      OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a608f*/
      v5 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-31 texture-index pass: stock File_LeafLevelCount drives compact SIdvLeafTexture vector length; plugin maps retained 60003/70002 map-bank collectionIndex to this vector/property textureIndex. /*0x7a6096*/
      end = (unsigned int)v3->leafTextures.end; /*0x7a609b*/
      p_leafTextures = &v3->leafTextures; /*0x7a609e*/
      v8 = p_leafTextures->begin <= (OB_SIdvLeafTexture_010201A0 *)end; /*0x7a60a1*/
      newSize = v5; /*0x7a60a4*/
      if ( !v8 ) /*0x7a60a8*/
        _invalid_parameter_noinfo(0, end, (int)file); /*0x7a60aa*/
      begin = p_leafTextures->begin; /*0x7a60b3*/
      if ( begin > v26->leafTextures.end ) /*0x7a60bc*/
        _invalid_parameter_noinfo(0, end, (int)file); /*0x7a60be*/
      *(_DWORD *)&v24[0x50] = end; /*0x7a60c3*/
      v2 = (unsigned int)v26; /*0x7a60c4*/
      OB_stVector_SIdvLeafTexture_EraseRange_010201A0( /*0x7a60d6*/
        &v26->leafTextures,
        &result,
        &v26->leafTextures,
        begin,
        &v26->leafTextures,
        *(OB_SIdvLeafTexture_010201A0 **)&v24[0x50]);// Token 1009 first erases the complete prior compact leaf-texture range while retaining vector allocation.
      v25 = v24; /*0x7a60e0*/
      OB_SIdvLeafTexture_ctor_010201A0((OB_SIdvLeafTexture_010201A0 *)v24); /*0x7a60e4*/
      v10 = newSize; /*0x7a60e9*/
      OB_stVector_SIdvLeafTexture_ResizeFill_010201A0( /*0x7a60f1*/
        (OB_stVector_SIdvLeafTexture_010201A0 *)(v2 + 0x10),
        newSize,
        *(OB_SIdvLeafTexture_010201A0 *)v24);   // Resize leafTextures to File_LeafLevelCount using deep copies of the freshly constructed 0x54 default record.
      v27 = 0; /*0x7a60f8*/
      if ( v10 > 0 ) /*0x7a60fc*/
      {
        v25 = 0; /*0x7a6102*/
        do /*0x7a6466*/
        {
          source.baseColor[0] = flt_A524B0; /*0x7a611b*/
          source.blossomFlag = 0; /*0x7a6122*/
          source.baseColor[1] = source.baseColor[0]; /*0x7a6129*/
          source.filename.capacity = 0xF; /*0x7a6130*/
          source.baseColor[2] = source.baseColor[0]; /*0x7a6137*/
          source.filename.size = 0; /*0x7a613e*/
          v11 = flt_A3D9A4; /*0x7a6145*/
          source.filename.storage.inlineData[0] = 0; /*0x7a614b*/
          source.colorVariance = v11; /*0x7a6152*/
          source.textureOrigin[0] = kHeadBodyNormalMatchRadius; /*0x7a615f*/
          source.textureOrigin[1] = 1.0; /*0x7a6168*/
          source.textureOrigin[2] = 0.0; /*0x7a6171*/
          source.textureSize[0] = flt_A8C958; /*0x7a617e*/
          source.textureSize[1] = source.textureSize[0]; /*0x7a6185*/
          source.textureSize[2] = 0.0; /*0x7a618c*/
          source.sizeUsed[0] = flt_A31C80; /*0x7a6199*/
          source.sizeUsed[1] = source.sizeUsed[0]; /*0x7a61a0*/
          source.sizeUsed[2] = 0.0; /*0x7a61a7*/
          v56 = 0; /*0x7a61b0*/
          OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a61b7*/
          v12 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a61be*/
          do /*0x7a63e4*/
          {
            switch ( v12 ) /*0x7a61de*/
            {
              case 0xFA0: /*0x7a61de*/
                v2 = file->cursorOffset++; /*0x7a61e5*/
                v14 = file->byteBufferBegin; /*0x7a61ec*/
                if ( !v14 || v2 >= file->byteBufferEnd - v14 ) /*0x7a61fa*/
                  _invalid_parameter_noinfo(0, v2, (int)file); /*0x7a61fc*/
                source.blossomFlag = *(_BYTE *)(v2 + file->byteBufferBegin) != 0; /*0x7a620a*/
                break; /*0x7a6211*/
              case 0xFA1: /*0x7a61de*/
                Vec3_010201A0 = OB_CTreeFileAccess_ReadVec3_010201A0(file, outVec3); /*0x7a6220*/
                source.baseColor[0] = *Vec3_010201A0; /*0x7a6227*/
                source.baseColor[1] = Vec3_010201A0[1]; /*0x7a6231*/
                source.baseColor[2] = Vec3_010201A0[2]; /*0x7a623b*/
                break; /*0x7a6242*/
              case 0xFA2: /*0x7a61de*/
                source.colorVariance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a624e*/
                break; /*0x7a6255*/
              case 0xFA3: /*0x7a61de*/
                OB_CTreeFileAccess_ReadString_010201A0(file, v13, &outSmallString); /*0x7a6261*/
                LOBYTE(v56) = 1; /*0x7a6272*/
                v32 = 0xF; /*0x7a627a*/
                v31 = 0; /*0x7a627e*/
                LOBYTE(v30) = 0; /*0x7a6282*/
                OB_stString28_AssignSubstring_010201A0((int)&v29, &outSmallString, 0, 0xFFFFFFFF); /*0x7a6286*/
                v2 = 0x10; /*0x7a628b*/
                if ( v36 >= 0x10 ) /*0x7a6294*/
                  FormHeapFree(v34); /*0x7a629b*/
                v36 = 0xF; /*0x7a62a3*/
                v35 = 0; /*0x7a62a7*/
                LOBYTE(v34) = 0; /*0x7a62ab*/
                LOBYTE(v56) = 2; /*0x7a62be*/
                OB_stString28_AssignSubstring_010201A0((int)&source.filename, &v29, 0, 0xFFFFFFFF); /*0x7a62c6*/
                LOBYTE(v56) = 0; /*0x7a62cf*/
                if ( v32 >= 0x10 ) /*0x7a62d6*/
                  FormHeapFree(v30); /*0x7a62dd*/
                v32 = 0xF; /*0x7a62f1*/
                v31 = 0; /*0x7a62f5*/
                LOBYTE(v30) = 0; /*0x7a62f9*/
                v16 = (_DWORD *)OB_IdvNoPath_010201A0((char *)&source.filename, (int)v37); /*0x7a62fd*/
                LOBYTE(v56) = 3; /*0x7a630d*/
                OB_stString28_AssignSubstring_010201A0((int)&source.filename, v16, 0, 0xFFFFFFFF); /*0x7a6315*/
                LOBYTE(v56) = 0; /*0x7a631e*/
                if ( v40 >= 0x10 ) /*0x7a6325*/
                  FormHeapFree(v38); /*0x7a632c*/
                v40 = 0xF; /*0x7a6334*/
                v39 = 0; /*0x7a6338*/
                LOBYTE(v38) = 0; /*0x7a633c*/
                break; /*0x7a6340*/
              case 0xFA4: /*0x7a61de*/
                v17 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v52); /*0x7a634f*/
                source.textureOrigin[0] = *v17; /*0x7a6356*/
                source.textureOrigin[1] = v17[1]; /*0x7a6360*/
                source.textureOrigin[2] = v17[2]; /*0x7a636a*/
                break; /*0x7a6371*/
              case 0xFA5: /*0x7a61de*/
                v18 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v51); /*0x7a637d*/
                source.textureSize[0] = *v18; /*0x7a6384*/
                source.textureSize[1] = v18[1]; /*0x7a638e*/
                source.textureSize[2] = v18[2]; /*0x7a6398*/
                break; /*0x7a639f*/
              case 0xFA6: /*0x7a61de*/
                v19 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v50); /*0x7a63ab*/
                source.sizeUsed[0] = *v19; /*0x7a63b2*/
                source.sizeUsed[1] = v19[1]; /*0x7a63bc*/
                source.sizeUsed[2] = v19[2]; /*0x7a63c6*/
                break; /*0x7a63cd*/
              case 0xFA7: /*0x7a61de*/
                OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a63d1*/
                break; /*0x7a63d1*/
              default:
                *(_DWORD *)&v24[0x50] = 0x21;   // Parser switch default for an unknown single-leaf token. This block uses the live SIdvLeafInfo::Parse frame and throws 'malformed single leaf information'; it is a parser tail chunk, not a standalone function. /*0x7a6575*/
                v48 = 0xF; /*0x7a6583*/
                v47 = 0; /*0x7a658a*/
                v46 = 0; /*0x7a6591*/
                OB_stString28_AssignBytes_010201A0( /*0x7a6598*/
                  &v45,
                  v2,
                  "malformed single leaf information",
                  *(rsize_t *)&v24[0x50]);
                LOBYTE(v56) = 4; /*0x7a65ad*/
                OB_IdvFileError_Ctor_010201A0((std::exception *)&outVec3[3], &v45, 0); /*0x7a65b5*/
                ThrowException__((DWORD)&outVec3[3], &_TI3_AVIdvFileError__); /*0x7a65c7*/
            }
            v12 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a63da*/
          }
          while ( v12 != 0x3F0 ); /*0x7a63e4*/
          v20 = v26->leafTextures.begin; /*0x7a63ee*/
          v2 = (unsigned int)&v26->leafTextures; /*0x7a63f1*/
          if ( !v20 || v27 >= (unsigned int)(v26->leafTextures.end - v20) ) /*0x7a6412*/
            _invalid_parameter_noinfo(0, v2, (int)file); /*0x7a6414*/
          OB_SIdvLeafTexture_CopyAssign_010201A0((OB_SIdvLeafTexture_010201A0 *)&v25[*(_DWORD *)(v2 + 4)], &source);// Deep-assign the fully parsed temporary SIdvLeafTexture into leafTextures[leafTextureIndex]. /*0x7a6428*/
          v56 = 0xFFFFFFFF; /*0x7a6435*/
          if ( source.filename.capacity >= 0x10 ) /*0x7a6440*/
            FormHeapFree((unsigned int)source.filename.storage.heapData); /*0x7a644a*/
          v25 += 0x54; /*0x7a6456*/
          ++v27; /*0x7a6462*/
        }
        while ( v27 < (int)newSize ); /*0x7a6466*/
      }
      OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a646e*/
      v3 = v26; /*0x7a6473*/
    }
LABEL_55:
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a6539*/
  }
  while ( Dword_010201A0 != 0x3ED ); /*0x7a6545*/
}
