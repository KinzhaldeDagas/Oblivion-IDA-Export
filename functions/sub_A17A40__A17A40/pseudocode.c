void __cdecl sub_A17A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainDirectoryStringTable_Archive);
  if ( off_B0443C )
  {
    if ( *off_B0443C == 0x53 )
      FormHeapFree((unsigned int)off_B0443C);
  }
}
