void __thiscall WaterShaderDisplacement::~WaterShaderDisplacement(BSImageSpaceShader *this)
{
  int v2; // ebx
  BSImageSpaceShader *v3; // edi
  int v4; // esi
  BSImageSpaceShaderVtbl *vftable; // esi
  NiD3DPass *v6; // ecx
  bool v7; // zf
  int v8; // esi
  LONG (__stdcall *v9)(volatile LONG *); // edi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  NiD3DPass *v14; // ecx

  this->__vftable = (BSImageSpaceShaderVtbl *)&WaterShaderDisplacement::`vftable'; /*0x7dd4cb*/
  v2 = 8; /*0x7dd4d2*/
  v3 = (BSImageSpaceShader *)((char *)this + 0xB4); /*0x7dd4db*/
  do /*0x7dd539*/
  {
    v4 = *(_DWORD *)&v3->member.super.super.IsInitialized; /*0x7dd4e1*/
    if ( v4 ) /*0x7dd4e6*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7dd4ec*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7dd502*/
      *(_DWORD *)&v3->member.super.super.IsInitialized = 0; /*0x7dd504*/
    }
    vftable = v3->__vftable; /*0x7dd50b*/
    if ( v3->__vftable ) /*0x7dd50b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.super.GetType) ) /*0x7dd515*/
      {
        if ( vftable ) /*0x7dd521*/
          (*(void (__thiscall **)(BSImageSpaceShaderVtbl *, int))vftable->super.super.super.super.super.Destructor)( /*0x7dd52b*/
            vftable,
            1);
      }
      v3->__vftable = 0; /*0x7dd52d*/
    }
    v3 = (BSImageSpaceShader *)((char *)v3 + 4); /*0x7dd533*/
    --v2; /*0x7dd536*/
  }
  while ( v2 ); /*0x7dd539*/
  v6 = *((NiD3DPass **)this + 0x3E); /*0x7dd53b*/
  if ( v6 ) /*0x7dd546*/
  {
    v7 = v6->RefCount-- == 1; /*0x7dd548*/
    if ( v7 ) /*0x7dd54b*/
      NiD3DPass_ReleaseToPool(v6); /*0x7dd54d*/
    *((_DWORD *)this + 0x3E) = 0; /*0x7dd552*/
  }
  v8 = *((_DWORD *)this + 0x43); /*0x7dd55c*/
  v9 = InterlockedDecrement; /*0x7dd564*/
  if ( v8 ) /*0x7dd56f*/
  {
    if ( !v9((volatile LONG *)(v8 + 4)) ) /*0x7dd575*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7dd587*/
  }
  v10 = *((_DWORD *)this + 0x42); /*0x7dd589*/
  if ( v10 ) /*0x7dd596*/
  {
    if ( !v9((volatile LONG *)(v10 + 4)) ) /*0x7dd59c*/
      (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x7dd5ae*/
  }
  v11 = *((_DWORD *)this + 0x41); /*0x7dd5b0*/
  if ( v11 ) /*0x7dd5bd*/
  {
    if ( !v9((volatile LONG *)(v11 + 4)) ) /*0x7dd5c3*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7dd5d5*/
  }
  v12 = *((_DWORD *)this + 0x40); /*0x7dd5d7*/
  if ( v12 ) /*0x7dd5e4*/
  {
    if ( !v9((volatile LONG *)(v12 + 4)) ) /*0x7dd5ea*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7dd5fc*/
  }
  v13 = *((_DWORD *)this + 0x3F); /*0x7dd5fe*/
  if ( v13 ) /*0x7dd60b*/
  {
    if ( !v9((volatile LONG *)(v13 + 4)) ) /*0x7dd611*/
      (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x7dd623*/
  }
  v14 = *((NiD3DPass **)this + 0x3E); /*0x7dd625*/
  if ( v14 ) /*0x7dd632*/
  {
    v7 = v14->RefCount-- == 1; /*0x7dd634*/
    if ( v7 ) /*0x7dd637*/
      NiD3DPass_ReleaseToPool(v14); /*0x7dd639*/
  }
  _LN21((char *)this + 0xD4, 4u, 8, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7dd653*/
  _LN21((char *)this + 0xB4, 4u, 8, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7dd66d*/
  BSImageSpaceShader::~BSImageSpaceShader(this); /*0x7dd678*/
}
