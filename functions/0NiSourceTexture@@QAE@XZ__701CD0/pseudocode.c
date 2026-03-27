NiSourceTexture *__thiscall NiSourceTexture::NiSourceTexture(NiSourceTexture *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->vtbl = (NiSourceTextureVtbl *)&NiTexture::`vftable';
  this->members.super.formatPrefs.pixelLayout = kPixelLayout_PixDefault;
  this->members.super.formatPrefs.alphaFormat = kAlpha_Default;
  this->members.super.formatPrefs.mipmapFormat = kMipMap_Default;
  this->members.super.rendererData = 0;
  sub_701B00(this);
  this->members.unk030 = 0;
  this->members.unk034 = 0;
  this->members.fileName = 0;
  this->vtbl = (NiSourceTextureVtbl *)&NiSourceTexture::`vftable';
  this->members.pixelData = 0;
  this->members.loadDirectToRender = 1;
  this->members.persistRenderData = 1;
  this->members.unk044 = 0;
  return this;
}
