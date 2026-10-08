// MoonSugarEffect decode: RefractionShader ctor owns one vertex program, one pixel program, one pass, and extra texture slot +0xA0 used for dword_B474AC inner texture.
RefractionShader *__thiscall RefractionShader::RefractionShader(RefractionShader *this)
{
  NiD3DPixelShader **Pixel; // ebx
  NiD3DVertexShader *v3; // ebp
  NiD3DPixelShader *v4; // edi
  NiD3DPass *v5; // ecx
  UInt32 v7; // edi

  BSImageSpaceShader::BSImageSpaceShader(&this->super); /*0x800b9b*/
  this->super.__vftable = (BSImageSpaceShaderVtbl *)&RefractionShader::`vftable'; /*0x800bbb*/
  ArrayConstructor( /*0x800bc1*/
    (char *)this->Vertex,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  Pixel = this->Pixel; /*0x800bd4*/
  ArrayConstructor( /*0x800be0*/
    (char *)this->Pixel,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x800bff*/
    (char *)&this->Unk90[1],
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->Unk90[2] = 0; /*0x800c04*/
  this->Unk90[0] = 0; /*0x800c0a*/
  v3 = this->Vertex[0]; /*0x800c10*/
  if ( v3 ) /*0x800c19*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x800c1f*/
    {
      if ( v3 ) /*0x800c2b*/
        (**(void (__thiscall ***)(NiD3DVertexShader *, int))v3)(v3, 1); /*0x800c36*/
    }
    this->Vertex[0] = 0; /*0x800c38*/
  }
  v4 = *Pixel; /*0x800c3e*/
  if ( *Pixel ) /*0x800c3e*/
  {
    if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x800c48*/
    {
      if ( v4 ) /*0x800c54*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1); /*0x800c5e*/
    }
    *Pixel = 0; /*0x800c60*/
  }
  v5 = (NiD3DPass *)this->Unk90[1]; /*0x800c66*/
  if ( v5 ) /*0x800c6e*/
  {
    if ( v5->RefCount-- == 1 ) /*0x800c70*/
      NiD3DPass_ReleaseToPool(v5); /*0x800c76*/
    this->Unk90[1] = 0; /*0x800c7b*/
  }
  v7 = this->Unk90[2]; /*0x800c85*/
  if ( v7 ) /*0x800c8d*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x800c93*/
      (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1); /*0x800ca9*/
    this->Unk90[2] = 0; /*0x800cab*/
  }
  this->super.member.super.super.IsInitialized = 1; /*0x800cb7*/
  return this; /*0x800cbb*/
}
