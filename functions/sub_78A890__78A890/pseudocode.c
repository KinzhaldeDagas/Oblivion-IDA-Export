//
//
// [2026-10-03 texture ownership/discovery] Verified summary+0C is full frond filename count and +10 points to the temporary pointer array; index j is material identity, not geometry LOD. Fallout 0x8281D610 corroborates count/array roles with different STL offsets. Plugin removes its 128-candidate truncation, copies ordered case-insensitive unique paths per material, and stores loaded references by shared family/material without live eviction.
//
// [2026-10-03 composite discovery] Verified summary[5] (+14) is the legacy embedded composite filename, distinct from per-map frond names summary[4]. Plugin now copies this candidate before temporary-summary cleanup unless a later60005/70002 composite record overrides or clears it. Composite is stored under a distinct family cache key and selected with atlas coordinates. Authored composite path is tried before its DDS conversion; it is not guessed from a leaf texture pointer.
void __thiscall CSpeedTreeRT__GetTextures(const OB_CSpeedTreeRT_010201A0 *this, OB_CSpeedTreeRT_STextures *texturesOut)
{
  const OB_CSpeedTreeRT_010201A0 *v2; // edi
  char *branchTextureFilenameSmallString; // eax
  bool v4; // cf
  const char *v5; // eax
  unsigned int begin; // eax
  OB_stVector_SIdvLeafTexture_010201A0 *p_leafTextures; // esi
  unsigned int i; // edi
  OB_SIdvLeafTexture_010201A0 *v9; // eax
  OB_SIdvLeafTexture_010201A0 *v10; // ecx
  int p_heapData; // eax
  const char **leafTextureFilenames; // edx
  OB_CFrondEngine_010201A0 *frondEngine; // eax
  void *v14; // edx
  OB_stVector16_010201A0 *p_frondTextureVectorWrapper; // eax
  unsigned int v16; // eax
  unsigned int j; // edi
  OB_CFrondEngine_010201A0 *v18; // esi
  void *v19; // eax
  OB_stVector16_010201A0 *v20; // esi
  int v21; // eax
  const char *v22; // eax
  const char **frondTextureFilenames; // ecx
  OB_CProjectedShadow_010201A0 *projectedShadow; // eax
  const char *v25; // eax
  OB_CSpeedTreeRT_SEmbeddedTexCoords *embeddedTexcoords; // eax
  const char *v27; // eax
  int v28; // [esp+0h] [ebp-60h] BYREF
  const OB_CSpeedTreeRT_010201A0 *v29; // [esp+4Ch] [ebp-14h]
  int *v30; // [esp+50h] [ebp-10h]
  int v31; // [esp+5Ch] [ebp-4h]

  v30 = &v28; /*0x78a8b8*/
  v2 = this; /*0x78a8bb*/
  v29 = this; /*0x78a8bd*/
  branchTextureFilenameSmallString = this->treeEngine->branchTextureFilenameSmallString; /*0x78a8c2*/
  v4 = *(_DWORD *)&this->treeEngine->branchTextureFilenameSmallString[0x18] < 0x10u; /*0x78a8c5*/
  v31 = 0; /*0x78a8c9*/
  if ( v4 ) /*0x78a8d0*/
    v5 = branchTextureFilenameSmallString + 4; /*0x78a8d7*/
  else
    v5 = *((const char **)branchTextureFilenameSmallString + 1); /*0x78a8d2*/
  texturesOut->branchTextureFilename = v5; /*0x78a8dd*/
  begin = (unsigned int)this->treeEngine->leafInfo.leafTextures.begin; /*0x78a8e1*/
  p_leafTextures = &this->treeEngine->leafInfo.leafTextures; /*0x78a8e7*/
  if ( begin ) /*0x78a8ef*/
    begin = (int)((int)this->treeEngine->leafInfo.leafTextures.end - begin) / 0x54; /*0x78a905*/
  texturesOut->leafTextureCount = begin; /*0x78a909*/
  if ( begin )
  {
    texturesOut->leafTextureFilenames = (const char **)FormHeapAlloc((unsigned __int64)begin >> 0x1E != 0 ? 0xFFFFFFFF : 4 * begin);
    for ( i = 0; i < OB_stVector_SIdvLeafTexture_Size_010201A0(p_leafTextures); ++i ) /*0x78a92e*/
    {
      v9 = p_leafTextures->begin; /*0x78a93b*/
      if ( !v9 || i >= p_leafTextures->end - v9 ) /*0x78a95a*/
        _invalid_parameter_noinfo(); /*0x78a95c*/
      v10 = p_leafTextures->begin; /*0x78a961*/
      if ( v10[i].filename.capacity < 0x10 ) /*0x78a972*/
      {
        leafTextureFilenames = texturesOut->leafTextureFilenames; /*0x78a982*/
        p_heapData = (int)&v10[i].filename.storage.heapData; /*0x78a985*/
      }
      else
      {
        p_heapData = (int)v10[i].filename.storage.heapData; /*0x78a974*/
        leafTextureFilenames = texturesOut->leafTextureFilenames; /*0x78a977*/
      }
      leafTextureFilenames[i] = (const char *)p_heapData; /*0x78a97a*/
    }
    v2 = v29; /*0x78a999*/
  }
  else
  {
    texturesOut->leafTextureFilenames = 0; /*0x78a990*/
  }
  frondEngine = v2->frondEngine; /*0x78a99c*/
  v14 = frondEngine->frondTextureVectorWrapper.begin; /*0x78a99f*/
  p_frondTextureVectorWrapper = &frondEngine->frondTextureVectorWrapper; /*0x78a9a2*/
  if ( v14 ) /*0x78a9a7*/
    v16 = ((char *)p_frondTextureVectorWrapper->end - (char *)v14) / 0x2C; /*0x78a9c1*/
  else
    v16 = 0; /*0x78a9a9*/
  texturesOut->frondTextureCount = v16;         // SpeedTreeOBSE 2026-05-31 texture-index pass: GetTextures summary[3] is compact frond texture count; each frond filename pointer at summary[4][index] is cached with textureIndex=index/selector. /*0x78a9c5*/
  if ( v16 )
  {
    texturesOut->frondTextureFilenames = (const char **)FormHeapAlloc((unsigned __int64)v16 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v16);
    for ( j = 0; j < texturesOut->frondTextureCount; ++j ) /*0x78a9ea*/
    {
      v18 = v29->frondEngine; /*0x78a9fc*/
      v19 = v18->frondTextureVectorWrapper.begin; /*0x78a9ff*/
      v20 = &v18->frondTextureVectorWrapper; /*0x78aa02*/
      if ( !v19 || j >= ((char *)v20->end - (char *)v19) / 0x2C ) /*0x78aa21*/
        _invalid_parameter_noinfo(); /*0x78aa23*/
      v21 = (int)v20->begin + 0x2C * j; /*0x78aa2d*/
      if ( *(_DWORD *)(v21 + 0x18) < 0x10u ) /*0x78aa34*/
      {
        frondTextureFilenames = texturesOut->frondTextureFilenames; /*0x78aa44*/
        v22 = (const char *)(v21 + 4); /*0x78aa47*/
      }
      else
      {
        v22 = *(const char **)(v21 + 4); /*0x78aa36*/
        frondTextureFilenames = texturesOut->frondTextureFilenames; /*0x78aa39*/
      }
      frondTextureFilenames[j] = v22;           // SpeedTreeOBSE 2026-05-31 texture-index pass: GetTextures writes compact frond filename pointer to summary[4][j]; plugin treats j as selector textureIndex before map-bank collection-index fallback. /*0x78aa3c*/
    }
    v2 = v29; /*0x78ab0a*/
  }
  else
  {
    texturesOut->frondTextureFilenames = 0; /*0x78ab01*/
  }
  projectedShadow = v2->projectedShadow; /*0x78ab0d*/
  if ( projectedShadow ) /*0x78ab12*/
  {
    if ( *(_DWORD *)&projectedShadow->selfShadowMapString[0x18] < 0x10u ) /*0x78ab18*/
      v25 = (const char *)&projectedShadow->selfShadowMapString[4]; /*0x78ab1f*/
    else
      v25 = *(const char **)&projectedShadow->selfShadowMapString[4]; /*0x78ab1a*/
    texturesOut->projectedShadowTextureFilename = v25; /*0x78ab22*/
  }
  embeddedTexcoords = v2->embeddedTexcoords;    // GetTextures reads CSpeedTreeRT+0x4C embedded texcoord object to export the legacy composite filename. /*0x78ab25*/
  if ( embeddedTexcoords ) /*0x78ab2a*/
  {
    if ( *(_DWORD *)&embeddedTexcoords->compositeTextureFilenameString[0x18] < 0x10u ) /*0x78ab30*/
      v27 = &embeddedTexcoords->compositeTextureFilenameString[4]; /*0x78ab37*/
    else
      v27 = *(const char **)&embeddedTexcoords->compositeTextureFilenameString[4]; /*0x78ab32*/
    texturesOut->compositeTextureFilename = v27;// Writes embedded composite filename to texture summary[5]; BSTreeModel legacy texture setup can bind this same composite surface. /*0x78ab3a*/
  }
}
