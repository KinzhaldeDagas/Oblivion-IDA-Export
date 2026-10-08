SkinShader *__thiscall SkinShader::SkinShader(SkinShader *this, int a2, int a3)
{
  int v4; // edi
  int v5; // edi

  ShadowLightShader::ShadowLightShader(this, a2, a3, 0, 0); /*0x80ad79*/
  *(_DWORD *)this = &SkinShader::`vftable'; /*0x80ad9b*/
  ArrayConstructor( /*0x80ada1*/
    (char *)this + 0x9C,
    4u,
    0x14,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x80adc0*/
    (char *)this + 0xEC,
    4u,
    0xA,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_BYTE *)this + 0x78) = 0; /*0x80adc5*/
  v4 = *((_DWORD *)this + 0x1F); /*0x80adc9*/
  if ( v4 != a2 ) /*0x80add3*/
  {
    if ( v4 ) /*0x80add7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x80addd*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x80adf3*/
    }
    *((_DWORD *)this + 0x1F) = a2; /*0x80adf7*/
    if ( a2 ) /*0x80adfa*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x80ae00*/
  }
  v5 = *((_DWORD *)this + 0x20); /*0x80ae06*/
  if ( v5 != a3 ) /*0x80ae0e*/
  {
    if ( v5 ) /*0x80ae12*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x80ae18*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x80ae2e*/
    }
    *((_DWORD *)this + 0x20) = a3; /*0x80ae32*/
    if ( a3 ) /*0x80ae38*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x80ae3e*/
  }
  *((_DWORD *)this + 0x1D) = 0xFFFFFFFF; /*0x80ae44*/
  return this; /*0x80ae4d*/
}
