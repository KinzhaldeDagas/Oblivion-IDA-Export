void __thiscall SkinShader::~SkinShader(BSShader *this)
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

  this->__vftable = (BSShaderVtbl *)&SkinShader::`vftable'; /*0x8096ab*/
  v2 = (BSShader *)((char *)this + 0x9C); /*0x8096ba*/
  v3 = 0x14; /*0x8096c0*/
  do /*0x8096f3*/
  {
    vftable = v2->__vftable; /*0x8096c5*/
    if ( v2->__vftable ) /*0x8096c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x8096cf*/
      {
        if ( vftable ) /*0x8096db*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x8096e5*/
      }
      v2->__vftable = 0; /*0x8096e7*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x8096ed*/
    --v3; /*0x8096f0*/
  }
  while ( v3 ); /*0x8096f3*/
  v5 = (char *)this + 0xEC; /*0x8096f5*/
  v6 = v5; /*0x8096fb*/
  v7 = 0xA; /*0x8096fd*/
  do /*0x809730*/
  {
    v8 = *(_DWORD *)v6; /*0x809702*/
    if ( *(_DWORD *)v6 ) /*0x809702*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x80970c*/
      {
        if ( v8 ) /*0x809718*/
          (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x809722*/
      }
      *(_DWORD *)v6 = 0; /*0x809724*/
    }
    v6 += 4; /*0x80972a*/
    --v7; /*0x80972d*/
  }
  while ( v7 ); /*0x809730*/
  v9 = (NiD3DPass **)unk_B47718; /*0x809732*/
  do /*0x80975f*/
  {
    v10 = *v9; /*0x809740*/
    if ( *v9 ) /*0x809740*/
    {
      if ( v10->RefCount-- == 1 ) /*0x809746*/
        NiD3DPass_ReleaseToPool(v10); /*0x80974b*/
      *v9 = 0; /*0x809750*/
    }
    ++v9; /*0x809756*/
  }
  while ( (int)v9 < (int)&stru_B47768 ); /*0x80975f*/
  _LN21(v5, 4u, 0xA, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x809770*/
  _LN21((char *)this + 0x9C, 4u, 0x14, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80978d*/
  ShadowLightShader::~ShadowLightShader(this); /*0x80979a*/
}
