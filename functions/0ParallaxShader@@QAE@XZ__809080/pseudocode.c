ParallaxShader *__thiscall ParallaxShader::ParallaxShader(ParallaxShader *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi

  ShadowLightShader::ShadowLightShader(this, a2, a3, 0, 0); /*0x8090b9*/
  *(_DWORD *)this = &ParallaxShader::`vftable'; /*0x8090db*/
  ArrayConstructor( /*0x8090e1*/
    (char *)this + 0x9C,
    4u,
    0x24,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x809100*/
    (char *)this + 0x12C,
    4u,
    0x1E,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_BYTE *)this + 0x78) = 0; /*0x809105*/
  v4 = *((_DWORD *)this + 0x1F); /*0x809109*/
  if ( v4 != a2 ) /*0x809113*/
  {
    if ( v4 ) /*0x809117*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x80911d*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x809133*/
    }
    *((_DWORD *)this + 0x1F) = a2; /*0x809137*/
    if ( a2 ) /*0x80913a*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x809140*/
  }
  v5 = *((_DWORD *)this + 0x20); /*0x809146*/
  if ( v5 != a3 ) /*0x80914e*/
  {
    if ( v5 ) /*0x809152*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x809158*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x80916e*/
    }
    *((_DWORD *)this + 0x20) = a3; /*0x809172*/
    if ( a3 ) /*0x809178*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x80917e*/
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF; /*0x809184*/
  return this; /*0x80918d*/
}
