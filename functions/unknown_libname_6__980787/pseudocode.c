void unknown_libname_6()
{
  _RTL_CRITICAL_SECTION_0 *v0; // esi

  if ( InterlockedDecrement(&dword_B30A08) < 0 ) /*0x980794*/
  {
    v0 = (_RTL_CRITICAL_SECTION_0 *)&unk_BA9AF0; /*0x980797*/
    do /*0x9807ac*/
    {
      sub_980D64(v0); /*0x98079d*/
      v0 = (_RTL_CRITICAL_SECTION_0 *)((char *)v0 + 0x18); /*0x9807a2*/
    }
    while ( (int)v0 < (int)&unk_BA9B50 ); /*0x9807ac*/
  }
}
