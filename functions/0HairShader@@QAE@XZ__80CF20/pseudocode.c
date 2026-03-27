HairShader *__thiscall HairShader::HairShader(HairShader *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // ebp
  int v7; // edi

  ShadowLightShader::ShadowLightShader(this, a2, a3, 0, 0);
  *(_DWORD *)this = &HairShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x9C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor(
    (char *)this + 0xA4,
    4u,
    7,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xC0,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xCC,
    4u,
    7,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xE8,
    4u,
    3,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x3D) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((_BYTE *)this + 0x78) = 0;
  v4 = *((_DWORD *)this + 0x3D);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0x3D) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v5 = *((_DWORD *)this + 0x3E);
  if ( v5 != a3 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *((_DWORD *)this + 0x3E) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  v6 = *((_DWORD *)this + 0x3E);
  v7 = *((_DWORD *)this + 9);
  if ( v7 != v6 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *((_DWORD *)this + 9) = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF;
  return this;
}
