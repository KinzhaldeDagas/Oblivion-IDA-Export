// Static Oblivion billboard-leaf parser for the compact 0x4C record.
OB_CBillboardLeaf_010201A0 *__cdecl OB_CBillboardLeaf_Parse_010201A0(OB_CTreeFileAccess_010201A0 *file)
{
  int v1; // ebx
  OB_CBillboardLeaf_010201A0 *v2; // eax
  OB_CBillboardLeaf_010201A0 *v3; // edi
  int Dword_010201A0; // eax
  unsigned int v5; // ebp
  int byteBufferBegin; // ecx
  unsigned int v7; // ebp
  int v8; // ecx
  float *Vec3_010201A0; // eax
  unsigned int v10; // ebp
  int v11; // ecx
  unsigned int v12; // ebp
  int v13; // ecx
  float *v14; // eax
  rsize_t v16; // [esp-4h] [ebp-80h]
  float outVec3[3]; // [esp+14h] [ebp-68h] BYREF
  float v18[3]; // [esp+20h] [ebp-5Ch] BYREF
  int v19; // [esp+2Ch] [ebp-50h] BYREF
  char v20; // [esp+30h] [ebp-4Ch]
  int v21; // [esp+40h] [ebp-3Ch]
  int v22; // [esp+44h] [ebp-38h]
  _BYTE v23[40]; // [esp+48h] [ebp-34h] BYREF
  int v24; // [esp+78h] [ebp-4h]

  v2 = (OB_CBillboardLeaf_010201A0 *)FormHeapAlloc(0x4Cu); /*0x7a8278*/
  v24 = 0; /*0x7a8286*/
  if ( v2 ) /*0x7a828e*/
    v3 = OB_CBillboardLeaf_ctor_010201A0(v2); /*0x7a8297*/
  else
    v3 = 0; /*0x7a829b*/
  v24 = 0xFFFFFFFF; /*0x7a82a6*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a82ae*/
  do /*0x7a83ea*/
  {
    switch ( Dword_010201A0 ) /*0x7a82c1*/
    {
      case 0x1B5E: /*0x7a82c1*/
        v3->packedColor = OB_CTreeFileAccess_ReadPaddedDword_010201A0(file);// Loaded-tree path: File_BillboardLeaf_Color token 7006 supplies packedColor+0x14 directly. A zero green byte is therefore data-originated, not a texture-sampler result. /*0x7a82cf*/
        break; /*0x7a82d2*/
      case 0x1B5F: /*0x7a82c1*/
        v5 = file->cursorOffset++;              // Billboard leaf token 7007/File_BillboardLeaf_AngleIndex: raw one-byte read into compact leaf +0x10. /*0x7a82d7*/
        byteBufferBegin = file->byteBufferBegin; /*0x7a82de*/
        if ( !byteBufferBegin || v5 >= file->byteBufferEnd - byteBufferBegin ) /*0x7a82ec*/
          _invalid_parameter_noinfo(v1, (int)v3, (int)file); /*0x7a82ee*/
        v3->angleIndex = *(_BYTE *)(file->byteBufferBegin + v5); /*0x7a82f9*/
        break; /*0x7a82fc*/
      case 0x1B60: /*0x7a82c1*/
        v7 = file->cursorOffset++;              // Billboard leaf token 7008/File_BillboardLeaf_ColorScale: raw one-byte read into compact leaf +0x18. /*0x7a8301*/
        v8 = file->byteBufferBegin; /*0x7a8308*/
        if ( !v8 || v7 >= file->byteBufferEnd - v8 ) /*0x7a8316*/
          _invalid_parameter_noinfo(v1, (int)v3, (int)file); /*0x7a8318*/
        v3->colorScaleByte = *(_BYTE *)(file->byteBufferBegin + v7); /*0x7a8323*/
        break; /*0x7a8326*/
      case 0x1B62: /*0x7a82c1*/
        Vec3_010201A0 = OB_CTreeFileAccess_ReadVec3_010201A0(file, outVec3);// Billboard leaf token 7010/File_BillboardLeaf_Normal: ParseVector3 into compact leaf +0x1C..+0x24. /*0x7a8332*/
        v3->normal.x = *Vec3_010201A0; /*0x7a8339*/
        v3->normal.y = Vec3_010201A0[1]; /*0x7a833f*/
        v3->normal.z = Vec3_010201A0[2]; /*0x7a8345*/
        break; /*0x7a8348*/
      case 0x1B63: /*0x7a82c1*/
        v10 = file->cursorOffset++;             // Billboard leaf token 7011/File_BillboardLeaf_TextureIndex: raw one-byte read into compact leaf +0x40. /*0x7a834d*/
        v11 = file->byteBufferBegin; /*0x7a8354*/
        if ( !v11 || v10 >= file->byteBufferEnd - v11 ) /*0x7a8362*/
          _invalid_parameter_noinfo(v1, (int)v3, (int)file); /*0x7a8364*/
        v3->textureIndexByte = *(_BYTE *)(file->byteBufferBegin + v10); /*0x7a836f*/
        break; /*0x7a8372*/
      case 0x1B64: /*0x7a82c1*/
        v12 = file->cursorOffset++;             // Billboard leaf token 7012/File_BillboardLeaf_WindWeight: raw byte normalized by /255.0 into compact leaf +0x44. /*0x7a8374*/
        v13 = file->byteBufferBegin; /*0x7a837b*/
        if ( !v13 || v12 >= file->byteBufferEnd - v13 ) /*0x7a8389*/
          _invalid_parameter_noinfo(v1, (int)v3, (int)file); /*0x7a838b*/
        v3->primaryWindWeight = (double)*(unsigned __int8 *)(file->byteBufferBegin + v12) / dbl_A3DDD8; /*0x7a83a5*/
        break; /*0x7a83a8*/
      case 0x1B65: /*0x7a82c1*/
        v3->primaryWindGroup = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a83b1*/
        break; /*0x7a83b4*/
      case 0x1B67: /*0x7a82c1*/
        v14 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v18);// Billboard leaf token 7015/File_BillboardLeaf_Pos: ParseVector3 into compact leaf inherited position +0x04..+0x0C. /*0x7a83bd*/
        v3->position.x = *v14; /*0x7a83c4*/
        v3->position.y = v14[1]; /*0x7a83ca*/
        v3->position.z = v14[2]; /*0x7a83d0*/
        break; /*0x7a83d3*/
      case 0x1B68: /*0x7a82c1*/
        OB_CTreeFileAccess_ReadFloat_010201A0(file);// Billboard leaf token 7016/File_BillboardLeaf_TimeOffset: ParseFloat and discard; local source says removed member. /*0x7a83d7*/
        break; /*0x7a83d7*/
      default:
        LODWORD(v16) = 0x18;                    // 2026-05-21 SpeedTreeOBSE core malformed pass: CBillboardLeaf::Parse rejects unrecognized/local-only or truncated 7004 payload tokens before supplemental-tail sanitizing can begin. /*0x7a8405*/
        v22 = 0xF; /*0x7a8410*/
        v21 = 0; /*0x7a8418*/
        v20 = 0; /*0x7a8420*/
        OB_stString28_AssignBytes_010201A0(&v19, (int)v3, "malformed billboard leaf", v16); /*0x7a8425*/
        v24 = 1; /*0x7a8435*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v23, &v19, 0); /*0x7a8440*/
        ThrowException__((DWORD)v23, &_TI3_AVIdvFileError__); /*0x7a844f*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a83e0*/
  }
  while ( Dword_010201A0 != 0x1B5D ); /*0x7a83ea*/
  return v3; /*0x7a83f2*/
}
