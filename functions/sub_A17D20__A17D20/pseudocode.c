void __cdecl sub_A17D20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uExteriorCellBuffer);
  if ( off_B051E0[0] )
  {
    if ( *off_B051E0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B051E0[0]);
  }
}
