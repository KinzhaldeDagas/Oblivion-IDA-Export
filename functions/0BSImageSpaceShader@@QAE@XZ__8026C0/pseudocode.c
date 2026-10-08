// MoonSugarEffect decode: BSImageSpaceShader base ctor calls BSShader ctor, sets vtable, clears source texture +0x7C and scalar fields +0x80..+0x8C.
BSImageSpaceShader *__thiscall BSImageSpaceShader::BSImageSpaceShader(BSImageSpaceShader *this)
{
  BSRenderedTexture *Unk07C; // edi

  BSShader::BSShader((BSShader *)this); /*0x8026e9*/
  this->__vftable = (BSImageSpaceShaderVtbl *)&BSImageSpaceShader::`vftable'; /*0x8026ee*/
  this->member.Unk07C = 0; /*0x8026fc*/
  Unk07C = this->member.Unk07C; /*0x802703*/
  if ( Unk07C ) /*0x80270d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) ) /*0x802713*/
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1); /*0x802729*/
    this->member.Unk07C = 0; /*0x80272b*/
  }
  this->member.Unk080 = 0; /*0x802734*/
  this->member.Unk084 = 0; /*0x80273a*/
  this->member.Unk088 = 0; /*0x802740*/
  this->member.Unk08C = 0; /*0x802746*/
  return this; /*0x80274e*/
}
