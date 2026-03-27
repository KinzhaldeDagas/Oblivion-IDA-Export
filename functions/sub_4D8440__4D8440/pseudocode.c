char __cdecl sub_4D8440(Data *arg0, float a2)
{
  float v2; // esi
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
  double v15; // st7
  double v16; // st7
  double v17; // st7
  int v18; // edx
  int v19; // eax
  double v20; // st7
  int a1; // [esp+18h] [ebp-40h] BYREF
  int v23; // [esp+1Ch] [ebp-3Ch]
  int v24; // [esp+20h] [ebp-38h]
  int v25; // [esp+24h] [ebp-34h]
  char Dst[4]; // [esp+28h] [ebp-30h] BYREF
  float v27; // [esp+2Ch] [ebp-2Ch]
  float v28; // [esp+30h] [ebp-28h]
  float v29; // [esp+34h] [ebp-24h]
  float v30; // [esp+38h] [ebp-20h]
  float v31; // [esp+3Ch] [ebp-1Ch]
  char v32[4]; // [esp+40h] [ebp-18h] BYREF
  float v33; // [esp+44h] [ebp-14h]
  float v34; // [esp+48h] [ebp-10h]
  int v35; // [esp+4Ch] [ebp-Ch]
  int v36; // [esp+50h] [ebp-8h]
  int v37; // [esp+54h] [ebp-4h]

  v2 = a2;
  if ( a2 == 0.0 )
    return 0;
  if ( !arg0 || TESFile_GetRecordType(arg0) != 0x31 )
    return 0;
  *(_DWORD *)LODWORD(v2) = 0;
  a2 = 1.0;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  *(_DWORD *)(LODWORD(v2) + 8) = 0;
  *(float *)Dst = 0.0;
  *(_DWORD *)(LODWORD(v2) + 0xC) = 0;
  v27 = 0.0;
  v3 = flt_A34F5C;
  *(_DWORD *)(LODWORD(v2) + 0x10) = 0;
  *(_DWORD *)(LODWORD(v2) + 0x14) = 0;
  v28 = v3;
  *(_DWORD *)(LODWORD(v2) + 0x18) = 0;
  *(float *)v32 = 0.0;
  v33 = 0.0;
  v34 = 0.0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  *(_DWORD *)(LODWORD(v2) + 0x1C) = 0;
  ChunkType = TESFile_GetChunkType(arg0);
  if ( !ChunkType )
    goto LABEL_17;
  while ( 1 )
  {
    if ( ChunkType > 0x454D414E )
    {
      if ( ChunkType == 0x4C435358 )
        TESFile_GetChunkData4(arg0, (char *)&a2);
      goto LABEL_13;
    }
    if ( ChunkType != 0x454D414E )
      break;
    a1 = 0;
    TESFile_GetChunkData4(arg0, (char *)&a1);
    *(_DWORD *)LODWORD(v2) = TESForm_LookupByFormID(a1);
LABEL_13:
    if ( TESFile_GetNextChunk(arg0) )
    {
      ChunkType = TESFile_GetChunkType(arg0);
      if ( ChunkType )
        continue;
    }
    goto LABEL_17;
  }
  if ( ChunkType != 0x41544144 )
  {
    if ( ChunkType == 0x444F4C58 )
      TESFile_GetChunkData(arg0, Dst, 0xCu);
    goto LABEL_13;
  }
  TESFile_GetChunkData(arg0, v32, 0x18u);
LABEL_17:
  if ( !*(_DWORD *)LODWORD(v2) )
    return 0;
  v5 = dbl_A2FAA0;
  *(float *)Dst = *(float *)Dst * v5 + v5;
  v6 = dbl_A46B18;
  v7 = flt_A34F5C;
  if ( v6 <= *(float *)Dst )
    *(float *)Dst = flt_A34F5C;
  v27 = v27 * v5 + v5;
  if ( v27 >= v6 )
    v27 = v7;
  v8 = v7;
  v9 = v5 + v28 * v5;
  v10 = v8;
  v28 = v9;
  if ( v28 >= v6 )
    v28 = v10;
  v25 = (int)v34;
  a1 = (int)v33;
  v24 = a1;
  v23 = (int)*(float *)v32;
  v29 = (float)v23;
  v11 = (double)a1;
  *(float *)(LODWORD(v2) + 4) = v29;
  v30 = v11;
  v12 = (double)v25;
  *(float *)(LODWORD(v2) + 8) = v30;
  v31 = v12;
  v13 = *(float *)Dst;
  *(float *)(LODWORD(v2) + 0xC) = v31;
  v29 = v13 + *(float *)(LODWORD(v2) + 4);
  v30 = *(float *)(LODWORD(v2) + 8) + v27;
  v14 = v30;
  v15 = *(float *)(LODWORD(v2) + 0xC);
  *(float *)(LODWORD(v2) + 4) = v29;
  v16 = v15 + v28;
  *(float *)(LODWORD(v2) + 8) = v14;
  v31 = v16;
  v17 = a2;
  *(float *)(LODWORD(v2) + 0xC) = v31;
  a2 = v17 * fCostant_100;
  a2 = floor(a2);
  v18 = v36;
  v19 = v37;
  v20 = a2 + dbl_A46B18;
  *(_DWORD *)(LODWORD(v2) + 0x14) = v35;
  *(_DWORD *)(LODWORD(v2) + 0x18) = v18;
  *(_DWORD *)(LODWORD(v2) + 0x1C) = v19;
  *(float *)(LODWORD(v2) + 0x10) = v20;
  return 1;
}
