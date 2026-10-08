std::_Mutex *__thiscall std::_Mutex::_Mutex(std::_Mutex *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // eax

  v2 = (_RTL_CRITICAL_SECTION_0 *)FormHeapAlloc(0x18u); /*0x980be9*/
  *(_DWORD *)this = v2; /*0x980bef*/
  unknown_libname_7(v2); /*0x980bf1*/
  return this; /*0x980bfa*/
}
