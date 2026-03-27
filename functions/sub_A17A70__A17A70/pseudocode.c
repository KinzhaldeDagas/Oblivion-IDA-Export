void __cdecl sub_A17A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainFilenameStringTable_Archive);
  if ( off_B04444 )
  {
    if ( *off_B04444 == 0x53 )
      FormHeapFree((unsigned int)off_B04444);
  }
}
