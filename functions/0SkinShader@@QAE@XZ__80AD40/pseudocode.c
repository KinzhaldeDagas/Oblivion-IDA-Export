SkinShader *__thiscall SkinShader::SkinShader(SkinShader *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi

  ShadowLightShader::ShadowLightShader(this, a2, a3, 0, 0);
  *(_DWORD *)this = &SkinShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x9C,
    4u,
    0x14,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0xEC,
    4u,
    0xA,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_BYTE *)this + 0x78) = 0;
  v4 = *((_DWORD *)this + 0x1F);
  if ( v4 != a2 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0x1F) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v5 = *((_DWORD *)this + 0x20);
  if ( v5 != a3 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *((_DWORD *)this + 0x20) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF;
  return this;
}
