void __thiscall BlurShader_P20::~BlurShader_P20(BSImageSpaceShader *this)
{
  BSImageSpaceShader *v2; // edi
  BSRenderedTexture *Unk07C; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v5; // [esp+10h] [ebp-14h]

  this->__vftable = (BSImageSpaceShaderVtbl *)&BlurShader_P20::`vftable';
  v2 = (BSImageSpaceShader *)((char *)this + 0xA8);
  v5 = 5;
  do
  {
    Unk07C = v2[0xFFFFFFFF].member.Unk07C;
    if ( Unk07C )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Unk07C->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))Unk07C->vtbl)(Unk07C, 1);
      v2[0xFFFFFFFF].member.Unk07C = 0;
    }
    vftable = v2->__vftable;
    if ( v2->__vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) )
      {
        if ( vftable )
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)(
            vftable,
            1);
      }
      v2->__vftable = 0;
    }
    v2 = (BSImageSpaceShader *)((char *)v2 + 4);
    --v5;
  }
  while ( v5 );
  _LN21((char *)this + 0xA8, 4u, 5, (void (__thiscall *)(void *))sub_7016A0);
  _LN21((char *)this + 0x94, 4u, 5, (void (__thiscall *)(void *))sub_7016A0);
  BSImageSpaceShader::~BSImageSpaceShader(this);
}
