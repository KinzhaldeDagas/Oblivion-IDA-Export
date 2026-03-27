BSShader *__thiscall BSShader::BSShader(BSShader *this)
{
  NiD3DPass *Unk070; // ecx

  NiD3DShader::NiD3DShader((NiD3DShader *)this);
  this->__vftable = (BSShaderVtbl *)&BSShader::`vftable';
  ArrayConstructor(
    &this->member.Unk070,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  Unk070 = (NiD3DPass *)this->member.Unk070;
  if ( Unk070 )
  {
    if ( Unk070->RefCount-- == 1 )
      sub_7604D0(Unk070);
    this->member.Unk070 = 0;
  }
  LOBYTE(this->member.Unk078) = 0;
  return this;
}
