NiRenderedTexture *__thiscall NiRenderedTexture::NiRenderedTexture(NiRenderedTexture *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this);
  this->__vftable = (NiRenderedTextureVtbl *)&NiTexture::`vftable';
  this->member.super.formatPrefs.pixelLayout = kPixelLayout_PixDefault;
  this->member.super.formatPrefs.alphaFormat = kAlpha_Default;
  this->member.super.formatPrefs.mipmapFormat = kMipMap_Default;
  this->member.super.rendererData = 0;
  sub_701B00((NiSourceTexture *)this);
  this->__vftable = (NiRenderedTextureVtbl *)&NiRenderedTexture::`vftable';
  this->member.buffer = 0;
  return this;
}
