// 2026-05-21 SpeedTreeOBSE billboard-leaf core/tail load pass: Oblivion CTreeEngine::Parse consumes core 1000..1001, optionally consumes post-core 7000 leaf clusters, and those clusters may include stock 7004 billboard-leaf records parsed by 0x7A8250. Full-file compatibility fixtures now cover known-family supplemental tails after empty 7000 clusters and after stock 7004 payloads; the compatibility layer must sanitize only after that post-core cursor point.
bool __thiscall OB_CTreeEngine_Parse_010201A0(OB_CTreeEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  int v2; // edi
  _BYTE *v4; // edx
  const char *v5; // eax
  int v6; // edi
  unsigned int *v7; // eax
  bool v8; // bl
  int Dword_010201A0; // eax
  int v10; // eax
  int v11; // eax
  int byteBufferBegin; // ecx
  rsize_t v14; // [esp-4h] [ebp-CCh]
  rsize_t v15; // [esp-4h] [ebp-CCh]
  int v16; // [esp+14h] [ebp-B4h] BYREF
  unsigned int *v17; // [esp+18h] [ebp-B0h] BYREF
  unsigned int v18; // [esp+28h] [ebp-A0h]
  unsigned int v19; // [esp+2Ch] [ebp-9Ch]
  _BYTE v20[40]; // [esp+30h] [ebp-98h] BYREF
  _DWORD v21[7]; // [esp+58h] [ebp-70h] BYREF
  _BYTE v22[40]; // [esp+74h] [ebp-54h] BYREF
  _DWORD outSmallString[7]; // [esp+9Ch] [ebp-2Ch] BYREF
  int v24; // [esp+C4h] [ebp-4h]

  if ( OB_CTreeFileAccess_ReadDword_010201A0(file) != 0x3E8 ) /*0x7a4e40*/
  {
    LODWORD(v14) = 0x18; /*0x7a4e42*/
    v19 = 0xF; /*0x7a4e4f*/
    v18 = 0; /*0x7a4e57*/
    LOBYTE(v17) = 0; /*0x7a4e5b*/
    OB_stString28_AssignBytes_010201A0(&v16, v2, "missing begin_file token", v14); /*0x7a4e60*/
    v24 = 0; /*0x7a4e6f*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v20, &v16, 0); /*0x7a4e76*/
    ThrowException__((DWORD)v20, &_TI3_AVIdvFileError__); /*0x7a4e85*/
  }
  OB_CTreeFileAccess_ReadString_010201A0(file, (int)outSmallString, outSmallString); /*0x7a4e94*/
  v4 = off_B2BA10; /*0x7a4e99*/
  v5 = (const char *)off_B2BA10; /*0x7a4e9f*/
  v24 = 1; /*0x7a4ea1*/
  v19 = 0xF; /*0x7a4eac*/
  v18 = 0; /*0x7a4eb4*/
  LOBYTE(v17) = 0; /*0x7a4ebc*/
  v6 = (int)(v5 + 1); /*0x7a4ec1*/
  LODWORD(v14) = strlen(v5); /*0x7a4ecf*/
  OB_stString28_AssignBytes_010201A0(&v16, v6, v4, v14); /*0x7a4ed5*/
  v7 = v17; /*0x7a4eda*/
  LOBYTE(v24) = 2; /*0x7a4ee7*/
  if ( v19 < 0x10 ) /*0x7a4eef*/
    v7 = (unsigned int *)&v17; /*0x7a4ef1*/
  v8 = sub_6F5DE0(outSmallString, 0, outSmallString[5], v7, v18) != 0; /*0x7a4f13*/
  LOBYTE(v24) = 1; /*0x7a4f1a*/
  if ( v19 >= 0x10 ) /*0x7a4f22*/
    FormHeapFree((unsigned int)v17); /*0x7a4f29*/
  if ( v8 ) /*0x7a4f33*/
  {
    LODWORD(v15) = 0x1E; /*0x7a4f35*/
    v19 = 0xF; /*0x7a4f40*/
    v18 = 0; /*0x7a4f48*/
    LOBYTE(v17) = 0; /*0x7a4f50*/
    OB_stString28_AssignBytes_010201A0(&v16, 0x10, "not a valid SpeedTree SPT file", v15); /*0x7a4f55*/
    LOBYTE(v24) = 3; /*0x7a4f65*/
    OB_IdvFileError_Ctor_010201A0((std::exception *)v20, &v16, 0); /*0x7a4f6d*/
    ThrowException__((DWORD)v20, &_TI3_AVIdvFileError__); /*0x7a4f7c*/
  }
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4f83*/
  do /*0x7a4fcd*/
  {
    v10 = Dword_010201A0 - 0x3EA; /*0x7a4f88*/
    if ( v10 ) /*0x7a4f8d*/
    {
      v11 = v10 - 2; /*0x7a4f8f*/
      if ( v11 ) /*0x7a4f92*/
      {
        if ( v11 != 7 ) /*0x7a4f97*/
        {
          sub_414750((int)v21, "malformed SpeedTree SPT file"); /*0x7a507d*/
          LOBYTE(v24) = 4; /*0x7a508d*/
          OB_IdvFileError_Ctor_010201A0((std::exception *)v22, v21, 0); /*0x7a5095*/
          ThrowException__((DWORD)v22, &_TI3_AVIdvFileError__); /*0x7a50a4*/
        }
        OB_SIdvWindInfo_Parse_010201A0(&this->embeddedWindInfo, file); /*0x7a4fa4*/
      }
      else
      {
        OB_SIdvLeafInfo_Parse_010201A0(&this->leafInfo, file); /*0x7a4fb2*/
      }
    }
    else
    {
      OB_CTreeEngine_ParseTreeInfo_010201A0(this, file); /*0x7a4fbc*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4fc3*/
  }
  while ( Dword_010201A0 != 0x3E9 ); /*0x7a4fcd*/
  byteBufferBegin = file->byteBufferBegin; /*0x7a4fcf*/
  if ( byteBufferBegin ) /*0x7a4fd4*/
  {
    if ( file->cursorOffset < (unsigned int)(file->byteBufferEnd - byteBufferBegin) /*0x7a4feb*/
      && OB_CTreeFileAccess_PeekToken_010201A0((unsigned int *)file) == 0x1B58 )
    {
      OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a4fef*/
      OB_CTreeEngine_ParseLeafCluster_010201A0(this, file); /*0x7a4ff7*/
    }
  }
  OB_CTreeEngine_SetBranchTexture_010201A0(this, (const OB_stString28_010201A0 *)this->branchTextureFilenameSmallString);// Parsed branch-texture st_string is committed through OB_CTreeEngine_SetBranchTexture. Identity derives from the Oblivion call/data flow; SpeedTreeRT 4.1 is corroborative only. /*0x7a5002*/
  OB_stVector_SIdvLeafTexture_CopyAssign_010201A0(&this->leafInfo.leafTextures, &this->leafInfo.leafTextures); /*0x7a500e*/
  if ( kTerrainLODQuadRayDirectionZ < (double)this->overrideTreeSize ) /*0x7a5021*/
  {
    this->treeSizeScalar = this->overrideTreeSize; /*0x7a5026*/
    this->treeSizeVariance = this->overrideTreeVariance; /*0x7a502c*/
  }
  if ( outSmallString[6] >= 0x10u ) /*0x7a5036*/
    FormHeapFree(outSmallString[1]); /*0x7a5040*/
  return 1; /*0x7a504a*/
}
