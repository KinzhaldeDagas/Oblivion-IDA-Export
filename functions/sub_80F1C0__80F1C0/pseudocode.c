// SpeedTreeBranchShader vtable slot +0x84. Calls the base shader cache initializer/clearer at 0x8025F0, releases 28 refs at this+0x9C and 10 refs at this+0x10C, then releases and zeros the 28-entry global branch pass table [0xB47790,0xB47800); returns true.
char __thiscall OB_SpeedTreeBranchShader_InitializeAndClearShaderCaches_010201A0(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass **v8; // esi
  NiD3DPass *v9; // ecx

  sub_8025F0(this); /*0x80f1c6*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x80f1cb*/
  v3 = 0x1C; /*0x80f1d1*/
  do /*0x80f204*/
  {
    vftable = v2->__vftable; /*0x80f1d6*/
    if ( v2->__vftable ) /*0x80f1d6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x80f1e0*/
      {
        if ( vftable ) /*0x80f1ec*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x80f1f6*/
      }
      v2->__vftable = 0; /*0x80f1f8*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80f1fe*/
    --v3; /*0x80f201*/
  }
  while ( v3 ); /*0x80f204*/
  v5 = (BSShader *)((char *)this + 0x10C); /*0x80f206*/
  v6 = 0xA; /*0x80f20c*/
  do /*0x80f23f*/
  {
    v7 = v5->__vftable; /*0x80f211*/
    if ( v5->__vftable ) /*0x80f211*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80f21b*/
      {
        if ( v7 ) /*0x80f227*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x80f231*/
      }
      v5->__vftable = 0; /*0x80f233*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x80f239*/
    --v6; /*0x80f23c*/
  }
  while ( v6 ); /*0x80f23f*/
  v8 = (NiD3DPass **)&OB_ShaderConstantStorage_010201A0[0x65F]; /*0x80f241*/
  do /*0x80f26f*/
  {
    v9 = *v8; /*0x80f250*/
    if ( *v8 ) /*0x80f250*/
    {
      if ( v9->RefCount-- == 1 ) /*0x80f256*/
        NiD3DPass_ReleaseToPool(v9); /*0x80f25b*/
      *v8 = 0; /*0x80f260*/
    }
    ++v8; /*0x80f266*/
  }
  while ( (int)v8 < (int)&OB_ShaderConstantStorage_010201A0[0x67B] ); /*0x80f26f*/
  return 1; /*0x80f271*/
}
