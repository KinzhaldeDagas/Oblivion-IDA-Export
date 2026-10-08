void __cdecl sub_A19380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&ForcePow2Text); /*0xa1938a*/
  if ( off_B06DC0 ) /*0xa19396*/
  {
    if ( *off_B06DC0 == 0x53 ) /*0xa1939b*/
      FormHeapFree((unsigned int)off_B06DC0); /*0xa1939e*/
  }
}
