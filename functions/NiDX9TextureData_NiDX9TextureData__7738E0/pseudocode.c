NiDX9TextureData *__thiscall NiDX9TextureData::NiDX9TextureData(
        NiDX9TextureData *this,
        NiTexture *a2,
        NiDX9Renderer *a3)
{
  this->pRenderer = a3;
  this->parent = a2;
  this->_vtbl = &NiDX9TextureData::`vftable';
  InitSurfacEData((NiSurfaceData *)&this->PixelFormat);
  this->dTexture = 0;
  this->Width = 0;
  this->Height = 0;
  this->Levels = 0;
  return this;
}
