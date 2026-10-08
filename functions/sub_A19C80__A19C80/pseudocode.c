void __cdecl sub_A19C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F3C); /*0xa19c8a*/
  if ( off_B06F40 ) /*0xa19c96*/
  {
    if ( *off_B06F40 == 0x53 ) /*0xa19c9b*/
      FormHeapFree((unsigned int)off_B06F40); /*0xa19c9e*/
  }
}
