void __cdecl sub_A19CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F4C); /*0xa19cea*/
  if ( off_B06F50 ) /*0xa19cf6*/
  {
    if ( *off_B06F50 == 0x53 ) /*0xa19cfb*/
      FormHeapFree((unsigned int)off_B06F50); /*0xa19cfe*/
  }
}
