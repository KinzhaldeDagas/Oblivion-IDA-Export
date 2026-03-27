void __cdecl sub_A16EE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpText);
  if ( off_B02DE4[0] )
  {
    if ( *off_B02DE4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02DE4[0]);
  }
}
