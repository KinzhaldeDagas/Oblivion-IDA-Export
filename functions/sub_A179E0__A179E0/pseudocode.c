void __cdecl sub_A179E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUseArchives_Archive);
  if ( off_B0442C )
  {
    if ( *off_B0442C == 0x53 )
      FormHeapFree((unsigned int)off_B0442C);
  }
}
