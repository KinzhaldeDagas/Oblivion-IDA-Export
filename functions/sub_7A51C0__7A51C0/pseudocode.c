// Oblivion projected-shadow UV generator. Projects each indexed vertex along parsed right/up axes, optionally applies the six-float remap, and appends the resulting pair to CIndexedGeometry::shadowTexcoords.
void __thiscall OB_CProjectedShadow_ComputeTexCoords_010201A0(
        OB_CProjectedShadow_010201A0 *this,
        OB_CIndexedGeometry_010201A0 *geometry,
        float centerX,
        float centerY,
        float centerZ,
        float radius,
        const float *shadowCoordRemap)
{
  double v7; // st6
  double v8; // st5
  double v9; // st6
  const float *VertexCoord_010201A0; // eax
  float v11; // [esp+Ch] [ebp-7Ch]
  float v12; // [esp+Ch] [ebp-7Ch]
  float v13; // [esp+Ch] [ebp-7Ch]
  unsigned __int16 v14; // [esp+Ch] [ebp-7Ch]
  int v15; // [esp+10h] [ebp-78h]
  int v16; // [esp+10h] [ebp-78h]
  float shadowST; // [esp+14h] [ebp-74h] BYREF
  float v18; // [esp+18h] [ebp-70h]
  float v19; // [esp+1Ch] [ebp-6Ch]
  double v20; // [esp+20h] [ebp-68h]
  float v21; // [esp+28h] [ebp-60h]
  OB_stVec3_010201A0 start; // [esp+34h] [ebp-54h] BYREF
  OB_stVec3_010201A0 v23; // [esp+40h] [ebp-48h] BYREF
  OB_stVec3_010201A0 vertex; // [esp+4Ch] [ebp-3Ch] BYREF
  OB_stVec3_010201A0 end; // [esp+58h] [ebp-30h] BYREF
  OB_stVec3_010201A0 outPoint; // [esp+64h] [ebp-24h] BYREF
  OB_stVec3_010201A0 v27; // [esp+70h] [ebp-18h] BYREF
  OB_stVec3_010201A0 v28; // [esp+7Ch] [ebp-Ch] BYREF

  v11 = this->right.x * radius; /*0x7a51d9*/
  v7 = v11; /*0x7a51dd*/
  v23.x = v11; /*0x7a51e1*/
  v12 = this->right.y * radius; /*0x7a51ea*/
  v8 = v12; /*0x7a51ee*/
  v23.y = v12; /*0x7a51f2*/
  v13 = this->right.z * radius; /*0x7a51fb*/
  start.x = centerX - v23.x; /*0x7a5210*/
  start.y = centerY - v23.y; /*0x7a521d*/
  start.z = centerZ - v13; /*0x7a522a*/
  v23.x = v7; /*0x7a5230*/
  v23.y = v8; /*0x7a5236*/
  v23.z = v13; /*0x7a523e*/
  end.x = v23.x + centerX; /*0x7a5248*/
  end.y = v23.y + centerY; /*0x7a5252*/
  end.z = v13 + centerZ; /*0x7a525c*/
  *(float *)&v20 = this->up.x * radius; /*0x7a5265*/
  *((float *)&v20 + 1) = this->up.y * radius; /*0x7a526e*/
  v21 = this->up.z * radius; /*0x7a5277*/
  v23.x = centerX - *(float *)&v20; /*0x7a5281*/
  v23.y = centerY - *((float *)&v20 + 1); /*0x7a528b*/
  v23.z = centerZ - v21; /*0x7a5295*/
  shadowST = this->up.x * radius; /*0x7a529e*/
  v18 = this->up.y * radius; /*0x7a52a7*/
  v20 = radius; /*0x7a52ad*/
  v19 = radius * this->up.z; /*0x7a52b4*/
  v27.x = centerX + shadowST; /*0x7a52c0*/
  v9 = centerY + v18; /*0x7a52cf*/
  geometry->currentVertexWriteCounter = 0; /*0x7a52d3*/
  v27.y = v9; /*0x7a52d7*/
  v14 = 0; /*0x7a52db*/
  v27.z = centerZ + v19; /*0x7a52e3*/
  if ( (unsigned __int16)OB_CIndexedGeometry_GetVertexCount_010201A0(geometry) ) /*0x7a52e7*/
  {
    v20 = v20 + v20; /*0x7a52fe*/
    do /*0x7a5452*/
    {
      VertexCoord_010201A0 = OB_CIndexedGeometry_GetVertexCoord_010201A0(geometry, v14); /*0x7a530a*/
      vertex.x = *VertexCoord_010201A0; /*0x7a5316*/
      vertex.y = VertexCoord_010201A0[1]; /*0x7a5322*/
      vertex.z = VertexCoord_010201A0[2]; /*0x7a5332*/
      OB_CProjectedShadow_ClosestPoint_010201A0(&outPoint, &start, &end, &vertex); /*0x7a5339*/
      *(float *)&v15 = (outPoint.y - start.y) * (outPoint.y - start.y) /*0x7a5366*/
                     + (outPoint.x - start.x) * (outPoint.x - start.x)
                     + (outPoint.z - start.z) * (outPoint.z - start.z);
      shadowST = COERCE_FLOAT((v15 >> 1) + 0x1FC00000) / v20; /*0x7a5384*/
      if ( shadowCoordRemap ) /*0x7a5388*/
        shadowST = (*shadowCoordRemap - shadowCoordRemap[2]) * shadowST + shadowCoordRemap[2]; /*0x7a53a3*/
      OB_CProjectedShadow_ClosestPoint_010201A0(&v28, &v23, &v27, &vertex); /*0x7a53c0*/
      *(float *)&v16 = (v28.y - v23.y) * (v28.y - v23.y) /*0x7a53f3*/
                     + (v28.x - v23.x) * (v28.x - v23.x)
                     + (v28.z - v23.z) * (v28.z - v23.z);
      v18 = COERCE_FLOAT((v16 >> 1) + 0x1FC00000) / v20; /*0x7a5411*/
      if ( shadowCoordRemap ) /*0x7a5415*/
        v18 = (shadowCoordRemap[1] - shadowCoordRemap[5]) * v18 + shadowCoordRemap[5]; /*0x7a5431*/
      OB_CIndexedGeometry_AddVertexTexCoord1_010201A0(geometry, &shadowST); /*0x7a543c*/
      ++v14; /*0x7a5441*/
    }
    while ( v14 < (unsigned __int16)OB_CIndexedGeometry_GetVertexCount_010201A0(geometry) ); /*0x7a5452*/
  }
}
