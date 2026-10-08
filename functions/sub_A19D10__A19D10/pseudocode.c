void __cdecl sub_A19D10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F54); /*0xa19d1a*/
  if ( off_B06F58 ) /*0xa19d26*/
  {
    if ( *off_B06F58 == 0x53 ) /*0xa19d2b*/
      FormHeapFree((unsigned int)off_B06F58); /*0xa19d2e*/
  }
}
