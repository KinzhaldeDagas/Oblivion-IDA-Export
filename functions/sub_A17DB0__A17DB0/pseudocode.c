void __cdecl sub_A17DB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051F4);
  if ( off_B051F8 )
  {
    if ( *off_B051F8 == 0x53 )
      FormHeapFree((unsigned int)off_B051F8);
  }
}
