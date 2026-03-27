void __thiscall NiTexture::~NiTexture(NiTexture *this)
{
  NiDX9TextureData *rendererData; // ecx

  this->__vftable = (NiTextureVtbl *)&NiTexture::`vftable';
  rendererData = this->members.rendererData;
  if ( rendererData )
    (*(void (__thiscall **)(NiDX9TextureData *, int))rendererData->_vtbl)(rendererData, 1);
  sub_701B80(this);
  NiDitherProperty::~NiDitherProperty((NiDitherProperty *)this);
}
