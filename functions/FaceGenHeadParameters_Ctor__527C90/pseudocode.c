// Constructs a 0xC4 FaceGenRenderState. The first 0x60 bytes are FaceGenHeadParameters; appearance assets and four 0x10-byte pointer arrays follow.
FaceGenRenderState *__thiscall FaceGenRenderState_Construct(FaceGenRenderState *this)
{
  int i; // ecx
  int v3; // edi
  int j; // ecx
  int v5; // edi
  int k; // ecx
  int v7; // edi

  ArrayConstructor( /*0x527cc5*/
    (char *)this,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  this->headModels.vtable = &NiTArray<TESModel *>::`vftable'; /*0x527cd1*/
  this->headModels.capacity = 0; /*0x527cd8*/
  this->headModels.growSize = 1; /*0x527cdc*/
  this->headModels.firstFree = 0; /*0x527ce3*/
  this->headModels.objectCount = 0; /*0x527ce7*/
  this->headModels.data = 0; /*0x527cee*/
  this->headTextures.vtable = &NiTArray<TESTexture *>::`vftable'; /*0x527cf1*/
  this->headTextures.capacity = 0; /*0x527cfb*/
  this->headTextures.growSize = 1; /*0x527d02*/
  this->headTextures.firstFree = 0; /*0x527d09*/
  this->headTextures.objectCount = 0; /*0x527d10*/
  this->headTextures.data = 0; /*0x527d17*/
  this->nodeNames.vtable = &NiTArray<char const *>::`vftable'; /*0x527d1d*/
  this->nodeNames.capacity = 0; /*0x527d27*/
  this->nodeNames.growSize = 1; /*0x527d2e*/
  this->nodeNames.firstFree = 0; /*0x527d35*/
  this->nodeNames.objectCount = 0; /*0x527d3c*/
  this->nodeNames.data = 0; /*0x527d43*/
  this->textureOverrides.vtable = &NiTArray<NiPointer<NiTexture>>::`vftable'; /*0x527d4b*/
  this->textureOverrides.capacity = 0; /*0x527d55*/
  this->textureOverrides.growSize = 1; /*0x527d5c*/
  this->textureOverrides.firstFree = 0; /*0x527d63*/
  this->textureOverrides.objectCount = 0; /*0x527d6a*/
  this->textureOverrides.data = 0; /*0x527d71*/
  this->hairLength = 0.0; /*0x527d77*/
  this->hair = 0; /*0x527d7a*/
  this->hairColorRGB = 0; /*0x527d7d*/
  this->eyes = 0; /*0x527d80*/
  this->isFemale = 0; /*0x527d83*/
  for ( i = 0; (unsigned __int16)i < this->headModels.firstFree; this->headModels.data[v3] = 0 ) /*0x527d88*/
    v3 = (unsigned __int16)i++; /*0x527d93*/
  this->headModels.firstFree = 0; /*0x527da1*/
  this->headModels.objectCount = 0; /*0x527da5*/
  for ( j = 0; (unsigned __int16)j < this->headTextures.firstFree; this->headTextures.data[v5] = 0 ) /*0x527dae*/
    v5 = (unsigned __int16)j++; /*0x527dc6*/
  this->headTextures.firstFree = 0; /*0x527dd7*/
  this->headTextures.objectCount = 0; /*0x527dde*/
  for ( k = 0; (unsigned __int16)k < this->nodeNames.firstFree; this->nodeNames.data[v7] = 0 ) /*0x527de7*/
    v7 = (unsigned __int16)k++; /*0x527df6*/
  this->nodeNames.firstFree = 0; /*0x527e07*/
  this->nodeNames.objectCount = 0; /*0x527e0e*/
  this->useTextureOverrides = 0; /*0x527e15*/
  this->renderFlags = 0xFFFFFFFF; /*0x527e1b*/
  return this; /*0x527e27*/
}
