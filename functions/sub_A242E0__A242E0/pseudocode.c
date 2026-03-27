void __cdecl sub_A242E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B12E1C);
  if ( off_B12E20[0] )
  {
    if ( *off_B12E20[0] == 0x53 )
      FormHeapFree((unsigned int)off_B12E20[0]);
  }
}
