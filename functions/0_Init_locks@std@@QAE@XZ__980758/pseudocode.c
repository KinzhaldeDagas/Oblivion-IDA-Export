std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // esi

  if ( !InterlockedIncrement(&dword_B30A08) )
  {
    v2 = (_RTL_CRITICAL_SECTION_0 *)&stru_BA9AF0;
    do
    {
      unknown_libname_7(v2);
      v2 = (_RTL_CRITICAL_SECTION_0 *)((char *)v2 + 0x18);
    }
    while ( (int)v2 < (int)&unk_BA9B50 );
  }
  return this;
}
