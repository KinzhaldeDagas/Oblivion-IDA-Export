void __cdecl sub_A19E60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06F8C); /*0xa19e6a*/
  if ( off_B06F90 ) /*0xa19e76*/
  {
    if ( *off_B06F90 == 0x53 ) /*0xa19e7b*/
      FormHeapFree((unsigned int)off_B06F90); /*0xa19e7e*/
  }
}
