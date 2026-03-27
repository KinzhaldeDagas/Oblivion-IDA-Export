void __cdecl sub_A1BC60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&preventHavokAddAll);
  if ( off_B09874[0] )
  {
    if ( *off_B09874[0] == 0x53 )
      FormHeapFree((unsigned int)off_B09874[0]);
  }
}
