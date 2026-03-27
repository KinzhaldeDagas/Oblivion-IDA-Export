GeometryDecalShader *__thiscall GeometryDecalShader::GeometryDecalShader(GeometryDecalShader *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  NiD3DPass **v5; // edi
  int v6; // ebp
  NiD3DPass *v7; // ecx

  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &GeometryDecalShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x7C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor(
    (char *)this + 0x84,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x8C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x27) = 0;
  *((_BYTE *)this + 0x20) = 1;
  v2 = *((_DWORD *)this + 0x25);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x25) = 0;
  }
  v3 = *((_DWORD *)this + 0x26);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x26) = 0;
  }
  v4 = *((_DWORD *)this + 0x27);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x27) = 0;
  }
  v5 = (NiD3DPass **)((char *)this + 0x7C);
  v6 = 2;
  do
  {
    v7 = *v5;
    if ( *v5 )
    {
      if ( v7->RefCount-- == 1 )
        sub_7604D0(v7);
      *v5 = 0;
    }
    ++v5;
    --v6;
  }
  while ( v6 );
  return this;
}
