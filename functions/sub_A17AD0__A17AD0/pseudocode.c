void __cdecl sub_A17AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)sInvalidationFile_Archive);
  if ( off_B04454[0] )
  {
    if ( *off_B04454[0] == 0x53 )
      FormHeapFree((unsigned int)off_B04454[0]);
  }
}
