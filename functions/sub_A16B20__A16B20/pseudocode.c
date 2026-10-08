void __cdecl sub_A16B20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02D40); /*0xa16b2a*/
  if ( off_B02D44 ) /*0xa16b36*/
  {
    if ( *off_B02D44 == 0x53 ) /*0xa16b3b*/
      FormHeapFree((unsigned int)off_B02D44); /*0xa16b3e*/
  }
}
