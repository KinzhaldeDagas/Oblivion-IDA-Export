// MoonSugarEffect decode: GethitShader ctor owns 3 vertex programs, 3 pixel programs, two pass slots, and uses base source texture +0x7C.
GethitShader *__thiscall GethitShader::GethitShader(GethitShader *this)
{
  BSImageSpaceShader::BSImageSpaceShader(&this->super); /*0x7ec7f9*/
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&GethitShader::`vftable'; /*0x7ec819*/
  ArrayConstructor( /*0x7ec81f*/
    (char *)this->Vertex,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7ec83e*/
    (char *)this->Pixel,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  this->UnkA8[0] = 0; /*0x7ec843*/
  this->UnkA8[1] = 0; /*0x7ec849*/
  this->Unk90 = 0; /*0x7ec84f*/
  this->super.member.super.super.IsInitialized = 1; /*0x7ec855*/
  return this; /*0x7ec85b*/
}
