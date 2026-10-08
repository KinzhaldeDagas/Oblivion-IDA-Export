void __cdecl sub_A18F60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iMultiSample); /*0xa18f6a*/
  if ( off_B06D10 ) /*0xa18f76*/
  {
    if ( *off_B06D10 == 0x53 ) /*0xa18f7b*/
      FormHeapFree((unsigned int)off_B06D10); /*0xa18f7e*/
  }
}
