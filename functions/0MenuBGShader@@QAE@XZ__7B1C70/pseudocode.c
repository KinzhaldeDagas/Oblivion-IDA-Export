MenuBGShader *__thiscall MenuBGShader::MenuBGShader(MenuBGShader *this)
{
  int *v2; // ebx
  int v3; // ebp
  int v4; // edi
  NiD3DPass *v5; // ecx
  int v7; // edi

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7b1c9b*/
  *(_DWORD *)this = &MenuBGShader::`vftable'; /*0x7b1cbb*/
  ArrayConstructor( /*0x7b1cc1*/
    (char *)this + 0x94,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor( /*0x7b1ce0*/
    (char *)this + 0x98,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v2 = (int *)((char *)this + 0x9C); /*0x7b1cf3*/
  ArrayConstructor( /*0x7b1cff*/
    (char *)this + 0x9C,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x2D) = 0; /*0x7b1d04*/
  *((_DWORD *)this + 0x24) = 0; /*0x7b1d0a*/
  *((_BYTE *)this + 0xB0) = 0; /*0x7b1d10*/
  v3 = *((_DWORD *)this + 0x26); /*0x7b1d17*/
  if ( v3 ) /*0x7b1d20*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7b1d26*/
    {
      if ( v3 ) /*0x7b1d32*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7b1d3d*/
    }
    *((_DWORD *)this + 0x26) = 0; /*0x7b1d3f*/
  }
  v4 = *v2; /*0x7b1d45*/
  if ( *v2 ) /*0x7b1d45*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7b1d4f*/
    {
      if ( v4 ) /*0x7b1d5b*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7b1d65*/
    }
    *v2 = 0; /*0x7b1d67*/
  }
  v5 = *((NiD3DPass **)this + 0x25); /*0x7b1d6d*/
  if ( v5 ) /*0x7b1d75*/
  {
    if ( v5->RefCount-- == 1 ) /*0x7b1d77*/
      NiD3DPass_ReleaseToPool(v5); /*0x7b1d7d*/
    *((_DWORD *)this + 0x25) = 0; /*0x7b1d82*/
  }
  *((_BYTE *)this + 0x20) = 1; /*0x7b1d8c*/
  v7 = *((_DWORD *)this + 0x2D); /*0x7b1d90*/
  if ( v7 ) /*0x7b1d98*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7b1d9e*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7b1db4*/
    *((_DWORD *)this + 0x2D) = 0; /*0x7b1db6*/
  }
  return this; /*0x7b1dc2*/
}
