void __thiscall NiSourceCubeMap::~NiSourceCubeMap(NiSourceTexture *this)
{
  NiPixelData *pixelData; // esi

  this->vtbl = (NiSourceTextureVtbl *)&NiSourceCubeMap::VTBL;
  pixelData = this->members.pixelData;
  if ( pixelData )
  {
    if ( !InterlockedDecrement((volatile LONG *)pixelData + 1) )
      (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1);
    this->members.pixelData = 0;
  }
  NiSourceTexture::~NiSourceTexture(this);
}
