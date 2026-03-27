void __cdecl sub_A17B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bInvalidateOlderFiles_Archive);
  if ( off_B04464[0] )
  {
    if ( *off_B04464[0] == 0x53 )
      FormHeapFree((unsigned int)off_B04464[0]);
  }
}
