void __thiscall BSImageSpaceShader::~BSImageSpaceShader(BSImageSpaceShader *this)
{
  BSRenderedTexture *Unk07C; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  BSRenderedTexture *v4; // edi

  this->__vftable = (BSImageSpaceShaderVtbl *)&BSImageSpaceShader::`vftable';
  Unk07C = this->member.Unk07C;
  v3 = InterlockedDecrement;
  if ( Unk07C )
  {
    if ( !v3((volatile LONG *)&Unk07C->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1);
    this->member.Unk07C = 0;
  }
  this->member.Unk080 = 0;
  this->member.Unk084 = 0;
  this->member.Unk088 = 0;
  this->member.Unk08C = 0;
  v4 = this->member.Unk07C;
  if ( v4 )
  {
    if ( !v3((volatile LONG *)&v4->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v4->vtbl)(v4, 1);
  }
  BSShader::~BSShader((BSShader *)this);
}
