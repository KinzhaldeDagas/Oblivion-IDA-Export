void __thiscall HDRShader::~HDRShader(HDRShader *this)
{
  NiD3DPixelShader **Pixel; // edi
  int v3; // ebx
  NiD3DPixelShader *v4; // esi
  NiD3DPixelShader *v5; // esi
  NiD3DPass **passes; // esi
  int v7; // edi
  NiD3DPass *v8; // ecx
  UInt32 unk118; // esi
  LONG (__stdcall *v11)(volatile LONG *); // edi
  UInt32 unk11C; // esi
  BSRenderedTexture *v13; // esi
  UInt32 v14; // esi
  UInt32 v15; // esi

  this->__vftable = (HDRShaderVtbl *)&HDRShader::`vftable'; /*0x7bdbfb*/
  Pixel = this->Pixel; /*0x7bdc0a*/
  v3 = 8; /*0x7bdc10*/
  do /*0x7bdc6d*/
  {
    v4 = Pixel[0xFFFFFFF8]; /*0x7bdc15*/
    if ( v4 ) /*0x7bdc1a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v4 + 1) ) /*0x7bdc20*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))v4)(v4, 1); /*0x7bdc36*/
      Pixel[0xFFFFFFF8] = 0; /*0x7bdc38*/
    }
    v5 = *Pixel; /*0x7bdc3f*/
    if ( *Pixel ) /*0x7bdc3f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x7bdc49*/
      {
        if ( v5 ) /*0x7bdc55*/
          (**(void (__thiscall ***)(NiD3DPixelShader *, int))v5)(v5, 1); /*0x7bdc5f*/
      }
      *Pixel = 0; /*0x7bdc61*/
    }
    ++Pixel; /*0x7bdc67*/
    --v3; /*0x7bdc6a*/
  }
  while ( v3 ); /*0x7bdc6d*/
  passes = this->passes; /*0x7bdc6f*/
  v7 = 0xD; /*0x7bdc75*/
  do /*0x7bdc9d*/
  {
    v8 = *passes; /*0x7bdc80*/
    if ( *passes ) /*0x7bdc80*/
    {
      if ( v8->RefCount-- == 1 ) /*0x7bdc86*/
        NiD3DPass_ReleaseToPool(v8); /*0x7bdc8c*/
      *passes = 0; /*0x7bdc91*/
    }
    ++passes; /*0x7bdc97*/
    --v7; /*0x7bdc9a*/
  }
  while ( v7 ); /*0x7bdc9d*/
  BSTextureManager__ReturnRenderedTexture(*(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4], unk_B43328); /*0x7bdcac*/
  unk118 = this->unk118; /*0x7bdcb1*/
  v11 = InterlockedDecrement; /*0x7bdcb7*/
  if ( unk118 ) /*0x7bdcc1*/
  {
    if ( !v11((volatile LONG *)(unk118 + 4)) ) /*0x7bdcc7*/
      (**(void (__thiscall ***)(UInt32, int))unk118)(unk118, 1); /*0x7bdcd9*/
    this->unk118 = 0; /*0x7bdcdb*/
  }
  unk11C = this->unk11C; /*0x7bdce1*/
  if ( unk11C ) /*0x7bdce9*/
  {
    if ( !v11((volatile LONG *)(unk11C + 4)) ) /*0x7bdcef*/
      (**(void (__thiscall ***)(UInt32, int))unk11C)(unk11C, 1); /*0x7bdd01*/
    this->unk11C = 0; /*0x7bdd03*/
  }
  v13 = unk_B43328; /*0x7bdd09*/
  if ( unk_B43328 ) /*0x7bdd09*/
  {
    if ( !v11((volatile LONG *)&v13->members) ) /*0x7bdd17*/
    {
      if ( v13 ) /*0x7bdd1f*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))v13->vtbl)(v13, 1); /*0x7bdd29*/
    }
    unk_B43328 = 0; /*0x7bdd2b*/
  }
  v14 = this->unk11C; /*0x7bdd31*/
  if ( v14 ) /*0x7bdd3e*/
  {
    if ( !v11((volatile LONG *)(v14 + 4)) ) /*0x7bdd44*/
      (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1); /*0x7bdd56*/
  }
  v15 = this->unk118; /*0x7bdd58*/
  if ( v15 ) /*0x7bdd65*/
  {
    if ( !v11((volatile LONG *)(v15 + 4)) ) /*0x7bdd6b*/
      (**(void (__thiscall ***)(UInt32, int))v15)(v15, 1); /*0x7bdd7d*/
  }
  _LN21((char *)this->passes, 4u, 0xD, (void (__thiscall *)(void *))sub_4027D0); /*0x7bdd94*/
  _LN21((char *)this->Pixel, 4u, 8, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7bddae*/
  _LN21((char *)this->Vertex, 4u, 8, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7bddc8*/
  BSImageSpaceShader::~BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7bddd7*/
}
