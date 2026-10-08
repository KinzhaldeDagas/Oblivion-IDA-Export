// CSpeedTreeRT::ParseTextureCoordInfo (top-level token 10000). Allocates the 0x54 embedded-texcoord object; parses branch/leaf/frond 8-float coordinate tables, composite texture filename, and horizontal/360 billboard flags through terminator 10001. Leaf V coordinates honor the global texture-flip flag.
void __thiscall CSpeedTreeRT__ParseTextureCoordInfo(OB_CSpeedTreeRT_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int v3; // eax
  int v4; // ebx
  int Dword_010201A0; // eax
  int v6; // edx
  signed int branchMapCount; // eax
  bool v8; // cc
  int v9; // ebp
  int v10; // ebx
  signed int leafMapCount; // eax
  int v12; // ebp
  float *v13; // eax
  signed int frondMapCount; // eax
  int v15; // ebp
  int v16; // ebx
  _DWORD *v17; // eax
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // ecx
  unsigned int v19; // ebp
  int byteBufferBegin; // ecx
  unsigned int v21; // ebp
  int v22; // ecx
  int v23[6]; // [esp-1Ch] [ebp-104h] BYREF
  rsize_t v24; // [esp-4h] [ebp-ECh]
  int *v25; // [esp+14h] [ebp-D4h]
  _BYTE v26[4]; // [esp+18h] [ebp-D0h] BYREF
  unsigned int v27; // [esp+1Ch] [ebp-CCh]
  int v28; // [esp+2Ch] [ebp-BCh]
  unsigned int v29; // [esp+30h] [ebp-B8h]
  int v30; // [esp+50h] [ebp-98h] BYREF
  int v31; // [esp+54h] [ebp-94h]
  int v32; // [esp+64h] [ebp-84h]
  int v33; // [esp+68h] [ebp-80h]
  char v34[40]; // [esp+94h] [ebp-54h] BYREF
  char v35[4]; // [esp+BCh] [ebp-2Ch] BYREF
  unsigned int v36; // [esp+C0h] [ebp-28h]
  unsigned int v37; // [esp+D4h] [ebp-14h]
  int v38; // [esp+E4h] [ebp-4h]

  v3 = FormHeapAlloc(0x54u); /*0x789916*/
  v4 = 0; /*0x78991b*/
  if ( v3 ) /*0x789922*/
  {
    *(_DWORD *)v3 = 0; /*0x789926*/
    *(_DWORD *)(v3 + 4) = 0; /*0x789928*/
    *(_DWORD *)(v3 + 8) = 0; /*0x78992b*/
    *(_DWORD *)(v3 + 0xC) = 0; /*0x78992e*/
    *(_DWORD *)(v3 + 0x10) = 0; /*0x789931*/
    *(_DWORD *)(v3 + 0x14) = 0; /*0x789934*/
    *(_DWORD *)(v3 + 0x30) = 0xF; /*0x789937*/
    *(_DWORD *)(v3 + 0x2C) = 0; /*0x78993e*/
    *(_BYTE *)(v3 + 0x1C) = 0; /*0x789941*/
    *(float *)(v3 + 0x34) = 1.0; /*0x789944*/
    *(float *)(v3 + 0x38) = 1.0; /*0x789947*/
    *(float *)(v3 + 0x3C) = 0.0; /*0x78994c*/
    *(float *)(v3 + 0x44) = 0.0; /*0x78994f*/
    *(float *)(v3 + 0x48) = 0.0; /*0x789952*/
    *(float *)(v3 + 0x50) = 0.0; /*0x789955*/
    *(float *)(v3 + 0x40) = 1.0; /*0x789958*/
    *(float *)(v3 + 0x4C) = 1.0; /*0x78995b*/
  }
  else
  {
    v3 = 0; /*0x789960*/
  }
  this->embeddedTexcoords = (OB_CSpeedTreeRT_SEmbeddedTexCoords *)v3; /*0x789964*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789967*/
  do
  {
    switch ( Dword_010201A0 )
    {
      case 0x2712:
        this->embeddedTexcoords->branchMapCount = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x78998f*/
        branchMapCount = this->embeddedTexcoords->branchMapCount; /*0x789994*/
        if ( branchMapCount > 0 )
        {
          this->embeddedTexcoords->branchMapTexcoords8 = (float *)FormHeapAlloc(
                                                                    (unsigned __int64)(unsigned int)(8 * branchMapCount) >> 0x1E != 0
                                                                  ? 0xFFFFFFFF
                                                                  : 0x20 * branchMapCount);
          v8 = (signed int)this->embeddedTexcoords->branchMapCount <= 0; /*0x7899c6*/
          v25 = 0; /*0x7899c8*/
          if ( !v8 ) /*0x7899cc*/
          {
            do /*0x789a08*/
            {
              v9 = 8 * (_DWORD)v25; /*0x7899d6*/
              v10 = 8; /*0x7899d9*/
              do /*0x7899f6*/
              {
                this->embeddedTexcoords->branchMapTexcoords8[v9++] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7899ed*/
                --v10; /*0x7899f3*/
              }
              while ( v10 ); /*0x7899f6*/
              v8 = (int)v25 + 1 < (signed int)this->embeddedTexcoords->branchMapCount; /*0x789a02*/
              v25 = (int *)((char *)v25 + 1); /*0x789a04*/
            }
            while ( v8 ); /*0x789a08*/
            v4 = 0; /*0x789a0a*/
          }
        }
        break; /*0x789a0c*/
      case 0x2713:
        this->embeddedTexcoords->billboardMapCount = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789a1b*/
        leafMapCount = this->embeddedTexcoords->billboardMapCount; /*0x789a21*/
        if ( leafMapCount > 0 )
        {
          this->embeddedTexcoords->billboardMapTexcoords8 = (float *)FormHeapAlloc(
                                                                       (unsigned __int64)(unsigned int)(8 * leafMapCount) >> 0x1E != 0
                                                                     ? 0xFFFFFFFF
                                                                     : 0x20 * leafMapCount);
          v8 = (signed int)this->embeddedTexcoords->billboardMapCount <= 0; /*0x789a54*/
          v25 = 0; /*0x789a57*/
          if ( !v8 ) /*0x789a5b*/
          {
            do /*0x789ac0*/
            {
              v12 = 8 * (_DWORD)v25; /*0x789a65*/
              do /*0x789aab*/
              {
                this->embeddedTexcoords->billboardMapTexcoords8[v12] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x789a77*/
                if ( v4 % 2 ) /*0x789a86*/
                {
                  if ( CSpeedTreeRT__s_textureFlip ) /*0x789a89*/
                  {
                    v13 = &this->embeddedTexcoords->billboardMapTexcoords8[v12]; /*0x789a9b*/
                    *v13 = -*v13; /*0x789aa0*/
                  }
                }
                ++v4; /*0x789aa2*/
                ++v12; /*0x789aa5*/
              }
              while ( v4 < 8 ); /*0x789aab*/
              v4 = 0; /*0x789ab7*/
              v8 = (int)v25 + 1 < (signed int)this->embeddedTexcoords->billboardMapCount; /*0x789ab9*/
              v25 = (int *)((char *)v25 + 1); /*0x789abc*/
            }
            while ( v8 ); /*0x789ac0*/
          }
        }
        break; /*0x789ac0*/
      case 0x2714:
        this->embeddedTexcoords->frondMapCount = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789ad1*/
        frondMapCount = this->embeddedTexcoords->frondMapCount; /*0x789ad7*/
        if ( frondMapCount > 0 )
        {
          this->embeddedTexcoords->frondMapTexcoords8 = (float *)FormHeapAlloc(
                                                                   (unsigned __int64)(unsigned int)(8 * frondMapCount) >> 0x1E != 0
                                                                 ? 0xFFFFFFFF
                                                                 : 0x20 * frondMapCount);
          v8 = (signed int)this->embeddedTexcoords->frondMapCount <= 0; /*0x789b0a*/
          v25 = 0; /*0x789b0d*/
          if ( !v8 ) /*0x789b11*/
          {
            do /*0x789b4c*/
            {
              v15 = 8 * (_DWORD)v25; /*0x789b1b*/
              v16 = 8; /*0x789b1e*/
              do /*0x789b39*/
              {
                this->embeddedTexcoords->frondMapTexcoords8[v15++] = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x789b30*/
                --v16; /*0x789b36*/
              }
              while ( v16 ); /*0x789b39*/
              v8 = (int)v25 + 1 < (signed int)this->embeddedTexcoords->frondMapCount; /*0x789b45*/
              v25 = (int *)((char *)v25 + 1); /*0x789b48*/
            }
            while ( v8 ); /*0x789b4c*/
            v4 = 0; /*0x789b4e*/
          }
        }
        break; /*0x789b50*/
      case 0x2715:
        v25 = v23; /*0x789b5a*/
        OB_CTreeFileAccess_ReadString_010201A0(file, v6, v23); /*0x789b61*/
        OB_stString28_CopyCtorConsumeTemporary_010201A0((int)v35, v23[0], v23[1], v23[2], v23[3], v23[4], v23[5], v24); /*0x789b6d*/
        v38 = 0; /*0x789b7e*/
        v17 = (_DWORD *)OB_IdvNoPath_010201A0(v35, (int)v26); /*0x789b85*/
        embeddedTexcoords = this->embeddedTexcoords; /*0x789b8a*/
        LOBYTE(v38) = 1; /*0x789b94*/
        OB_stString28_AssignSubstring_010201A0( /*0x789b9c*/
          (int)embeddedTexcoords->compositeTextureFilenameString,
          v17,
          0,
          0xFFFFFFFF);
        if ( v29 >= 0x10 ) /*0x789baa*/
          FormHeapFree(v27); /*0x789bb1*/
        v29 = 0xF; /*0x789bc0*/
        v28 = 0; /*0x789bc8*/
        LOBYTE(v27) = 0; /*0x789bcc*/
        v38 = 0xFFFFFFFF; /*0x789bd1*/
        if ( v37 >= 0x10 ) /*0x789bdc*/
          FormHeapFree(v36); /*0x789be6*/
        break; /*0x789bee*/
      case 0x2716:
        v19 = file->cursorOffset++; /*0x789bf0*/
        byteBufferBegin = file->byteBufferBegin; /*0x789bf7*/
        if ( !byteBufferBegin || v19 >= file->byteBufferEnd - byteBufferBegin ) /*0x789c05*/
          _invalid_parameter_noinfo(0, (int)file, (int)this); /*0x789c07*/
        this->flagHorizontalBillboard = *(_BYTE *)(file->byteBufferBegin + v19) != 0; /*0x789c16*/
        break; /*0x789c19*/
      case 0x2717:
        v21 = file->cursorOffset++; /*0x789c1b*/
        v22 = file->byteBufferBegin; /*0x789c22*/
        if ( !v22 || v21 >= file->byteBufferEnd - v22 ) /*0x789c30*/
          _invalid_parameter_noinfo(0, (int)file, (int)this); /*0x789c32*/
        this->flag360Billboard = *(_BYTE *)(file->byteBufferBegin + v21) != 0; /*0x789c41*/
        break; /*0x789c41*/
      default:
        JUMPOUT(0x789CDB); /*0x789cdb*/
    }
    if ( OB_CTreeFileAccess_IsEOF_010201A0(file) ) /*0x789c46*/
    {
      LODWORD(v24) = 0x3D; /*0x789c8b*/
      v33 = 0xF; /*0x789c96*/
      v32 = 0; /*0x789c9e*/
      LOBYTE(v31) = 0; /*0x789ca2*/
      OB_stString28_AssignBytes_010201A0( /*0x789ca7*/
        &v30,
        (int)file,
        "premature end of file reached parsing texture coordinate info",
        v24);
      v38 = 3; /*0x789cb9*/
      OB_IdvFileError_Ctor_010201A0((std::exception *)v34, &v30, 0); /*0x789cc4*/
      ThrowException__((DWORD)v34, &_TI3_AVIdvFileError__); /*0x789cd6*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x789c51*/
  }
  while ( Dword_010201A0 != 0x2711 );
}
