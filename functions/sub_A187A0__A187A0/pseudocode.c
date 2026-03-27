void __cdecl sub_A187A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uGridsToLoad);
  if ( off_B06A30[0] )
  {
    if ( *off_B06A30[0] == 0x53 )
      FormHeapFree((unsigned int)off_B06A30[0]);
  }
}
