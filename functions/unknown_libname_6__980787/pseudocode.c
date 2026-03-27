void unknown_libname_6()
{
  _RTL_CRITICAL_SECTION_0 *v0; // esi

  if ( InterlockedDecrement(&dword_B30A08) < 0 )
  {
    v0 = (_RTL_CRITICAL_SECTION_0 *)&stru_BA9AF0;
    do
    {
      sub_980D64(v0);
      v0 = (_RTL_CRITICAL_SECTION_0 *)((char *)v0 + 0x18);
    }
    while ( (int)v0 < (int)&unk_BA9B50 );
  }
}
