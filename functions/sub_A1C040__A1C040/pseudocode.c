void __cdecl sub_A1C040()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bCheckOffsetOnLoad); /*0xa1c04a*/
  if ( off_B09DBC[0] ) /*0xa1c056*/
  {
    if ( *off_B09DBC[0] == 0x53 ) /*0xa1c05b*/
      FormHeapFree((unsigned int)off_B09DBC[0]); /*0xa1c05e*/
  }
}
