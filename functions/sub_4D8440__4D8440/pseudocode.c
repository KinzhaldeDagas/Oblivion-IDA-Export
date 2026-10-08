// Verified REFR parser reads XLOD as a 12-byte distant-data normal vector, DATA as six floats (first three base position, last three rotationAnglesXYZ radians), and XSCL as scale. XLOD components are remapped/capped and added to the rounded DATA position. Output scalePercentWithFloorBias is floor(XSCL*100)+0.97; downstream floors/divides by100. Rotation components are applied in X, Y, Z order.
char __cdecl TESWorldSpace_ParseDistantLODReferenceRecord(Data *file, DistantLODReferenceRecord *outRecord)
{
  DistantLODReferenceRecord *v2; // esi
  double v3; // st7
  signed int ChunkType; // eax
  double v5; // st7
  double v6; // st6
  double v7; // st5
  double v8; // rt1
  double v9; // st5
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  float v14; // edx
  double z; // st7
  double v16; // st7
  double v17; // st7
  float v18; // edx
  float v19; // eax
  double v20; // st7
  int a1; // [esp+18h] [ebp-40h] BYREF
  int v23; // [esp+1Ch] [ebp-3Ch]
  int v24; // [esp+20h] [ebp-38h]
  int v25; // [esp+24h] [ebp-34h]
  char xLODNormalX[4]; // [esp+28h] [ebp-30h] BYREF
  float xLODNormalY; // [esp+2Ch] [ebp-2Ch]
  float xLODNormalZ; // [esp+30h] [ebp-28h]
  float v29; // [esp+34h] [ebp-24h]
  float v30; // [esp+38h] [ebp-20h]
  float v31; // [esp+3Ch] [ebp-1Ch]
  char dataPositionX[4]; // [esp+40h] [ebp-18h] BYREF
  float dataPositionY; // [esp+44h] [ebp-14h]
  float dataPositionZ; // [esp+48h] [ebp-10h]
  float dataRotationX; // [esp+4Ch] [ebp-Ch]
  float dataRotationY; // [esp+50h] [ebp-8h]
  float dataRotationZ; // [esp+54h] [ebp-4h]

  v2 = outRecord; /*0x4d8445*/
  if ( *(float *)&outRecord == 0.0 ) /*0x4d844d*/
    return 0; /*0x4d86be*/
  if ( !file || TESFile_GetRecordType(file) != 0x31 ) /*0x4d846a*/
    return 0; /*0x4d846a*/
  v2->baseForm = 0; /*0x4d8474*/
  *(float *)&outRecord = 1.0; /*0x4d8476*/
  v2->position.x = 0.0; /*0x4d847c*/
  v2->position.y = 0.0; /*0x4d847f*/
  *(float *)xLODNormalX = 0.0; /*0x4d8482*/
  v2->position.z = 0.0; /*0x4d8486*/
  xLODNormalY = 0.0; /*0x4d8489*/
  v3 = kDistantLODNormalLimit_097; /*0x4d848d*/
  v2->scalePercentWithFloorBias = 0.0; /*0x4d8493*/
  v2->rotationAnglesXYZ.x = 0.0; /*0x4d8496*/
  xLODNormalZ = v3; /*0x4d8499*/
  v2->rotationAnglesXYZ.y = 0.0; /*0x4d849d*/
  *(float *)dataPositionX = 0.0; /*0x4d84a2*/
  dataPositionY = 0.0; /*0x4d84a6*/
  dataPositionZ = 0.0; /*0x4d84aa*/
  dataRotationX = 0.0; /*0x4d84ae*/
  dataRotationY = 0.0; /*0x4d84b2*/
  dataRotationZ = 0.0; /*0x4d84b6*/
  v2->rotationAnglesXYZ.z = 0.0; /*0x4d84ba*/
  ChunkType = TESFile_GetChunkType(file); /*0x4d84bd*/
  if ( !ChunkType ) /*0x4d84c4*/
    goto LABEL_17; /*0x4d84c4*/
  while ( 1 ) /*0x4d84d0*/
  {
    if ( ChunkType > 0x454D414E ) /*0x4d84d5*/
    {                                           // Verified XSCL chunk branch: reads one scale float; after parsing it is encoded into scalePercentWithFloorBias as floor(XSCL * 100) + 0.97.
      if ( ChunkType == 0x4C435358 ) /*0x4d851d*/
        TESFile_GetChunkData4(file, (char *)&outRecord); /*0x4d8526*/
      goto LABEL_13; /*0x4d8526*/
    }
    if ( ChunkType != 0x454D414E ) /*0x4d84d7*/
      break; /*0x4d84d7*/
    a1 = 0;                                     // Verified NAME chunk: reads a four-byte FormID and resolves it through TESForm_LookupByFormID into DistantLODReferenceRecord.baseForm. /*0x4d84fe*/
    TESFile_GetChunkData4(file, (char *)&a1); /*0x4d8502*/
    v2->baseForm = TESForm_LookupByFormID(a1); /*0x4d8514*/
LABEL_13:
    if ( TESFile_GetNextChunk(file) ) /*0x4d8536*/
    {
      ChunkType = TESFile_GetChunkType(file); /*0x4d8541*/
      if ( ChunkType ) /*0x4d8548*/
        continue; /*0x4d8548*/
    }
    goto LABEL_17; /*0x4d8548*/
  }
  if ( ChunkType != 0x41544144 ) /*0x4d84de*/
  {                                             // Verified REFR XLOD chunk is a 12-byte three-float distant-data normal vector. ExtraDataList_Load independently handles XLOD as a normal and defaults it to (0,0,0.97).
    if ( ChunkType == 0x444F4C58 ) /*0x4d84e5*/
      TESFile_GetChunkData(file, xLODNormalX, 0xCu); /*0x4d84f0*/
    goto LABEL_13; /*0x4d84f5*/
  }
  TESFile_GetChunkData(file, dataPositionX, 0x18u);// Verified DATA chunk is 24 bytes: first three floats supply base position, last three rotationAnglesXYZ; the local transform applies those as X, then Y, then Z rotations. Exact matrix convention is documented at the queued-model transform helper. /*0x4d8555*/
LABEL_17:
  if ( !v2->baseForm ) /*0x4d855a*/
    return 0; /*0x4d86c1*/
  v5 = dbl_A2FAA0; /*0x4d8570*/
  *(float *)xLODNormalX = *(float *)xLODNormalX * v5 + v5;// Verified XLOD component remapping begins with 0.5*x+0.5; components are subsequently capped at 0.97. /*0x4d8572*/
  v6 = dbl_A46B18; /*0x4d8584*/
  v7 = kDistantLODNormalLimit_097; /*0x4d8589*/
  if ( v6 <= *(float *)xLODNormalX )            // Verified cap condition: when the remapped XLOD component reaches 0.97, it is set to kDistantLODNormalLimit_097 (0.97). /*0x4d858f*/
    *(float *)xLODNormalX = kDistantLODNormalLimit_097; /*0x4d8591*/
  xLODNormalY = xLODNormalY * v5 + v5;          // Verified second XLOD component is remapped by 0.5*x+0.5 and then capped at 0.97. /*0x4d859d*/
  if ( xLODNormalY >= v6 ) /*0x4d85ac*/
    xLODNormalY = v7; /*0x4d85ae*/
  v8 = v7;                                      // Verified third XLOD component is remapped by 0.5*x+0.5 and then capped at 0.97. /*0x4d85ba*/
  v9 = v5 + xLODNormalZ * v5; /*0x4d85ba*/
  v10 = v8; /*0x4d85ba*/
  xLODNormalZ = v9; /*0x4d85bc*/
  if ( xLODNormalZ >= v6 )                      // Verified third XLOD component uses the same 0.5*x+0.5 remap and 0.97 cap. /*0x4d85cb*/
    xLODNormalZ = v10; /*0x4d85cd*/
  v25 = (int)dataPositionZ; /*0x4d85e1*/
  a1 = (int)dataPositionY; /*0x4d85e9*/
  v24 = a1; /*0x4d85f1*/
  v23 = (int)*(float *)dataPositionX; /*0x4d85f9*/
  v29 = (float)v23; /*0x4d8604*/
  v11 = (double)a1; /*0x4d860c*/
  v2->position.x = v29;                         // Verified stores rounded DATA position X into the intermediate reference record; the remapped XLOD component is added later. /*0x4d8610*/
  v30 = v11; /*0x4d8613*/
  v12 = (double)v25; /*0x4d861b*/
  v2->position.y = v30;                         // Verified stores rounded DATA position Y into the intermediate reference record; the remapped XLOD component is added later. /*0x4d861f*/
  v31 = v12; /*0x4d8622*/
  v13 = *(float *)xLODNormalX; /*0x4d862a*/
  v2->position.z = v31;                         // Verified stores rounded DATA position Z into the intermediate reference record; the remapped XLOD component is added later. /*0x4d862e*/
  v29 = v13 + v2->position.x;                   // Verified the rounded DATA position receives the XLOD normal's first remapped/capped component. /*0x4d8634*/
  v30 = v2->position.y + xLODNormalY;           // Verified the rounded DATA position receives the XLOD normal's second remapped/capped component. /*0x4d8643*/
  v14 = v30; /*0x4d8647*/
  z = v2->position.z; /*0x4d864b*/
  v2->position.x = v29; /*0x4d864e*/
  v16 = z + xLODNormalZ;                        // Verified the rounded DATA position receives the XLOD normal's third remapped/capped component. /*0x4d8651*/
  v2->position.y = v14; /*0x4d8655*/
  v31 = v16; /*0x4d8658*/
  v17 = *(float *)&outRecord; /*0x4d8660*/
  v2->position.z = v31; /*0x4d8664*/
  *(float *)&outRecord = v17 * fCostant_100; /*0x4d866d*/
  *(float *)&outRecord = floor(*(float *)&outRecord); /*0x4d8681*/
  v18 = dataRotationY; /*0x4d8689*/
  v19 = dataRotationZ; /*0x4d868d*/
  v20 = *(float *)&outRecord + dbl_A46B18; /*0x4d869c*/
  v2->rotationAnglesXYZ.x = dataRotationX; /*0x4d86a2*/
  v2->rotationAnglesXYZ.y = v18; /*0x4d86a5*/
  v2->rotationAnglesXYZ.z = v19; /*0x4d86a9*/
  v2->scalePercentWithFloorBias = v20;          // Verified scale encoding: stores floor(XSCL * 100) + 0.97 in scalePercentWithFloorBias. The downstream base-object callback floors this value and divides by 100, so the fractional bias is discarded and the scale is quantized to hundredths. The specific choice of 0.97 remains Unknown. /*0x4d86ac*/
  return 1; /*0x4d86af*/
}
