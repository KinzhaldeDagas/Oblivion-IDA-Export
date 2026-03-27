void __cdecl sub_A24FC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1482C);
  if ( off_B14830 )
  {
    if ( *off_B14830 == 0x53 )
      FormHeapFree((unsigned int)off_B14830);
  }
}
