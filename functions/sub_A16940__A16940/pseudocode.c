void __cdecl sub_A16940()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CF0);
  if ( off_B02CF4 )
  {
    if ( *off_B02CF4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CF4);
  }
}
