void __cdecl sub_A1C470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B10D78);
  if ( off_B10D7C[0] )
  {
    if ( *off_B10D7C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B10D7C[0]);
  }
}
