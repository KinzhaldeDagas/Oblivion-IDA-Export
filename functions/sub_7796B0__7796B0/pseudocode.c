NiDX9TextureData *__thiscall sub_7796B0(NiDX9TextureData *this, char a2)
{
  NiDX9Renderer *pRenderer; // ecx
  NiTexture *parent; // edx

  pRenderer = this->pRenderer;
  parent = this->parent;
  this->_vtbl = &NiDX9DynamicTextureData::`vftable';
  pRenderer->__vftable->DeleteDynamicTexture(pRenderer, (UInt32)parent);
  NiDX9TextureData::Release(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
