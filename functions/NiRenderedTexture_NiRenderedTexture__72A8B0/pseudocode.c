NiRenderedTexture *__thiscall NiRenderedTexture::NiRenderedTexture(NiRenderedTexture *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x72a8b3*/
  this->__vftable = (NiRenderedTextureVtbl *)&NiTexture::`vftable'; /*0x72a8b8*/
  this->member.super.formatPrefs.pixelLayout = kPixelLayout_PixDefault; /*0x72a8be*/
  this->member.super.formatPrefs.alphaFormat = kAlpha_Default; /*0x72a8c5*/
  this->member.super.formatPrefs.mipmapFormat = kMipMap_Default; /*0x72a8cc*/
  this->member.super.rendererData = 0; /*0x72a8d5*/
  sub_701B00((NiSourceTexture *)this); /*0x72a8dc*/
  this->__vftable = (NiRenderedTextureVtbl *)&NiRenderedTexture::`vftable'; /*0x72a8e1*/
  this->member.buffer = 0; /*0x72a8e7*/
  return this; /*0x72a8f0*/
}
