void __cdecl sub_A17090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0308C); /*0xa1709a*/
  if ( off_B03090[0] ) /*0xa170a6*/
  {
    if ( *off_B03090[0] == 0x53 ) /*0xa170ab*/
      FormHeapFree((unsigned int)off_B03090[0]); /*0xa170ae*/
  }
}
