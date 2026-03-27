void __cdecl sub_A25920()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&trackLevelUps);
  if ( off_B14EAC )
  {
    if ( *off_B14EAC == 0x53 )
      FormHeapFree((unsigned int)off_B14EAC);
  }
}
