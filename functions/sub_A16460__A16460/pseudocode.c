void __cdecl sub_A16460()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundKey); /*0xa1646a*/
  if ( off_B02C38 ) /*0xa16476*/
  {
    if ( *off_B02C38 == 0x53 ) /*0xa1647b*/
      FormHeapFree((unsigned int)off_B02C38); /*0xa1647e*/
  }
}
