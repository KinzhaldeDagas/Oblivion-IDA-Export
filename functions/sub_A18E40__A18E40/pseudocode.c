void __cdecl sub_A18E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CDC); /*0xa18e4a*/
  if ( off_B06CE0 ) /*0xa18e56*/
  {
    if ( *off_B06CE0 == 0x53 ) /*0xa18e5b*/
      FormHeapFree((unsigned int)off_B06CE0); /*0xa18e5e*/
  }
}
