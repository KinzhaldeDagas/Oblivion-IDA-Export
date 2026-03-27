NighteyeShader *__thiscall NighteyeShader::NighteyeShader(NighteyeShader *this)
{
  void **pixel; // ebx
  volatile LONG *v3; // ebp
  volatile LONG *v4; // edi
  NiD3DPass *v5; // ecx

  BSImageSpaceShader::BSImageSpaceShader(&this->super);
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&NighteyeShader::`vftable';
  ArrayConstructor(
    this->vertex,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  pixel = this->pixel;
  ArrayConstructor(
    this->pixel,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    &this->Unk90[1],
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->Unk90[0] = 0;
  v3 = (volatile LONG *)this->vertex[0];
  if ( v3 )
  {
    if ( !InterlockedDecrement(v3 + 1) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(void *, int))v3)((void *)v3, 1);
    }
    this->vertex[0] = 0;
  }
  v4 = (volatile LONG *)*pixel;
  if ( *pixel )
  {
    if ( !InterlockedDecrement(v4 + 1) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1);
    }
    *pixel = 0;
  }
  v5 = (NiD3DPass *)this->Unk90[1];
  if ( v5 )
  {
    if ( v5->RefCount-- == 1 )
      sub_7604D0(v5);
    this->Unk90[1] = 0;
  }
  this->super.member.super.super.IsInitialized = 1;
  return this;
}
