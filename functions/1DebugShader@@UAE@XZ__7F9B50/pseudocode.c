void __thiscall DebugShader::~DebugShader(BSShader *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // edi
  int v4; // esi
  int v5; // esi
  BSShader *v6; // edi
  int v7; // ebx
  BSShaderVtbl *vftable; // esi
  int v9; // esi
  LONG (__stdcall *v10)(volatile LONG *); // edi
  int v11; // esi
  int v12; // esi

  this->__vftable = (BSShaderVtbl *)&DebugShader::`vftable'; /*0x7f9b7b*/
  v2 = *((_DWORD *)this + 0x30); /*0x7f9b82*/
  v3 = InterlockedDecrement; /*0x7f9b88*/
  if ( v2 ) /*0x7f9b9a*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7f9ba0*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7f9bb2*/
    *((_DWORD *)this + 0x30) = 0; /*0x7f9bb4*/
  }
  v4 = *((_DWORD *)this + 0x31); /*0x7f9bba*/
  if ( v4 ) /*0x7f9bc2*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7f9bc8*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7f9bda*/
    *((_DWORD *)this + 0x31) = 0; /*0x7f9bdc*/
  }
  v5 = *((_DWORD *)this + 0x2F); /*0x7f9be2*/
  if ( v5 ) /*0x7f9bea*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7f9bf0*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7f9c02*/
    *((_DWORD *)this + 0x2F) = 0; /*0x7f9c04*/
  }
  v6 = this + 1; /*0x7f9c0a*/
  v7 = 0x10; /*0x7f9c0d*/
  do /*0x7f9c40*/
  {
    vftable = v6->__vftable; /*0x7f9c12*/
    if ( v6->__vftable ) /*0x7f9c12*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&vftable->super.super.super.GetType) ) /*0x7f9c1c*/
      {
        if ( vftable ) /*0x7f9c28*/
          (*(void (__thiscall **)(BSShaderVtbl *, int))vftable->super.super.super.super.Destructor)(vftable, 1); /*0x7f9c32*/
      }
      v6->__vftable = 0; /*0x7f9c34*/
    }
    v6 = (BSShader *)((char *)v6 + 4); /*0x7f9c3a*/
    --v7; /*0x7f9c3d*/
  }
  while ( v7 ); /*0x7f9c40*/
  v9 = *((_DWORD *)this + 0x31); /*0x7f9c42*/
  v10 = InterlockedDecrement; /*0x7f9c4a*/
  if ( v9 ) /*0x7f9c55*/
  {
    if ( !v10((volatile LONG *)(v9 + 4)) ) /*0x7f9c5b*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7f9c6d*/
  }
  v11 = *((_DWORD *)this + 0x30); /*0x7f9c6f*/
  if ( v11 ) /*0x7f9c7c*/
  {
    if ( !v10((volatile LONG *)(v11 + 4)) ) /*0x7f9c82*/
      (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x7f9c94*/
  }
  v12 = *((_DWORD *)this + 0x2F); /*0x7f9c96*/
  if ( v12 ) /*0x7f9ca3*/
  {
    if ( !v10((volatile LONG *)(v12 + 4)) ) /*0x7f9ca9*/
      (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x7f9cbb*/
  }
  _LN21((char *)this + 0x7C, 4u, 0x10, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x7f9ccf*/
  BSShader::~BSShader(this); /*0x7f9cde*/
}
