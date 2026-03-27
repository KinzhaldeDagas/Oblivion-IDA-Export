void __cdecl sub_A17120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B030A4);
  if ( off_B030A8 )
  {
    if ( *off_B030A8 == 0x53 )
      FormHeapFree((unsigned int)off_B030A8);
  }
}
