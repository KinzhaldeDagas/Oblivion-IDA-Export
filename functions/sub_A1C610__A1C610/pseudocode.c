void __cdecl sub_A1C610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B11910);
  if ( off_B11914 )
  {
    if ( *off_B11914 == 0x53 )
      FormHeapFree((unsigned int)off_B11914);
  }
}
