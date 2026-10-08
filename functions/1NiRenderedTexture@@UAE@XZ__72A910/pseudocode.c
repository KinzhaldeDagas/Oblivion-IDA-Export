void __thiscall NiRenderedTexture::~NiRenderedTexture(NiRenderedTexture *this)
{
  Ni2DBuffer *buffer; // esi

  buffer = this->member.buffer; /*0x72a939*/
  if ( buffer ) /*0x72a946*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&buffer->members) ) /*0x72a94c*/
      (*(void (__thiscall **)(Ni2DBuffer *, int))buffer->__vftable)(buffer, 1); /*0x72a962*/
  }
  NiTexture::~NiTexture((NiTexture *)this); /*0x72a96e*/
}
