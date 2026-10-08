char __thiscall sub_8066E0(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass **v8; // esi
  NiD3DPass *v9; // ecx

  sub_8025F0(this); /*0x8066e6*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x8066eb*/
  v3 = 0x24; /*0x8066f1*/
  do /*0x806724*/
  {
    vftable = v2->__vftable; /*0x8066f6*/
    if ( v2->__vftable ) /*0x8066f6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x806700*/
      {
        if ( vftable ) /*0x80670c*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x806716*/
      }
      v2->__vftable = 0; /*0x806718*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80671e*/
    --v3; /*0x806721*/
  }
  while ( v3 ); /*0x806724*/
  v5 = (BSShader *)((char *)this + 0x12C); /*0x806726*/
  v6 = 0x1E; /*0x80672c*/
  do /*0x80675f*/
  {
    v7 = v5->__vftable; /*0x806731*/
    if ( v5->__vftable ) /*0x806731*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80673b*/
      {
        if ( v7 ) /*0x806747*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x806751*/
      }
      v5->__vftable = 0; /*0x806753*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x806759*/
    --v6; /*0x80675c*/
  }
  while ( v6 ); /*0x80675f*/
  v8 = (NiD3DPass **)unk_B47620; /*0x806761*/
  do /*0x80678f*/
  {
    v9 = *v8; /*0x806770*/
    if ( *v8 ) /*0x806770*/
    {
      if ( v9->RefCount-- == 1 ) /*0x806776*/
        NiD3DPass_ReleaseToPool(v9); /*0x80677b*/
      *v8 = 0; /*0x806780*/
    }
    ++v8; /*0x806786*/
  }
  while ( (int)v8 < (int)&unk_B47710 ); /*0x80678f*/
  return 1; /*0x806791*/
}
