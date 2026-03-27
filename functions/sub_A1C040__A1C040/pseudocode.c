void __cdecl sub_A1C040()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bCheckOffsetOnLoad);
  if ( off_B09DBC[0] )
  {
    if ( *off_B09DBC[0] == 0x53 )
      FormHeapFree((unsigned int)off_B09DBC[0]);
  }
}
