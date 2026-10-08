void __cdecl sub_A19DA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F6C); /*0xa19daa*/
  if ( off_B06F70 ) /*0xa19db6*/
  {
    if ( *off_B06F70 == 0x53 ) /*0xa19dbb*/
      FormHeapFree((unsigned int)off_B06F70); /*0xa19dbe*/
  }
}
