RefractionShader *__thiscall RefractionShader::RefractionShader(RefractionShader *this)
{
  NiD3DPixelShader **Pixel; // ebx
  NiD3DVertexShader *v3; // ebp
  NiD3DPixelShader *v4; // edi
  NiD3DPass *v5; // ecx
  UInt32 v7; // edi

  BSImageSpaceShader::BSImageSpaceShader(&this->super);
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&RefractionShader::`vftable';
  ArrayConstructor(
    this->Vertex,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  Pixel = this->Pixel;
  ArrayConstructor(
    this->Pixel,
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
  this->Unk90[2] = 0;
  this->Unk90[0] = 0;
  v3 = this->Vertex[0];
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1);
    }
    this->Vertex[0] = 0;
  }
  v4 = *Pixel;
  if ( *Pixel )
  {
    if ( !InterlockedDecrement((volatile LONG *)v4 + 1) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1);
    }
    *Pixel = 0;
  }
  v5 = (NiD3DPass *)this->Unk90[1];
  if ( v5 )
  {
    if ( v5->RefCount-- == 1 )
      sub_7604D0(v5);
    this->Unk90[1] = 0;
  }
  v7 = this->Unk90[2];
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1);
    this->Unk90[2] = 0;
  }
  this->super.member.super.super.IsInitialized = 1;
  return this;
}
