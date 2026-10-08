void __cdecl sub_A16970()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CF8); /*0xa1697a*/
  if ( off_B02CFC ) /*0xa16986*/
  {
    if ( *off_B02CFC == 0x53 ) /*0xa1698b*/
      FormHeapFree((unsigned int)off_B02CFC); /*0xa1698e*/
  }
}
