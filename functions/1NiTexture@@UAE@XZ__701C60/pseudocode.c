void __thiscall NiTexture::~NiTexture(NiTexture *this)
{
  NiDX9TextureData *rendererData; // ecx

  this->__vftable = (NiTextureVtbl *)&NiTexture::`vftable'; /*0x701c88*/
  rendererData = this->members.rendererData; /*0x701c8e*/
  if ( rendererData ) /*0x701c9b*/
    (*(void (__thiscall **)(NiDX9TextureData *, int))rendererData->_vtbl)(rendererData, 1); /*0x701ca3*/
  sub_701B80(this); /*0x701ca7*/
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this); /*0x701cb6*/
}
