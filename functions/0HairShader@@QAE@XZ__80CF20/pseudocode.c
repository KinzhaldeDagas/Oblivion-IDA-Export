HairShader *__thiscall HairShader::HairShader(HairShader *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int v6; // ebp
  int v7; // edi

  ShadowLightShader::ShadowLightShader(this, a2, a3, 0, 0); /*0x80cf59*/
  *(_DWORD *)this = &HairShader::`vftable'; /*0x80cf77*/
  ArrayConstructor( /*0x80cf7d*/
    (char *)this + 0x9C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_4027D0);
  ArrayConstructor( /*0x80cf9c*/
    (char *)this + 0xA4,
    4u,
    7,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x80cfbb*/
    (char *)this + 0xC0,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x80cfda*/
    (char *)this + 0xCC,
    4u,
    7,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x80cff9*/
    (char *)this + 0xE8,
    4u,
    3,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x3D) = 0; /*0x80cffe*/
  *((_DWORD *)this + 0x3E) = 0; /*0x80d004*/
  *((_BYTE *)this + 0x78) = 0; /*0x80d00a*/
  v4 = *((_DWORD *)this + 0x3D); /*0x80d00d*/
  if ( v4 != a2 ) /*0x80d01a*/
  {
    if ( v4 ) /*0x80d01e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x80d024*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x80d03a*/
    }
    *((_DWORD *)this + 0x3D) = a2; /*0x80d03e*/
    if ( a2 ) /*0x80d044*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x80d04a*/
  }
  v5 = *((_DWORD *)this + 0x3E); /*0x80d050*/
  if ( v5 != a3 ) /*0x80d05c*/
  {
    if ( v5 ) /*0x80d060*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x80d066*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x80d07c*/
    }
    *((_DWORD *)this + 0x3E) = a3; /*0x80d080*/
    if ( a3 ) /*0x80d086*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x80d08c*/
  }
  v6 = *((_DWORD *)this + 0x3E); /*0x80d092*/
  v7 = *((_DWORD *)this + 9); /*0x80d098*/
  if ( v7 != v6 ) /*0x80d09d*/
  {
    if ( v7 ) /*0x80d0a1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x80d0a7*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x80d0bd*/
    }
    *((_DWORD *)this + 9) = v6; /*0x80d0c1*/
    if ( v6 ) /*0x80d0c4*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x80d0ca*/
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF; /*0x80d0d0*/
  return this; /*0x80d0d9*/
}
