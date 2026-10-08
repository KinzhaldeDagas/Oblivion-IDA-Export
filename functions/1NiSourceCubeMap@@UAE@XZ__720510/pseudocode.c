void __thiscall NiSourceCubeMap::~NiSourceCubeMap(NiSourceTexture *this)
{
  NiPixelData *pixelData; // esi

  this->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL; /*0x720539*/
  pixelData = this->members.pixelData; /*0x72053f*/
  if ( pixelData ) /*0x72054c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)pixelData + 1) ) /*0x720552*/
      (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1); /*0x720568*/
    this->members.pixelData = 0; /*0x72056a*/
  }
  NiSourceTexture::~NiSourceTexture(this); /*0x72057b*/
}
