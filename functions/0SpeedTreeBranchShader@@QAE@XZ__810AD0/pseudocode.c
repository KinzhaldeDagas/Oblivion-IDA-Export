SpeedTreeBranchShader *__thiscall SpeedTreeBranchShader::SpeedTreeBranchShader(SpeedTreeBranchShader *this, int a2)
{
  ShadowLightShader::ShadowLightShader(this, a2, 0, 0, 0);
  *(_DWORD *)this = &SpeedTreeBranchShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x9C,
    4u,
    0x1C,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x10C,
    4u,
    0xA,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  return this;
}
