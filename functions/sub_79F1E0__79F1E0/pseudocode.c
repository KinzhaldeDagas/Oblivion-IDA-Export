//
// [2026-10-03 acceptance corpus] Strict parser traversal of installed FrondTrees.esp assets: BambooCluster mode1/enabled/4LODs/two maps; BananaTree01 and CinnamonFern01 mode1/6LODs; CalleryPear and KingPalm01 mode1/4LODs; CurlyPalm01 and CoconutPalm01 mode1/1LOD; PonytailPalm mode0/3LODs. SDK SouthCarolina Palmetto_RT is mode0/5LODs and authors composite normal/self-shadow layers. These are static authored settings, NOT proof of nonempty native guide generation. FrondTrees plugin defines8TREEs but zeroREFRs; ordinary scene runs cannot establish their rendering.
int __thiscall OB_CFrondEngine_Parse_010201A0(OB_CFrondEngine_010201A0 *this, OB_CTreeFileAccess_010201A0 *fileAccess)
{
  OB_CFrondEngine_010201A0 *engine; // edi
  int Dword_010201A0; // eax
  void *v4; // eax
  int textureIndex; // edi
  double defaultAspectRatio; // st7
  int textureToken; // eax
  int v8; // edx
  OB_stString28_010201A0 *v9; // eax
  OB_stString28_010201A0 *v10; // eax
  OB_stString28_010201A0 v11; // [esp-1Ch] [ebp-138h] BYREF
  OB_CFrondEngine_010201A0 *engineForTextures; // [esp+14h] [ebp-108h]
  int textureCount; // [esp+18h] [ebp-104h]
  OB_stString28_010201A0 *v14; // [esp+1Ch] [ebp-100h]
  OB_stString28_010201A0 source; // [esp+20h] [ebp-FCh] BYREF
  OB_stString28_010201A0 v16; // [esp+3Ch] [ebp-E0h] BYREF
  OB_IdvFileError_010201A0 v17; // [esp+80h] [ebp-9Ch] BYREF
  OB_stString28_010201A0 result; // [esp+C4h] [ebp-58h] BYREF
  struct OB_SFrondTexture_010201A0 textureRecord; // [esp+E0h] [ebp-3Ch] BYREF
  int v20; // [esp+118h] [ebp-4h]

  engine = this; /*0x79f222*/
  engineForTextures = this; /*0x79f226*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f22a*/
  do /*0x79f519*/
  {
    if ( Dword_010201A0 > 0x36B7 ) /*0x79f245*/
    {
      if ( Dword_010201A0 != 0x36B8 ) /*0x79f55a*/
      {
LABEL_38:
        v10 = OB_IdvFormatString_010201A0(&result, "malformed frond info (token %d)", Dword_010201A0); /*0x79f59f*/
        v20 = 4; /*0x79f5bd*/
        OB_IdvFileError_Ctor_010201A0(&v17, v10, 0); /*0x79f5c8*/
        ThrowException__((DWORD)&v17, &_TI3_AVIdvFileError__); /*0x79f5da*/
      }
      engine->minCrossSegments = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f563*/
    }
    else
    {
      if ( Dword_010201A0 != 0x36B7 ) /*0x79f24b*/
      {
        switch ( Dword_010201A0 ) /*0x79f260*/
        {
          case 0x32CA: /*0x79f260*/
            engine->activationBranchLevel = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f26e*/
            goto LABEL_33; /*0x79f271*/
          case 0x32CB: /*0x79f260*/
            engine->frondType = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f27d*/
            goto LABEL_33; /*0x79f280*/
          case 0x32CC: /*0x79f260*/
            engine->bladeCount = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f28c*/
            goto LABEL_33; /*0x79f28f*/
          case 0x32CD: /*0x79f260*/
            v4 = OB_CTreeFileAccess_ParseSplineProfileObject_010201A0(fileAccess); /*0x79f296*/
            OB_CFrondEngine_SetProfile_010201A0(engine, v4); /*0x79f29e*/
            goto LABEL_33; /*0x79f2a3*/
          case 0x32CE: /*0x79f260*/
            engine->profileSegmentCount = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f2af*/
            goto LABEL_33; /*0x79f2b2*/
          case 0x32CF: /*0x79f260*/
            engine->enabledFlag = OB_CTreeFileAccess_ParseBool_010201A0(fileAccess); /*0x79f2be*/
            goto LABEL_33; /*0x79f2c1*/
          case 0x32D0: /*0x79f260*/
            OB_stVector_SFrondTexture_Clear_010201A0(&engine->frondTextureVectorWrapper);// Token 13008 clears the existing CFrondEngine+0x40 SFrondTexture vector before reading the declared texture count. /*0x79f314*/
            textureIndex = 0; /*0x79f320*/
            textureCount = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f324*/
            if ( textureCount > 0 ) /*0x79f328*/
            {
              do /*0x79f503*/
              {
                defaultAspectRatio = kHeadBodyNormalMatchRadius;// Oblivion constructs the temporary SFrondTexture with defaults aspectRatio=0.5, sizeScale=1.0, minAngleOffset=0.0, maxAngleOffset=0.0; RT 4.1 FrondEngine.h independently corroborates these defaults. /*0x79f330*/
                textureRecord.filename.capacity = 0xF;// Initializes the embedded OB_stString28 filename: capacity 15, size 0, inline byte 0. The executable fixes the 28-byte string layout; RT 4.1 only corroborates the member identity. /*0x79f336*/
                textureRecord.aspectRatio = defaultAspectRatio; /*0x79f341*/
                textureRecord.filename.size = 0; /*0x79f348*/
                textureRecord.filename.storage.inlineData[0] = 0; /*0x79f351*/
                textureRecord.sizeScale = 1.0; /*0x79f358*/
                textureRecord.minAngleOffset = 0.0; /*0x79f361*/
                textureRecord.maxAngleOffset = 0.0; /*0x79f368*/
                v20 = 0; /*0x79f371*/
                OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f378*/
                textureToken = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f37f*/
                do /*0x79f4a5*/
                {                               // Nested frond-texture tokens: 14002 filename, 14003 aspect ratio, 14004 size scale, 14005 minimum angle offset, 14006 maximum angle offset; 14001 ends the record.
                  switch ( textureToken ) /*0x79f39f*/
                  {
                    case 0x36B2: /*0x79f39f*/
                      v14 = &v11; /*0x79f3ab*/
                      OB_CTreeFileAccess_ReadString_010201A0(fileAccess, v8, &v11); /*0x79f3b2*/
                      OB_stString28_CopyCtorConsumeTemporary_010201A0(&source, v11); /*0x79f3bb*/
                      LOBYTE(v20) = 1; /*0x79f3cf*/
                      OB_stString28_AssignSubstring_010201A0(&textureRecord.filename, &source, 0, 0xFFFFFFFF); /*0x79f3d7*/
                      LOBYTE(v20) = 0; /*0x79f3e0*/
                      if ( source.capacity >= 0x10 ) /*0x79f3e7*/
                        FormHeapFree((unsigned int)source.storage.heapData); /*0x79f3ee*/
                      source.capacity = 0xF; /*0x79f402*/
                      source.size = 0; /*0x79f40a*/
                      source.storage.inlineData[0] = 0; /*0x79f40e*/
                      v9 = OB_IdvNoPath_010201A0(&textureRecord.filename, &v16); /*0x79f412*/
                      LOBYTE(v20) = 2; /*0x79f422*/
                      OB_stString28_AssignSubstring_010201A0(&textureRecord.filename, v9, 0, 0xFFFFFFFF); /*0x79f42a*/
                      LOBYTE(v20) = 0; /*0x79f433*/
                      if ( v16.capacity >= 0x10 ) /*0x79f43a*/
                        FormHeapFree((unsigned int)v16.storage.heapData); /*0x79f441*/
                      v16.capacity = 0xF; /*0x79f449*/
                      v16.size = 0; /*0x79f451*/
                      v16.storage.inlineData[0] = 0; /*0x79f455*/
                      break; /*0x79f459*/
                    case 0x36B3: /*0x79f39f*/
                      textureRecord.aspectRatio = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f462*/
                      break; /*0x79f469*/
                    case 0x36B4: /*0x79f39f*/
                      textureRecord.sizeScale = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f472*/
                      break; /*0x79f479*/
                    case 0x36B5: /*0x79f39f*/
                      textureRecord.minAngleOffset = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f482*/
                      break; /*0x79f489*/
                    case 0x36B6: /*0x79f39f*/
                      textureRecord.maxAngleOffset = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f492*/
                      break; /*0x79f492*/
                    default:
                      JUMPOUT(0x79F568); /*0x79f568*/
                  }
                  textureToken = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f49b*/
                }
                while ( textureToken != 0x36B1 ); /*0x79f4a5*/
                OB_stVector_SFrondTexture_PushBack_010201A0( /*0x79f4ba*/
                  &engineForTextures->frondTextureVectorWrapper,
                  &textureRecord);              // Appends the completed temporary SFrondTexture to CFrondEngine+0x40 via the decoded deep-copying vector push_back specialization.
                v20 = 0xFFFFFFFF; /*0x79f4c6*/
                if ( textureRecord.filename.capacity >= 0x10 ) /*0x79f4d1*/
                  FormHeapFree((unsigned int)textureRecord.filename.storage.heapData); /*0x79f4db*/
                ++textureIndex; /*0x79f4e3*/
                textureRecord.filename.capacity = 0xF; /*0x79f4ea*/
                textureRecord.filename.size = 0; /*0x79f4f5*/
                textureRecord.filename.storage.inlineData[0] = 0; /*0x79f4fc*/
              }
              while ( textureIndex < textureCount ); /*0x79f503*/
            }
            engine = engineForTextures; /*0x79f509*/
            goto LABEL_33; /*0x79f509*/
          case 0x32D1: /*0x79f260*/
            engine->frondLodCount = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f2cd*/
            goto LABEL_33; /*0x79f2d0*/
          case 0x32D2: /*0x79f260*/
            engine->maxSurfaceAreaPercent = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f2dc*/
            goto LABEL_33; /*0x79f2df*/
          case 0x32D3: /*0x79f260*/
            engine->minSurfaceAreaPercent = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f2eb*/
            goto LABEL_33; /*0x79f2ee*/
          case 0x32D4: /*0x79f260*/
            engine->reductionFuzziness = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f2fa*/
            goto LABEL_33; /*0x79f2fd*/
          case 0x32D5: /*0x79f260*/
            engine->largeFrondRetentionPercent = OB_CTreeFileAccess_ReadFloat_010201A0(fileAccess); /*0x79f309*/
            goto LABEL_33; /*0x79f30c*/
          default:
            goto LABEL_38;
        }
      }
      engine->minLengthSegments = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f550*/
    }
LABEL_33:
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(fileAccess); /*0x79f50d*/
  }
  while ( Dword_010201A0 != 0x32C9 ); /*0x79f519*/
  return Dword_010201A0; /*0x79f51f*/
}
