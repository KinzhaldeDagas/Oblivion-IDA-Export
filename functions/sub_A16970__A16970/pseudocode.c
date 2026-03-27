void __cdecl sub_A16970()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CF8);
  if ( off_B02CFC )
  {
    if ( *off_B02CFC == 0x53 )
      FormHeapFree((unsigned int)off_B02CFC);
  }
}
