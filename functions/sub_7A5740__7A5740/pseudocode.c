// Initializes stock leaf tables from the compact CTreeEngine leaf-info member at CTreeEngine+0x84.
void __thiscall OB_SIdvLeafInfo_InitTables_010201A0(OB_SIdvLeafInfo_010201A0 *this, int leafTextureCount)
{
  int v3; // ebx
  int v4; // eax
  int v5; // ecx
  int i; // edi
  float *v7; // eax
  int v8; // ecx
  float *v9; // eax
  float **v10; // eax
  int v11; // ebp
  int v12; // ebx
  int v13; // ebp
  bool v14; // cc
  int v15; // edi
  int v16; // eax

  v3 = leafTextureCount; /*0x7a5769*/
  v4 = 4 * this->rockingGroupCount; /*0x7a5774*/
  v5 = (unsigned __int64)(unsigned int)this->rockingGroupCount >> 0x1E != 0; /*0x7a5776*/
  this->leafTextureCount = leafTextureCount; /*0x7a5779*/
  this->rockingTimeOffsets = (float *)FormHeapAlloc(v4 | -v5); /*0x7a578d*/
  OB_stRandom_ctor_010201A0(&leafTextureCount); /*0x7a5790*/
  for ( i = 0; i < this->rockingGroupCount; ++i ) /*0x7a579e*/
    this->rockingTimeOffsets[i] = OB_stRandom_GetUniform_010201A0(0.0, flt_A5A04C); /*0x7a57be*/
  v7 = (float *)FormHeapAlloc((unsigned __int64)(unsigned int)(0x10 * v3) >> 0x1E != 0 ? 0xFFFFFFFF : v3 << 6);
  v8 = 2 * v3; /*0x7a57e4*/
  this->leafTexcoordTable = v7; /*0x7a57ec*/
  if ( 2 * v3 > 0 ) /*0x7a57ef*/
  {
    do /*0x7a582b*/
    {
      *v7 = 0.0; /*0x7a57f5*/
      v9 = v7 + 2; /*0x7a57fc*/
      v9[0xFFFFFFFF] = 1.0; /*0x7a57ff*/
      ++v9; /*0x7a5802*/
      v9[0xFFFFFFFF] = 1.0; /*0x7a5805*/
      ++v9; /*0x7a5808*/
      v9[0xFFFFFFFF] = 1.0; /*0x7a580b*/
      ++v9; /*0x7a580e*/
      v9[0xFFFFFFFF] = 1.0; /*0x7a5811*/
      v9 += 2; /*0x7a5819*/
      v9[0xFFFFFFFE] = 0.0; /*0x7a581c*/
      v7 = v9 + 1; /*0x7a581f*/
      --v8; /*0x7a5822*/
      v7[0xFFFFFFFE] = 0.0; /*0x7a5825*/
      v7[0xFFFFFFFF] = 0.0; /*0x7a5828*/
    }
    while ( v8 ); /*0x7a582b*/
  }
  v10 = (float **)FormHeapAlloc(
                    (unsigned __int64)(unsigned int)this->leafLodLevelCount >> 0x1E != 0
                  ? 0xFFFFFFFF
                  : 4 * this->leafLodLevelCount);
  v11 = v3 * this->rockingGroupCount; /*0x7a584d*/
  v12 = 0; /*0x7a5850*/
  v13 = 0x20 * v11; /*0x7a5855*/
  v14 = this->leafLodLevelCount <= 0; /*0x7a5858*/
  this->leafVertexTables = v10; /*0x7a585b*/
  if ( !v14 )
  {
    v15 = 0; /*0x7a5860*/
    do
    {
      this->leafVertexTables[v15] = (float *)FormHeapAlloc((unsigned __int64)(unsigned int)v13 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v13);
      v16 = 0; /*0x7a5885*/
      if ( v13 >= 4 ) /*0x7a588a*/
      {
        do /*0x7a58bb*/
        {
          this->leafVertexTables[v15][v16] = 0.0; /*0x7a5895*/
          this->leafVertexTables[v15][v16 + 1] = 0.0; /*0x7a589e*/
          this->leafVertexTables[v15][v16 + 2] = 0.0; /*0x7a58a8*/
          this->leafVertexTables[v15][v16 + 3] = 0.0; /*0x7a58b2*/
          v16 += 4; /*0x7a58b6*/
        }
        while ( v16 < v13 - 3 ); /*0x7a58bb*/
      }
      for ( ; v16 < v13; ++v16 ) /*0x7a58bf*/
        this->leafVertexTables[v15][v16] = 0.0; /*0x7a58c7*/
      ++v12; /*0x7a58d1*/
      ++v15; /*0x7a58d6*/
    }
    while ( v12 < this->leafLodLevelCount );
  }
  Shared_NoOpVirtual_60D0A0(&leafTextureCount); /*0x7a58ea*/
}
