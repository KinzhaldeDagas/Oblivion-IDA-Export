// SpeedTreeBranchShader ctor: ShadowLightShader base, 28 branch vertex-shader refs at +0x9C and 10 branch pixel-shader refs at +0x10C.
SpeedTreeBranchShader *__thiscall SpeedTreeBranchShader::SpeedTreeBranchShader(SpeedTreeBranchShader *this, int a2)
{
  ShadowLightShader::ShadowLightShader(this, a2, 0, 0, 0); /*0x810b03*/
  *(_DWORD *)this = &SpeedTreeBranchShader::`vftable'; /*0x810b25*/
  ArrayConstructor( /*0x810b2b*/
    (char *)this + 0x9C,
    4u,
    0x1C,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x810b4a*/
    (char *)this + 0x10C,
    4u,
    0xA,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  return this; /*0x810b51*/
}
