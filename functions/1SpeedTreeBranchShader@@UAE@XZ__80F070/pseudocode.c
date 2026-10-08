// SpeedTreeBranchShader dtor: releases branch shader refs and global branch pass table dword_B47790..B47800 before ShadowLightShader base cleanup.
void __thiscall SpeedTreeBranchShader::~SpeedTreeBranchShader(BSShader *this)
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

  this->__vftable = (BSShaderVtbl *)&SpeedTreeBranchShader::`vftable'; /*0x80f09b*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x80f0aa*/
  v3 = 0x1C; /*0x80f0b0*/
  do /*0x80f0e3*/
  {
    vftable = v2->__vftable; /*0x80f0b5*/
    if ( v2->__vftable ) /*0x80f0b5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x80f0bf*/
      {
        if ( vftable ) /*0x80f0cb*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x80f0d5*/
      }
      v2->__vftable = 0; /*0x80f0d7*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80f0dd*/
    --v3; /*0x80f0e0*/
  }
  while ( v3 ); /*0x80f0e3*/
  v5 = (char *)this + 0x10C; /*0x80f0e5*/
  v6 = v5; /*0x80f0eb*/
  v7 = 0xA; /*0x80f0ed*/
  do /*0x80f120*/
  {
    v8 = *(_DWORD *)v6; /*0x80f0f2*/
    if ( *(_DWORD *)v6 ) /*0x80f0f2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x80f0fc*/
      {
        if ( v8 ) /*0x80f108*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x80f112*/
      }
      *(_DWORD *)v6 = 0; /*0x80f114*/
    }
    v6 += 4; /*0x80f11a*/
    --v7; /*0x80f11d*/
  }
  while ( v7 ); /*0x80f120*/
  v9 = (NiD3DPass **)unk_B47790; /*0x80f122*/
  do /*0x80f14f*/
  {
    v10 = *v9; /*0x80f130*/
    if ( *v9 ) /*0x80f130*/
    {
      if ( v10->RefCount-- == 1 ) /*0x80f136*/
        NiD3DPass_ReleaseToPool(v10); /*0x80f13b*/
      *v9 = 0; /*0x80f140*/
    }
    ++v9; /*0x80f146*/
  }
  while ( (int)v9 < (int)&stru_B47800 ); /*0x80f14f*/
  _LN21(v5, 4u, 0xA, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80f160*/
  _LN21((char *)this + 0x9C, 4u, 0x1C, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80f17d*/
  ShadowLightShader::~ShadowLightShader(this); /*0x80f18a*/
}
