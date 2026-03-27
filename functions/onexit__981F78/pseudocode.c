_onexit_t __cdecl _onexit(_onexit_t Func)
{
  _lockexit();
  _onexit_nolock((int)Func);
  _unlockexit();
  return _onexit_::_LN8_1();
}
