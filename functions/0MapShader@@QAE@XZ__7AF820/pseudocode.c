MapShader *__thiscall MapShader::MapShader(MapShader *this)
{
  int *v2; // ebx
  int v3; // ebp
  int v4; // edi
  NiD3DPass *v5; // ecx
  int v7; // edi

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this); /*0x7af84b*/
  *(_DWORD *)this = &MapShader::`vftable'; /*0x7af86b*/
  ArrayConstructor( /*0x7af871*/
    (char *)this + 0x94,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor( /*0x7af890*/
    (char *)this + 0x98,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v2 = (int *)((char *)this + 0x9C); /*0x7af8a3*/
  ArrayConstructor( /*0x7af8af*/
    (char *)this + 0x9C,
    4u,
    1,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((float *)this + 0x2C) = 0.0; /*0x7af8b6*/
  *((float *)this + 0x2D) = 0.0; /*0x7af8bc*/
  *((float *)this + 0x2E) = 0.0; /*0x7af8c2*/
  *((float *)this + 0x2F) = 0.0; /*0x7af8c8*/
  *((_DWORD *)this + 0x30) = 0; /*0x7af8ce*/
  *((_DWORD *)this + 0x24) = 0; /*0x7af8d4*/
  v3 = *((_DWORD *)this + 0x26); /*0x7af8da*/
  if ( v3 ) /*0x7af8e3*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7af8e9*/
    {
      if ( v3 ) /*0x7af8f5*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7af900*/
    }
    *((_DWORD *)this + 0x26) = 0; /*0x7af902*/
  }
  v4 = *v2; /*0x7af908*/
  if ( *v2 ) /*0x7af908*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7af912*/
    {
      if ( v4 ) /*0x7af91e*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7af928*/
    }
    *v2 = 0; /*0x7af92a*/
  }
  v5 = *((NiD3DPass **)this + 0x25); /*0x7af930*/
  if ( v5 ) /*0x7af938*/
  {
    if ( v5->RefCount-- == 1 ) /*0x7af93a*/
      NiD3DPass_ReleaseToPool(v5); /*0x7af940*/
    *((_DWORD *)this + 0x25) = 0; /*0x7af945*/
  }
  *((_BYTE *)this + 0x20) = 1; /*0x7af94f*/
  v7 = *((_DWORD *)this + 0x30); /*0x7af953*/
  if ( v7 ) /*0x7af95b*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7af961*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7af977*/
    *((_DWORD *)this + 0x30) = 0; /*0x7af979*/
  }
  return this; /*0x7af985*/
}
