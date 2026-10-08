// SpeedTreeLeafShader dtor: releases four STLEAF vertex shaders, two STLEAF pixel shaders, pass +0x394, then BSShader base.
void __thiscall SpeedTreeLeafShader::~SpeedTreeLeafShader(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass *v8; // ecx

  this->__vftable = (BSShaderVtbl *)&SpeedTreeLeafShader::`vftable'; /*0x7f027b*/
  v2 = (BSShader *)((char *)this + 0x37C); /*0x7f028a*/
  v3 = 4; /*0x7f0290*/
  do /*0x7f02c3*/
  {
    vftable = v2->__vftable; /*0x7f0295*/
    if ( v2->__vftable ) /*0x7f0295*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x7f029f*/
      {
        if ( vftable ) /*0x7f02ab*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x7f02b5*/
      }
      v2->__vftable = 0; /*0x7f02b7*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x7f02bd*/
    --v3; /*0x7f02c0*/
  }
  while ( v3 ); /*0x7f02c3*/
  v5 = (BSShader *)((char *)this + 0x38C); /*0x7f02c5*/
  v6 = 2; /*0x7f02cb*/
  do /*0x7f02fe*/
  {
    v7 = v5->__vftable; /*0x7f02d0*/
    if ( v5->__vftable ) /*0x7f02d0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x7f02da*/
      {
        if ( v7 ) /*0x7f02e6*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x7f02f0*/
      }
      v5->__vftable = 0; /*0x7f02f2*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x7f02f8*/
    --v6; /*0x7f02fb*/
  }
  while ( v6 ); /*0x7f02fe*/
  v8 = *((NiD3DPass **)this + 0xE5); /*0x7f0300*/
  if ( v8 ) /*0x7f0310*/
  {
    if ( v8->RefCount-- == 1 ) /*0x7f0312*/
      NiD3DPass_ReleaseToPool(v8); /*0x7f0317*/
  }
  _LN21((char *)this + 0x38C, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7f0331*/
  _LN21((char *)this + 0x37C, 4u, 4, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7f034b*/
  BSShader::~BSShader(this); /*0x7f0356*/
}
