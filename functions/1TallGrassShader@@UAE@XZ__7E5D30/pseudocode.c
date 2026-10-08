void __thiscall TallGrassShader::~TallGrassShader(BSShader *this)
{
  BSShader *v2; // ebp
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // ebp
  BSShaderVtbl *v6; // esi
  unsigned int v7; // [esp-4h] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-14h]

  this->__vftable = (BSShaderVtbl *)&TallGrassShader::`vftable'; /*0x7e5d5d*/
  v2 = (BSShader *)((char *)this + 0x94); /*0x7e5d6b*/
  v3 = 0x14; /*0x7e5d71*/
  do /*0x7e5da6*/
  {
    vftable = v2->__vftable; /*0x7e5d76*/
    if ( v2->__vftable ) /*0x7e5d76*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x7e5d81*/
      {
        if ( vftable ) /*0x7e5d8d*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x7e5d97*/
      }
      v2->__vftable = 0; /*0x7e5d99*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x7e5da0*/
    --v3; /*0x7e5da3*/
  }
  while ( v3 ); /*0x7e5da6*/
  v5 = (BSShader *)((char *)this + 0x134); /*0x7e5dae*/
  v8 = 2; /*0x7e5db0*/
  do /*0x7e5dea*/
  {
    v6 = v5->__vftable; /*0x7e5db8*/
    if ( v5->__vftable ) /*0x7e5db8*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->super.super.super.GetType) ) /*0x7e5dc3*/
      {
        if ( v6 ) /*0x7e5dcf*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v6->super.super.super.super.Destructor)(v6, 1); /*0x7e5dd9*/
      }
      v5->__vftable = 0; /*0x7e5ddb*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x7e5de2*/
    --v8; /*0x7e5de5*/
  }
  while ( v8 ); /*0x7e5dea*/
  v7 = *((_DWORD *)this + 0x56); /*0x7e5df2*/
  *((_DWORD *)this + 0x57) = 0; /*0x7e5df3*/
  FormHeapFree(v7); /*0x7e5dfd*/
  _LN21((char *)this + 0x134, 4u, 9, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7e5e14*/
  _LN21((char *)this + 0x94, 4u, 0x28, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7e5e2e*/
  _LN21((char *)this + 0x7C, 4u, 3, (void (__thiscall *)(void *))sub_4027D0); /*0x7e5e45*/
  BSShader::~BSShader(this); /*0x7e5e54*/
}
