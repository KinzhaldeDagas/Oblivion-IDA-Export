void __thiscall NiRenderedTexture::~NiRenderedTexture(NiRenderedTexture *this)
{
  Ni2DBuffer *buffer; // esi

  buffer = this->member.buffer;
  if ( buffer )
  {
    if ( !InterlockedDecrement((volatile LONG *)&buffer->members) )
      (*(void (__thiscall **)(Ni2DBuffer *, int))buffer->__vftable)(buffer, 1);
  }
  NiTexture::~NiTexture((NiTexture *)this);
}
