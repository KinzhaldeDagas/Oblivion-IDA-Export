// SpeedTreeFrondShader dtor: releases four frond vertex shaders, two frond pixel shaders, pass +0x94, then BSShader base.
void __thiscall SpeedTreeFrondShader::~SpeedTreeFrondShader(BSShader *this)
{
  BSShader *v2; // edi
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // edi
  int v6; // ebx
  BSShaderVtbl *v7; // esi
  NiD3DPass *v8; // ecx

  this->__vftable = (BSShaderVtbl *)&SpeedTreeFrondShader::`vftable'; /*0x80dfab*/
  v2 = this + 1; /*0x80dfba*/
  v3 = 4; /*0x80dfbd*/
  do /*0x80dff0*/
  {
    vftable = v2->__vftable; /*0x80dfc2*/
    if ( v2->__vftable ) /*0x80dfc2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x80dfcc*/
      {
        if ( vftable ) /*0x80dfd8*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x80dfe2*/
      }
      v2->__vftable = 0; /*0x80dfe4*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x80dfea*/
    --v3; /*0x80dfed*/
  }
  while ( v3 ); /*0x80dff0*/
  v5 = (BSShader *)((char *)this + 0x8C); /*0x80dff2*/
  v6 = 2; /*0x80dff8*/
  do /*0x80e02e*/
  {
    v7 = v5->__vftable; /*0x80e000*/
    if ( v5->__vftable ) /*0x80e000*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v7->super.super.super.GetType) ) /*0x80e00a*/
      {
        if ( v7 ) /*0x80e016*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v7->super.super.super.super.Destructor)(v7, 1); /*0x80e020*/
      }
      v5->__vftable = 0; /*0x80e022*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x80e028*/
    --v6; /*0x80e02b*/
  }
  while ( v6 ); /*0x80e02e*/
  v8 = *((NiD3DPass **)this + 0x25); /*0x80e030*/
  if ( v8 ) /*0x80e040*/
  {
    if ( v8->RefCount-- == 1 ) /*0x80e042*/
      NiD3DPass_ReleaseToPool(v8); /*0x80e047*/
  }
  _LN21((char *)this + 0x8C, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80e061*/
  _LN21((char *)this + 0x7C, 4u, 4, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x80e078*/
  BSShader::~BSShader(this); /*0x80e083*/
}
