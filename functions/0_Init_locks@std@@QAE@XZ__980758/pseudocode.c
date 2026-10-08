std::_Init_locks *__thiscall std::_Init_locks::_Init_locks(std::_Init_locks *this)
{
  _RTL_CRITICAL_SECTION_0 *v2; // esi

  if ( !InterlockedIncrement(&dword_B30A08) ) /*0x980760*/
  {
    v2 = (_RTL_CRITICAL_SECTION_0 *)&unk_BA9AF0; /*0x98076b*/
    do /*0x980780*/
    {
      unknown_libname_7(v2); /*0x980771*/
      v2 = (_RTL_CRITICAL_SECTION_0 *)((char *)v2 + 0x18); /*0x980776*/
    }
    while ( (int)v2 < (int)&unk_BA9B50 ); /*0x980780*/
  }
  return this; /*0x980785*/
}
