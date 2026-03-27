void __cdecl sub_A17CF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&uInteriorCellBuffer);
  if ( off_B051D8 )
  {
    if ( *off_B051D8 == 0x53 )
      FormHeapFree((unsigned int)off_B051D8);
  }
}
