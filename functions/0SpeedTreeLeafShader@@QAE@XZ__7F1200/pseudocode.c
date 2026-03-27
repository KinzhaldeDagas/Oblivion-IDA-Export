SpeedTreeLeafShader *__thiscall SpeedTreeLeafShader::SpeedTreeLeafShader(SpeedTreeLeafShader *this)
{
  BSShader::BSShader((BSShader *)this);
  *(_DWORD *)this = &SpeedTreeLeafShader::`vftable';
  ArrayConstructor(
    (char *)this + 0x37C,
    4u,
    4,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  ArrayConstructor(
    (char *)this + 0x38C,
    4u,
    2,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *((_DWORD *)this + 0xE5) = 0;
  _memset((char *)this + 0x7C, 0, 0x300);
  flt_B46758 = 1.0;
  flt_B46764 = 1.0;
  flt_B4675C = 1.0;
  flt_B46760 = 1.0;
  flt_B46770 = 1.0;
  flt_B46768 = 1.0;
  flt_B4676C = 1.0;
  flt_B4677C = 0.0;
  flt_B46774 = 1.0;
  RockPArams = 0.0;
  RsutleParams = 0.0;
  flt_B46780 = 0.0;
  *(float *)&dword_B46784 = 0.0;
  *(float *)&dword_B46794 = 0.0;
  flt_B4678C = 0.0;
  flt_B46790 = 0.0;
  return this;
}
