std::_Mutex *__thiscall std::_Mutex::_Mutex(std::_Mutex *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // eax

  v2 = (_RTL_CRITICAL_SECTION_0 *)FormHeapAlloc(0x18u);
  *(_DWORD *)this = v2;
  unknown_libname_7(v2);
  return this;
}
