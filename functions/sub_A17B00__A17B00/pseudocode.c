void __cdecl sub_A17B00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)sArchiveList_Archive);
  if ( off_B0445C )
  {
    if ( *off_B0445C == 0x53 )
      FormHeapFree((unsigned int)off_B0445C);
  }
}
