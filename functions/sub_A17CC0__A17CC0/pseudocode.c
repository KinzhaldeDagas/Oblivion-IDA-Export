void __cdecl sub_A17CC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bPreemptivelyUnloadCells);
  if ( off_B051D0 )
  {
    if ( *off_B051D0 == 0x53 )
      FormHeapFree((unsigned int)off_B051D0);
  }
}
