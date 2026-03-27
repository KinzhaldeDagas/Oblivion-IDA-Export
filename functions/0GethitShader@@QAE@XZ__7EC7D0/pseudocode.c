GethitShader *__thiscall GethitShader::GethitShader(GethitShader *this)
{
  BSImageSpaceShader::BSImageSpaceShader(&this->super);
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&GethitShader::`vftable';
  ArrayConstructor(
    this->Vertex,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    this->Pixel,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  this->UnkA8[0] = 0;
  this->UnkA8[1] = 0;
  this->Unk90 = 0;
  this->super.member.super.super.IsInitialized = 1;
  return this;
}
