BSShader *__thiscall BSShader::BSShader(BSShader *this)
{
  NiD3DPass *Unk070; // ecx

  NiD3DShader::NiD3DShader((NiD3DShader *)this); /*0x802569*/
  this->__vftable = (BSShaderVtbl *)&BSShader::`vftable'; /*0x802588*/
  ArrayConstructor( /*0x80258e*/
    (char *)&this->member.Unk070,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  Unk070 = (NiD3DPass *)this->member.Unk070; /*0x802593*/
  if ( Unk070 ) /*0x80259c*/
  {
    if ( Unk070->RefCount-- == 1 ) /*0x80259e*/
      NiD3DPass_ReleaseToPool(Unk070); /*0x8025a4*/
    this->member.Unk070 = 0; /*0x8025a9*/
  }
  LOBYTE(this->member.Unk078) = 0; /*0x8025b1*/
  return this; /*0x8025b5*/
}
