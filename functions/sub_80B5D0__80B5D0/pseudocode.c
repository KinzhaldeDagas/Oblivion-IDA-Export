char __thiscall sub_80B5D0(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  BSShader *v8; // edi
  int v9; // ebx
  BSShaderVtbl *v10; // esi
  BSShader *v11; // edi
  int v12; // ebx
  BSShaderVtbl *v13; // esi
  NiD3DPass **v14; // esi
  int v15; // edi
  NiD3DPass *v16; // ecx

  sub_8025F0(this); /*0x80b5d6*/
  v2 = (BSShader *)((char *)this + 0xA4); /*0x80b5db*/
  v3 = 7; /*0x80b5e1*/
  do /*0x80b614*/
  {
    vftable = v2->__vftable; /*0x80b5e6*/
    if ( v2->__vftable ) /*0x80b5e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x80b5f0*/
      {
        if ( vftable ) /*0x80b5fc*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x80b606*/
      }
      v2->__vftable = 0; /*0x80b608*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80b60e*/
    --v3; /*0x80b611*/
  }
  while ( v3 ); /*0x80b614*/
  v5 = (BSShader *)((char *)this + 0xCC); /*0x80b616*/
  v6 = 7; /*0x80b61c*/
  do /*0x80b64f*/
  {
    v7 = v5->__vftable; /*0x80b621*/
    if ( v5->__vftable ) /*0x80b621*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80b62b*/
      {
        if ( v7 ) /*0x80b637*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x80b641*/
      }
      v5->__vftable = 0; /*0x80b643*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x80b649*/
    --v6; /*0x80b64c*/
  }
  while ( v6 ); /*0x80b64f*/
  v8 = (BSShader *)((char *)this + 0xC0); /*0x80b651*/
  v9 = 3; /*0x80b657*/
  do /*0x80b68e*/
  {
    v10 = v8->__vftable; /*0x80b660*/
    if ( v8->__vftable ) /*0x80b660*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v10->super.super.super.GetType) ) /*0x80b66a*/
      {
        if ( v10 ) /*0x80b676*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v10->super.super.super.super.Destructor)(v10, 1); /*0x80b680*/
      }
      v8->__vftable = 0; /*0x80b682*/
    }
    v8 = (BSShader *)((char *)v8 + 4); /*0x80b688*/
    --v9; /*0x80b68b*/
  }
  while ( v9 ); /*0x80b68e*/
  v11 = (BSShader *)((char *)this + 0xE8); /*0x80b690*/
  v12 = 3; /*0x80b696*/
  do /*0x80b6ce*/
  {
    v13 = v11->__vftable; /*0x80b6a0*/
    if ( v11->__vftable ) /*0x80b6a0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v13->super.super.super.GetType) ) /*0x80b6aa*/
      {
        if ( v13 ) /*0x80b6b6*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v13->super.super.super.super.Destructor)(v13, 1); /*0x80b6c0*/
      }
      v11->__vftable = 0; /*0x80b6c2*/
    }
    v11 = (BSShader *)((char *)v11 + 4); /*0x80b6c8*/
    --v12; /*0x80b6cb*/
  }
  while ( v12 ); /*0x80b6ce*/
  v14 = (NiD3DPass **)((char *)this + 0x9C); /*0x80b6d0*/
  v15 = 2; /*0x80b6d6*/
  do /*0x80b6fc*/
  {
    v16 = *v14; /*0x80b6e0*/
    if ( *v14 ) /*0x80b6e0*/
    {
      if ( v16->RefCount-- == 1 ) /*0x80b6e6*/
        NiD3DPass_ReleaseToPool(v16); /*0x80b6eb*/
      *v14 = 0; /*0x80b6f0*/
    }
    ++v14; /*0x80b6f6*/
    --v15; /*0x80b6f9*/
  }
  while ( v15 ); /*0x80b6fc*/
  return 1; /*0x80b6fe*/
}
