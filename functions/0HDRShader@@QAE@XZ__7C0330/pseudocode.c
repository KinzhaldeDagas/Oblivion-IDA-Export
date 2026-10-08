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

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7c035d*/
  this->__vftable = (HDRShaderVtbl *)&HDRShader::`vftable'; /*0x7c037d*/
  ArrayConstructor( /*0x7c0383*/
    (char *)this->Vertex,
    4u,
    8,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  Pixel = this->Pixel; /*0x7c0396*/
  ArrayConstructor( /*0x7c03a2*/
    (char *)this->Pixel,
    4u,
    8,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x7c03c1*/
    (char *)this->passes,
    4u,
    0xD,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  this->unk118 = 0; /*0x7c03c6*/
  this->unk11C = 0; /*0x7c03cc*/
  this->unkD0 = 0; /*0x7c03d7*/
  v15 = 8; /*0x7c03dd*/
  do /*0x7c0441*/
  {
    v3 = Pixel[0xFFFFFFF8]; /*0x7c03e5*/
    if ( v3 ) /*0x7c03ea*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v3 + 1) ) /*0x7c03f0*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v3)(v3, 1); /*0x7c0407*/
      Pixel[0xFFFFFFF8] = 0; /*0x7c0409*/
    }
    v4 = *Pixel; /*0x7c0410*/
    if ( *Pixel ) /*0x7c0410*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7c041a*/
      {
        if ( v4 ) /*0x7c0426*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1); /*0x7c0431*/
      }
      *Pixel = 0; /*0x7c0433*/
    }
    ++Pixel; /*0x7c0439*/
    --v15; /*0x7c043c*/
  }
  while ( v15 ); /*0x7c0441*/
  passes = this->passes; /*0x7c0443*/
  v6 = 0xD; /*0x7c0445*/
  do /*0x7c046c*/
  {
    v7 = *passes; /*0x7c0450*/
    if ( *passes ) /*0x7c0450*/
    {
      if ( v7->RefCount-- == 1 ) /*0x7c0456*/
        NiD3DPass_ReleaseToPool(v7); /*0x7c045b*/
      *passes = 0; /*0x7c0460*/
    }
    ++passes; /*0x7c0466*/
    --v6; /*0x7c0469*/
  }
  while ( v6 ); /*0x7c046c*/
  v9 = InterlockedDecrement; /*0x7c046e*/
  this->member.super.super.IsInitialized = 1; /*0x7c0474*/
  unk118 = this->unk118; /*0x7c0478*/
  if ( unk118 ) /*0x7c0480*/
  {
    if ( !v9((volatile LONG *)(unk118 + 4)) ) /*0x7c0486*/
      (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1); /*0x7c0498*/
    this->unk118 = 0; /*0x7c049a*/
  }
  unk11C = this->unk11C; /*0x7c04a4*/
  if ( unk11C ) /*0x7c04ac*/
  {
    if ( !v9((volatile LONG *)(unk11C + 4)) ) /*0x7c04b2*/
      (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1); /*0x7c04c4*/
    this->unk11C = 0; /*0x7c04c6*/
  }
  v12 = unk_B43328; /*0x7c04d0*/
  if ( unk_B43328 ) /*0x7c04d0*/
  {
    if ( !v9((volatile LONG *)&v12->members) ) /*0x7c04de*/
    {
      if ( v12 ) /*0x7c04e6*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v12->vtbl)(v12, 1); /*0x7c04f0*/
    }
    unk_B43328 = 0; /*0x7c04f2*/
  }
  v13 = OB_RendererGlobalState_010201A0.bFP16ARGBFiltering /*0x7c050e*/
     && OB_RendererGlobalState_010201A0.bMinAnisotropicFilterSupport;
  LOBYTE(this->unk120) = v13; /*0x7c0517*/
  return this; /*0x7c051f*/
}
