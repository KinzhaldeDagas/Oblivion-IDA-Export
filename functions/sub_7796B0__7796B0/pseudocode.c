NiDX9TextureData *__thiscall sub_7796B0(NiDX9TextureData *this, char a2)
{
  NiDX9Renderer *pRenderer; // ecx
  NiTexture *parent; // edx

  pRenderer = this->pRenderer; /*0x7796b3*/
  parent = this->parent; /*0x7796b6*/
  this->_vtbl = &NiDX9DynamicTextureData::`vftable'; /*0x7796b9*/
  pRenderer->__vftable->DeleteDynamicTexture(pRenderer, (UInt32)parent); /*0x7796c8*/
  NiDX9TextureData::Release(this); /*0x7796cc*/
  if ( (a2 & 1) != 0 ) /*0x7796d6*/
    FormHeapFree((unsigned int)this); /*0x7796d9*/
  return this; /*0x7796e3*/
}
