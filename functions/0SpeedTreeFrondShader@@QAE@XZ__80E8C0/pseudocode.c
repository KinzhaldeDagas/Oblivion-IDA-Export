SpeedTreeFrondShader *__thiscall SpeedTreeFrondShader::SpeedTreeFrondShader(SpeedTreeFrondShader *this)
{
  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &SpeedTreeFrondShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x7C,
    4u,
    4,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x8C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0x25) = 0;
  *((float *)this + 0x26) = 0.0;
  *((float *)this + 0x27) = 0.0;
  *((float *)this + 0x28) = 0.0;
  *((float *)this + 0x29) = 0.0;
  *((float *)this + 0x2A) = 0.0;
  *((float *)this + 0x2B) = 0.0;
  *((float *)this + 0x2C) = 0.0;
  *((float *)this + 0x2D) = 0.0;
  return this;
}
