// Oblivion CTreeEngine tree-info parser. Maps the 1002-family tokens to the typed CTreeEngine fields and dispatches nested branch-info parsing.
void __thiscall OB_CTreeEngine_ParseTreeInfo_010201A0(OB_CTreeEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int Dword_010201A0; // eax
  int v4; // edx
  OB_stString28_010201A0 *v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ecx
  int byteBufferBegin; // edx
  OB_stString28_010201A0 v9; // [esp-1Ch] [ebp-BCh] BYREF
  OB_stString28_010201A0 *v10; // [esp+14h] [ebp-8Ch]
  OB_stString28_010201A0 source; // [esp+18h] [ebp-88h] BYREF
  OB_stString28_010201A0 result; // [esp+34h] [ebp-6Ch] BYREF
  OB_stString28_010201A0 details; // [esp+50h] [ebp-50h] BYREF
  OB_IdvFileError_010201A0 v14; // [esp+6Ch] [ebp-34h] BYREF
  int v15; // [esp+9Ch] [ebp-4h]

  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4988*/
  do /*0x7a4af1*/
  {
    if ( Dword_010201A0 > 0x7D0 ) /*0x7a4995*/
    {
      switch ( Dword_010201A0 ) /*0x7a4a78*/
      {
        case 0x7D1: /*0x7a4a78*/
          this->treeFarLodDistance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a4aa3*/
          goto LABEL_21; /*0x7a4aa6*/
        case 0x7D2: /*0x7a4a78*/
          v7 = file->cursorOffset++; /*0x7a4ab1*/
          byteBufferBegin = file->byteBufferBegin; /*0x7a4ab8*/
          if ( !byteBufferBegin || v7 >= file->byteBufferEnd - byteBufferBegin ) /*0x7a4ac6*/
            _invalid_parameter_noinfo(); /*0x7a4ac8*/
          goto LABEL_21; /*0x7a4acd*/
        case 0x7D3: /*0x7a4a78*/
          this->treeNearLodDistance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a4a97*/
          goto LABEL_21; /*0x7a4a9a*/
        case 0x7D4: /*0x7a4a78*/
          OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4aaa*/
          goto LABEL_21; /*0x7a4aaf*/
        case 0x7D5: /*0x7a4a78*/
          v6 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4a81*/
          OB_CTreeEngine_SetSeed_010201A0(this, v6); /*0x7a4a89*/
          goto LABEL_21; /*0x7a4a8e*/
        case 0x7D6: /*0x7a4a78*/
          this->treeSizeScalar = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a4ad6*/
          goto LABEL_21; /*0x7a4ad9*/
        case 0x7D7: /*0x7a4a78*/
          this->treeSizeVariance = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x7a4ae2*/
          goto LABEL_21; /*0x7a4ae2*/
        default:
          goto LABEL_23;
      }
    }
    if ( Dword_010201A0 == 0x7D0 ) /*0x7a499b*/
    {
      v10 = &v9; /*0x7a49ba*/
      OB_CTreeFileAccess_ReadString_010201A0(file, v4, &v9); /*0x7a49c1*/
      OB_stString28_CopyCtorConsumeTemporary_010201A0(&source, v9); /*0x7a49ca*/
      v15 = 0; /*0x7a49dc*/
      OB_stString28_AssignSubstring_010201A0( /*0x7a49e3*/
        (OB_stString28_010201A0 *)this->branchTextureFilenameSmallString,
        &source,
        0,
        0xFFFFFFFF);
      v15 = 0xFFFFFFFF; /*0x7a49ed*/
      if ( source.capacity >= 0x10 ) /*0x7a49f8*/
        FormHeapFree((unsigned int)source.storage.heapData); /*0x7a49ff*/
      source.capacity = 0xF; /*0x7a4a0e*/
      source.size = 0; /*0x7a4a16*/
      source.storage.inlineData[0] = 0; /*0x7a4a1a*/
      v5 = OB_IdvNoPath_010201A0((const OB_stString28_010201A0 *)this->branchTextureFilenameSmallString, &result); /*0x7a4a1e*/
      v15 = 1; /*0x7a4a29*/
      OB_stString28_AssignSubstring_010201A0( /*0x7a4a34*/
        (OB_stString28_010201A0 *)this->branchTextureFilenameSmallString,
        v5,
        0,
        0xFFFFFFFF);
      v15 = 0xFFFFFFFF; /*0x7a4a3e*/
      if ( result.capacity >= 0x10 ) /*0x7a4a49*/
        FormHeapFree((unsigned int)result.storage.heapData); /*0x7a4a50*/
      result.capacity = 0xF; /*0x7a4a58*/
      result.size = 0; /*0x7a4a60*/
      result.storage.inlineData[0] = 0; /*0x7a4a64*/
    }
    else
    {
      if ( Dword_010201A0 != 0x3F6 ) /*0x7a49a2*/
      {
LABEL_23:
        details.capacity = 0xF;                 // 2026-05-21 SpeedTreeOBSE core malformed pass: ParseTreeInfo rejects unknown 1002-family tokens as malformed general tree information; later-family compatibility must not reinterpret this as a supplemental tail. /*0x7a4b13*/
        details.size = 0; /*0x7a4b26*/
        details.storage.inlineData[0] = 0; /*0x7a4b2a*/
        OB_stString28_AssignBytes_010201A0(&details, "malformed general tree information", 0x22u); /*0x7a4b2e*/
        v15 = 2; /*0x7a4b3d*/
        OB_IdvFileError_Ctor_010201A0(&v14, &details, 0); /*0x7a4b48*/
        ThrowException__((DWORD)&v14, &_TI3_AVIdvFileError__); /*0x7a4b57*/
      }
      OB_CTreeEngine_ParseBranchInfo_010201A0((unsigned int *)this, 0, file); /*0x7a49ab*/
    }
LABEL_21:
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4ae5*/
  }
  while ( Dword_010201A0 != 0x3EB ); /*0x7a4af1*/
}
