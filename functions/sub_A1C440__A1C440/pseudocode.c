void __cdecl sub_A1C440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B10D70);
  if ( off_B10D74[0] )
  {
    if ( *off_B10D74[0] == 0x53 )
      FormHeapFree((unsigned int)off_B10D74[0]);
  }
}
