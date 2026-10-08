_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // ebp

  _lockexit(); /*0x981f84*/
  _onexit_nolock((int)Func); /*0x981f90*/
  _unlockexit(); /*0x981fae*/
  return (_onexit_t)_onexit_::_LN8_1(v1);
}
