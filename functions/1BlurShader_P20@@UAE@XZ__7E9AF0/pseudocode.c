void __thiscall BlurShader_P20::~BlurShader_P20(BSImageSpaceShader *this)
{
  BSImageSpaceShader *v2; // edi
  BSRenderedTexture *Unk07C; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v5; // [esp+10h] [ebp-14h]

  this->__vftable = (BSImageSpaceShaderVtbl *)&BlurShader_P20::`vftable'; /*0x7e9b1c*/
  v2 = (BSImageSpaceShader *)((char *)this + 0xA8); /*0x7e9b2b*/
  v5 = 5; /*0x7e9b31*/
  do /*0x7e9b9a*/
  {
    Unk07C = v2[0xFFFFFFFF].member.Unk07C; /*0x7e9b40*/
    if ( Unk07C ) /*0x7e9b45*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) ) /*0x7e9b4b*/
        (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1); /*0x7e9b61*/
      v2[0xFFFFFFFF].member.Unk07C = 0; /*0x7e9b63*/
    }
    vftable = v2->__vftable; /*0x7e9b6a*/
    if ( v2->__vftable ) /*0x7e9b6a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) ) /*0x7e9b74*/
      {
        if ( vftable ) /*0x7e9b80*/
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)( /*0x7e9b8a*/
            vftable,
            1);
      }
      v2->__vftable = 0; /*0x7e9b8c*/
    }
    v2 = (BSImageSpaceShader *)((char *)v2 + 4); /*0x7e9b92*/
    --v5; /*0x7e9b95*/
  }
  while ( v5 ); /*0x7e9b9a*/
  _LN21((char *)this + 0xA8, 4u, 5, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7e9bb1*/
  _LN21((char *)this + 0x94, 4u, 5, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7e9bcb*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x7e9bda*/
}
