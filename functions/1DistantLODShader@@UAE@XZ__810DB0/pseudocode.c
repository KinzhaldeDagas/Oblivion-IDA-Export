void __thiscall DistantLODShader::~DistantLODShader(BSShader *this)
{
  BSShader *v2; // ebp
  int v3; // ebx
  BSShaderVtbl *vftable; // esi
  BSShader *v5; // ebp
  BSShaderVtbl *v6; // esi
  unsigned int v7; // [esp-4h] [ebp-2Ch]
  int v8; // [esp+14h] [ebp-14h]

  this->__vftable = (BSShaderVtbl *)&DistantLODShader::`vftable'; /*0x810ddd*/
  v2 = (BSShader *)((char *)this + 0x8C); /*0x810deb*/
  v3 = 4; /*0x810df1*/
  do /*0x810e26*/
  {
    vftable = v2->__vftable; /*0x810df6*/
    if ( v2->__vftable ) /*0x810df6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x810e01*/
      {
        if ( vftable ) /*0x810e0d*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x810e17*/
      }
      v2->__vftable = 0; /*0x810e19*/
    }
    v2 = (BSShader *)((char *)v2 + 4); /*0x810e20*/
    --v3; /*0x810e23*/
  }
  while ( v3 ); /*0x810e26*/
  v5 = (BSShader *)((char *)this + 0x9C); /*0x810e2e*/
  v8 = 2; /*0x810e30*/
  do /*0x810e6a*/
  {
    v6 = v5->__vftable; /*0x810e38*/
    if ( v5->__vftable ) /*0x810e38*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v6->super.super.super.GetType) ) /*0x810e43*/
      {
        if ( v6 ) /*0x810e4f*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))v6->super.super.super.super.Destructor)(v6, 1); /*0x810e59*/
      }
      v5->__vftable = 0; /*0x810e5b*/
    }
    v5 = (BSShader *)((char *)v5 + 4); /*0x810e62*/
    --v8; /*0x810e65*/
  }
  while ( v8 ); /*0x810e6a*/
  v7 = *((_DWORD *)this + 0x29); /*0x810e72*/
  *((_DWORD *)this + 0x2A) = 0; /*0x810e73*/
  FormHeapFree(v7); /*0x810e7d*/
  _LN21((char *)this + 0x9C, 4u, 2, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x810e94*/
  _LN21((char *)this + 0x8C, 4u, 4, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x810eae*/
  _LN21((char *)this + 0x7C, 4u, 1, (void (__thiscall *)(void *))sub_4027D0); /*0x810ec5*/
  BSShader::~BSShader(this); /*0x810ed4*/
}
