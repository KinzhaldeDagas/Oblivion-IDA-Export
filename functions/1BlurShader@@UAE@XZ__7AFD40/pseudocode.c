void __thiscall BlurShader::~BlurShader(BSImageSpaceShader *this)
{
  int v2; // esi
  int v3; // ebx
  BSImageSpaceShader *v4; // edi
  UInt32 Unk084; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  int v7; // esi

  this->__vftable = (BSImageSpaceShaderVtbl *)&BlurShader::`vftable'; /*0x7afd6b*/
  v2 = *((_DWORD *)this + 0x38); /*0x7afd72*/
  v3 = 3; /*0x7afd7a*/
  if ( v2 ) /*0x7afd83*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x7afd89*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7afd9f*/
    *((_DWORD *)this + 0x38) = 0; /*0x7afda1*/
  }
  v4 = (BSImageSpaceShader *)((char *)this + 0xA0); /*0x7afdab*/
  do /*0x7afe09*/
  {
    Unk084 = v4[0xFFFFFFFF].member.Unk084; /*0x7afdb1*/
    if ( Unk084 ) /*0x7afdb6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(Unk084 + 4)) ) /*0x7afdbc*/
        (**(void (__thiscall ***)(UInt32, int))Unk084)(Unk084, 1); /*0x7afdd2*/
      v4[0xFFFFFFFF].member.Unk084 = 0; /*0x7afdd4*/
    }
    vftable = v4->__vftable; /*0x7afddb*/
    if ( v4->__vftable ) /*0x7afddb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) ) /*0x7afde5*/
      {
        if ( vftable ) /*0x7afdf1*/
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)( /*0x7afdfb*/
            vftable,
            1);
      }
      v4->__vftable = 0; /*0x7afdfd*/
    }
    v4 = (BSImageSpaceShader *)((char *)v4 + 4); /*0x7afe03*/
    --v3; /*0x7afe06*/
  }
  while ( v3 ); /*0x7afe09*/
  v7 = *((_DWORD *)this + 0x38); /*0x7afe0b*/
  if ( v7 ) /*0x7afe18*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7afe1e*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7afe34*/
  }
  _LN21((char *)this + 0xA0, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7afe4b*/
  _LN21((char *)this + 0x94, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7afe65*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x7afe74*/
}
