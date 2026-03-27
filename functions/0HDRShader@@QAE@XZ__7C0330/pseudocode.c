HDRShader *__thiscall HDRShader::HDRShader(HDRShader *this)
{
  NiD3DPixelShader **Pixel; // edi
  NiD3DPixelShader *v3; // ebp
  NiD3DPixelShader *v4; // ebp
  NiD3DPass **passes; // edi
  int v6; // ebp
  NiD3DPass *v7; // ecx
  LONG (__stdcall *v9)(volatile LONG *); // ebp
  UInt32 unk118; // edi
  UInt32 unk11C; // edi
  BSRenderedTexture *v12; // edi
  bool v13; // al
  int v15; // [esp+14h] [ebp-14h]

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  this->__vftable = (HDRShaderVtbl *)&HDRShader::`vftable';
  ArrayConstructor(
    this->Vertex,
    4u,
    8,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  Pixel = this->Pixel;
  ArrayConstructor(
    this->Pixel,
    4u,
    8,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    this->passes,
    4u,
    0xD,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->unk118 = 0;
  this->unk11C = 0;
  this->unkD0 = 0;
  v15 = 8;
  do
  {
    v3 = Pixel[0xFFFFFFF8];
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v3)(v3, 1);
      Pixel[0xFFFFFFF8] = 0;
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
    ++Pixel;
    --v15;
  }
  while ( v15 );
  passes = this->passes;
  v6 = 0xD;
  do
  {
    v7 = *passes;
    if ( *passes )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *passes = 0;
    }
    ++passes;
    --v6;
  }
  while ( v6 );
  v9 = InterlockedDecrement;
  this->member.super.super.IsInitialized = 1;
  unk118 = this->unk118;
  if ( unk118 )
  {
    if ( !v9((volatile LONG *)(unk118 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1);
    this->unk118 = 0;
  }
  unk11C = this->unk11C;
  if ( unk11C )
  {
    if ( !v9((volatile LONG *)(unk11C + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1);
    this->unk11C = 0;
  }
  v12 = dword_B43328;
  if ( dword_B43328 )
  {
    if ( !v9((volatile LONG *)&v12->members) )
    {
      if ( v12 )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v12->vtbl)(v12, 1);
    }
    dword_B43328 = 0;
  }
  v13 = byte_B43071 && byte_B43072;
  LOBYTE(this->unk120) = v13;
  return this;
}
