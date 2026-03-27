void __cdecl sub_A25380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148E4);
  if ( off_B148E8 )
  {
    if ( *off_B148E8 == 0x53 )
      FormHeapFree((unsigned int)off_B148E8);
  }
}
