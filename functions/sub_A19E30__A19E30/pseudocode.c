void __cdecl sub_A19E30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDynamicWindowsReflection); /*0xa19e3a*/
  if ( off_B06F88 ) /*0xa19e46*/
  {
    if ( *off_B06F88 == 0x53 ) /*0xa19e4b*/
      FormHeapFree((unsigned int)off_B06F88); /*0xa19e4e*/
  }
}
