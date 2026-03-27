void __cdecl sub_A24DE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14388);
  if ( off_B1438C )
  {
    if ( *off_B1438C == 0x53 )
      FormHeapFree((unsigned int)off_B1438C);
  }
}
