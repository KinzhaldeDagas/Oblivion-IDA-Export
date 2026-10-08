// SpeedTreeFrondShader constructor. Current xrefs show construction only from frond shader-definition factory 0x80EE10, not from a TES4 geometry attachment path.
SpeedTreeFrondShader *__thiscall SpeedTreeFrondShader::SpeedTreeFrondShader(SpeedTreeFrondShader *this)
{
  BSShader::BSShader((BSShader *)this); /*0x80e8e8*/
  *(_DWORD *)this = &SpeedTreeFrondShader::`vftable'; /*0x80e907*/
  ArrayConstructor( /*0x80e90d*/
    (char *)this + 0x7C,
    4u,
    4,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  ArrayConstructor( /*0x80e92c*/
    (char *)this + 0x8C,
    4u,
    2,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  *((_DWORD *)this + 0x25) = 0; /*0x80e933*/
  *((float *)this + 0x26) = 0.0; /*0x80e93d*/
  *((float *)this + 0x27) = 0.0; /*0x80e943*/
  *((float *)this + 0x28) = 0.0; /*0x80e94b*/
  *((float *)this + 0x29) = 0.0; /*0x80e951*/
  *((float *)this + 0x2A) = 0.0; /*0x80e957*/
  *((float *)this + 0x2B) = 0.0; /*0x80e95d*/
  *((float *)this + 0x2C) = 0.0; /*0x80e963*/
  *((float *)this + 0x2D) = 0.0; /*0x80e969*/
  return this; /*0x80e96f*/
}
