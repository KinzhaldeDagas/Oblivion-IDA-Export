void __cdecl sub_A19CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F44); /*0xa19cba*/
  if ( off_B06F48 ) /*0xa19cc6*/
  {
    if ( *off_B06F48 == 0x53 ) /*0xa19ccb*/
      FormHeapFree((unsigned int)off_B06F48); /*0xa19cce*/
  }
}
