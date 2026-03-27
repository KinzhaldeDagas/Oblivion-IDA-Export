void __cdecl sub_A1A5A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070E0);
  if ( off_B070E4 )
  {
    if ( *off_B070E4 == 0x53 )
      FormHeapFree((unsigned int)off_B070E4);
  }
}
