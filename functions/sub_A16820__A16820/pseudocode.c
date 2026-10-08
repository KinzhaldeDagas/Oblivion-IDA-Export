void __cdecl sub_A16820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CC0); /*0xa1682a*/
  if ( off_B02CC4 ) /*0xa16836*/
  {
    if ( *off_B02CC4 == 0x53 ) /*0xa1683b*/
      FormHeapFree((unsigned int)off_B02CC4); /*0xa1683e*/
  }
}
