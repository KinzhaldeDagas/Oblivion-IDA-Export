void __cdecl sub_A1A4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B070B8);
  if ( off_B070BC )
  {
    if ( *off_B070BC == 0x53 )
      FormHeapFree((unsigned int)off_B070BC);
  }
}
