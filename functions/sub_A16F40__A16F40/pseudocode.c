void __cdecl sub_A16F40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02DF0);
  if ( off_B02DF4 )
  {
    if ( *off_B02DF4 == 0x53 )
      FormHeapFree((unsigned int)off_B02DF4);
  }
}
