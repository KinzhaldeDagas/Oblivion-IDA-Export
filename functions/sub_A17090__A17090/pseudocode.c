void __cdecl sub_A17090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B0308C);
  if ( off_B03090[0] )
  {
    if ( *off_B03090[0] == 0x53 )
      FormHeapFree((unsigned int)off_B03090[0]);
  }
}
