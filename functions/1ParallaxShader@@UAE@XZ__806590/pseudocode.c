void __thiscall ParallaxShader::~ParallaxShader(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  char *v5; // ebp
  char *v6; // edi
  int v7; // ebx
  int v8; // esi
  NiD3DPass **v9; // esi
  NiD3DPass *v10; // ecx

  this->__vftable = (BSShaderVtbl *)&ParallaxShader::`vftable'; /*0x8065bb*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x8065ca*/
  v3 = 0x24; /*0x8065d0*/
  do /*0x806603*/
  {
    vftable = v2->__vftable; /*0x8065d5*/
    if ( v2->__vftable ) /*0x8065d5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x8065df*/
      {
        if ( vftable ) /*0x8065eb*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x8065f5*/
      }
      v2->__vftable = 0; /*0x8065f7*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x8065fd*/
    --v3; /*0x806600*/
  }
  while ( v3 ); /*0x806603*/
  v5 = (char *)this + 0x12C; /*0x806605*/
  v6 = v5; /*0x80660b*/
  v7 = 0x1E; /*0x80660d*/
  do /*0x806640*/
  {
    v8 = *(_DWORD *)v6; /*0x806612*/
    if ( *(_DWORD *)v6 ) /*0x806612*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x80661c*/
      {
        if ( v8 ) /*0x806628*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x806632*/
      }
      *(_DWORD *)v6 = 0; /*0x806634*/
    }
    v6 += 4; /*0x80663a*/
    --v7; /*0x80663d*/
  }
  while ( v7 ); /*0x806640*/
  v9 = (NiD3DPass **)unk_B47620; /*0x806642*/
  do /*0x80666f*/
  {
    v10 = *v9; /*0x806650*/
    if ( *v9 ) /*0x806650*/
    {
      if ( v10->RefCount-- == 1 ) /*0x806656*/
        NiD3DPass_ReleaseToPool(v10); /*0x80665b*/
      *v9 = 0; /*0x806660*/
    }
    ++v9; /*0x806666*/
  }
  while ( (int)v9 < (int)&unk_B47710 ); /*0x80666f*/
  _LN21(v5, 4u, 0x1E, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x806680*/
  _LN21((char *)this + 0x9C, 4u, 0x24, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80669d*/
  ShadowLightShader::~ShadowLightShader(this); /*0x8066aa*/
}
