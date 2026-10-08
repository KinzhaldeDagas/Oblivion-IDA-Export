NiSourceTexture *__thiscall NiSourceTexture::NiSourceTexture(NiSourceTexture *this)
{
  NiObjectNET::NiObjectNET((NiObjectNET *)this); /*0x701cd4*/
  this->vtbl = (NiSourceTextureVtbl *)&NiTexture::`vftable'; /*0x701cd9*/
  this->members.super.formatPrefs.pixelLayout = kPixelLayout_PixDefault; /*0x701cdf*/
  this->members.super.formatPrefs.alphaFormat = kAlpha_Default; /*0x701ce6*/
  this->members.super.formatPrefs.mipmapFormat = kMipMap_Default; /*0x701ced*/
  this->members.super.rendererData = 0; /*0x701cf8*/
  sub_701B00(this); /*0x701cfb*/
  this->members.unk030 = 0; /*0x701d00*/
  this->members.unk034 = 0; /*0x701d03*/
  this->members.fileName = 0; /*0x701d06*/
  this->vtbl = (NiSourceTextureVtbl *)&NiSourceTexture::`vftable'; /*0x701d0b*/
  this->members.pixelData = 0; /*0x701d11*/
  this->members.loadDirectToRender = 1; /*0x701d14*/
  this->members.persistRenderData = 1; /*0x701d17*/
  this->members.unk044 = 0; /*0x701d1a*/
  return this; /*0x701d1f*/
}
