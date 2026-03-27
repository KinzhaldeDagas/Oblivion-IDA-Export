MapShader *__thiscall MapShader::MapShader(MapShader *this)
{
  int *v2; // ebx
  int v3; // ebp
  int v4; // edi
  NiD3DPass *v5; // ecx
  int v7; // edi

  BSImageSpaceShader::BSImageSpaceShader((BSImageSpaceShader *)this);
  *(_DWORD *)this = &MapShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x94,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor(
    (char *)this + 0x98,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v2 = (int *)((char *)this + 0x9C);
  ArrayConstructor(
    (char *)this + 0x9C,
    4u,
    1,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((float *)this + 0x2C) = 0.0;
  *((float *)this + 0x2D) = 0.0;
  *((float *)this + 0x2E) = 0.0;
  *((float *)this + 0x2F) = 0.0;
  *((_DWORD *)this + 0x30) = 0;
  *((_DWORD *)this + 0x24) = 0;
  v3 = *((_DWORD *)this + 0x26);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *((_DWORD *)this + 0x26) = 0;
  }
  v4 = *v2;
  if ( *v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *v2 = 0;
  }
  v5 = *((NiD3DPass **)this + 0x25);
  if ( v5 )
  {
    if ( v5->RefCount-- == 1 )
      sub_7604D0(v5);
    *((_DWORD *)this + 0x25) = 0;
  }
  *((_BYTE *)this + 0x20) = 1;
  v7 = *((_DWORD *)this + 0x30);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *((_DWORD *)this + 0x30) = 0;
  }
  return this;
}
