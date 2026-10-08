NiDX9TextureData *__thiscall NiDX9TextureData::NiDX9TextureData(
        NiDX9TextureData *this,
        NiTexture *a2,
        NiDX9Renderer *a3)
{
  this->pRenderer = a3; /*0x7738eb*/
  this->parent = a2; /*0x7738f1*/
  this->_vtbl = &NiDX9TextureData::`vftable'; /*0x7738f4*/
  InitSurfacEData((NiSurfaceData *)&this->PixelFormat); /*0x7738fa*/
  this->dTexture = 0; /*0x773901*/
  this->Width = 0; /*0x773904*/
  this->Height = 0; /*0x773907*/
  this->Levels = 0; /*0x77390a*/
  return this; /*0x77390f*/
}
