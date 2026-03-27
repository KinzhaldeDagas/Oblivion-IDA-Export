void __cdecl sub_A1C670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11920);
  if ( off_B11924[0] )
  {
    if ( *off_B11924[0] == 0x53 )
      FormHeapFree((unsigned int)off_B11924[0]);
  }
}
