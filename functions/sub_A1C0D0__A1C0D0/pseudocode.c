void __cdecl sub_A1C0D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B09EF0);
  if ( off_B09EF4[0] )
  {
    if ( *off_B09EF4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B09EF4[0]);
  }
}
