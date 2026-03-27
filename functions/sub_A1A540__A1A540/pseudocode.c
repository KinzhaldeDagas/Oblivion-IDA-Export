void __cdecl sub_A1A540()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B070D0);
  if ( off_B070D4 )
  {
    if ( *off_B070D4 == 0x53 )
      FormHeapFree((unsigned int)off_B070D4);
  }
}
