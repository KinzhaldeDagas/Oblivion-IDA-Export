// Initializes stock CLeafGeometry from CTreeEngine leaf LOD count, all-leaves pointer, and leaf-info member.
void __thiscall OB_CLeafGeometry_Init_010201A0(
        OB_CLeafGeometry_010201A0 *this,
        unsigned __int16 leafLodCount,
        const OB_stVectorBillboardLeafPtr_010201A0 *leafLods,
        const OB_SIdvLeafInfo_010201A0 *leafInfo)
{
  OB_SIdvLeafTexture_010201A0 *begin; // eax
  int v7; // ebp
  OB_stVec3_010201A0 *v8; // eax
  OB_stVec3_010201A0 *v9; // ebx
  int leafTextureCount; // ebp
  int v11; // ecx
  OB_stVec3_010201A0 *v12; // eax
  OB_stVec3_010201A0 *v13; // ebx
  int v14; // ebp
  unsigned int v15; // ebx
  OB_SIdvLeafTexture_010201A0 *v16; // eax
  OB_SIdvLeafTexture_010201A0 *v17; // eax
  float v18; // edx
  int sizeUsed; // ecx
  OB_stVec3_010201A0 *v20; // eax
  OB_SIdvLeafTexture_010201A0 *v21; // eax
  OB_SIdvLeafTexture_010201A0 *v22; // edx
  OB_stVec3_010201A0 *v23; // eax
  const OB_SIdvLeafInfo_010201A0 *leafInfoa; // [esp+2Ch] [ebp+Ch]

  this->rockingGroupCount = leafInfo->rockingGroupCount; /*0x79934e*/
  this->timeOffsets = leafInfo->rockingTimeOffsets; /*0x799355*/
  this->perLodLeafCardVertexTables = leafInfo->leafVertexTables; /*0x79935b*/
  this->leafDiffuseTexcoords = leafInfo->leafTexcoordTable; /*0x799361*/
  begin = leafInfo->leafTextures.begin; /*0x799364*/
  if ( begin ) /*0x799369*/
    begin = (OB_SIdvLeafTexture_010201A0 *)(leafInfo->leafTextures.end - begin); /*0x79937f*/
  v7 = (unsigned __int16)begin; /*0x799381*/
  this->leafTextureCount = (unsigned __int16)begin; /*0x799384*/
  v8 = (OB_stVec3_010201A0 *)FormHeapAlloc(
                               (0xC * (unsigned __int64)(unsigned __int16)begin) >> 0x20 != 0
                             ? 0xFFFFFFFF
                             : 0xC * (unsigned __int16)begin);
  v9 = v8; /*0x7993a0*/
  if ( v8 ) /*0x7993b3*/
    sub_401080(v8, 0xC, v7, (void *(__thiscall *)(void *))OB_stVec3_ctor_zero_010201A0); /*0x7993be*/
  else
    v9 = 0; /*0x7993c5*/
  leafTextureCount = this->leafTextureCount; /*0x7993c7*/
  v11 = (0xC * (unsigned __int64)this->leafTextureCount) >> 0x20 != 0; /*0x7993d6*/
  this->leafTextureDimensions = v9; /*0x7993e1*/
  v12 = (OB_stVec3_010201A0 *)FormHeapAlloc((0xC * leafTextureCount) | -v11); /*0x7993e9*/
  v13 = v12; /*0x7993ee*/
  if ( v12 ) /*0x799401*/
    sub_401080(v12, 0xC, leafTextureCount, (void *(__thiscall *)(void *))OB_stVec3_ctor_zero_010201A0); /*0x79940c*/
  else
    v13 = 0; /*0x799413*/
  this->leafTextureOrigins = v13; /*0x799415*/
  v14 = 0; /*0x799418*/
  v15 = 0; /*0x79941a*/
  if ( this->leafTextureCount ) /*0x79941c*/
  {
    leafInfoa = 0; /*0x79942e*/
    do /*0x7994cd*/
    {
      v16 = leafInfo->leafTextures.begin; /*0x799432*/
      if ( !v16 || v15 >= leafInfo->leafTextures.end - v16 ) /*0x799451*/
        _invalid_parameter_noinfo(v15, (int)this, (int)leafInfo); /*0x799453*/
      v17 = leafInfo->leafTextures.begin; /*0x799458*/
      v18 = v17[v14].sizeUsed[0]; /*0x79945b*/
      sizeUsed = (int)v17[v14].sizeUsed; /*0x79945f*/
      v20 = (OB_stVec3_010201A0 *)(&leafInfoa->dimmingEnabled + (unsigned int)this->leafTextureDimensions); /*0x799466*/
      v20->x = v18; /*0x79946a*/
      v20->y = *(float *)(sizeUsed + 4); /*0x79946f*/
      v20->z = *(float *)(sizeUsed + 8); /*0x799475*/
      v21 = leafInfo->leafTextures.begin; /*0x799478*/
      if ( !v21 || v15 >= leafInfo->leafTextures.end - v21 ) /*0x799497*/
        _invalid_parameter_noinfo(v15, (int)this, (int)leafInfo); /*0x799499*/
      v22 = leafInfo->leafTextures.begin; /*0x79949e*/
      v23 = (OB_stVec3_010201A0 *)(&leafInfoa->dimmingEnabled + (unsigned int)this->leafTextureOrigins); /*0x7994a4*/
      leafInfoa = (const OB_SIdvLeafInfo_010201A0 *)((char *)leafInfoa + 0xC); /*0x7994a8*/
      v23->x = v22[v14].textureOrigin[0]; /*0x7994b3*/
      v23->y = v22[v14].textureOrigin[1]; /*0x7994b8*/
      v23->z = v22[v14].textureOrigin[2]; /*0x7994be*/
      ++v15; /*0x7994c5*/
      ++v14; /*0x7994c8*/
    }
    while ( (int)v15 < this->leafTextureCount ); /*0x7994cd*/
  }
  this->vertexProgramBillboardTable = (float *)FormHeapAlloc(
                                                 (unsigned __int64)(0x20
                                                                  * this->rockingGroupCount
                                                                  * (unsigned int)this->leafTextureCount) >> 0x1E != 0
                                               ? 0xFFFFFFFF
                                               : (this->rockingGroupCount * this->leafTextureCount) << 7);
  OB_CLeafGeometry_InitLods_010201A0(this, leafLodCount, (int)leafLods); /*0x799509*/
}
