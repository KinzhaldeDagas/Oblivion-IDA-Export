void __cdecl sub_A16700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02C90);
  if ( off_B02C94 )
  {
    if ( *off_B02C94 == 0x53 )
      FormHeapFree((unsigned int)off_B02C94);
  }
}
