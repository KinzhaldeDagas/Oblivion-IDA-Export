void __cdecl sub_A17390()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0315C);
  if ( off_B03160[0] )
  {
    if ( *off_B03160[0] == 0x53 )
      FormHeapFree((unsigned int)off_B03160[0]);
  }
}
