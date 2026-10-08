void __cdecl sub_A16B80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02D50); /*0xa16b8a*/
  if ( off_B02D54 ) /*0xa16b96*/
  {
    if ( *off_B02D54 == 0x53 ) /*0xa16b9b*/
      FormHeapFree((unsigned int)off_B02D54); /*0xa16b9e*/
  }
}
