BSImageSpaceShader *__thiscall BSImageSpaceShader::BSImageSpaceShader(BSImageSpaceShader *this)
{
  BSRenderedTexture *Unk07C; // edi

  BSShader::BSShader((BSShader *)this);
  this->__vftable = (BSImageSpaceShaderVtbl *)&BSImageSpaceShader::`vftable';
  this->member.Unk07C = 0;
  Unk07C = this->member.Unk07C;
  if ( Unk07C )
  {
    if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1);
    this->member.Unk07C = 0;
  }
  this->member.Unk080 = 0;
  this->member.Unk084 = 0;
  this->member.Unk088 = 0;
  this->member.Unk08C = 0;
  return this;
}
