void __cdecl sub_A25410()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B148FC);
  if ( off_B14900 )
  {
    if ( *off_B14900 == 0x53 )
      FormHeapFree((unsigned int)off_B14900);
  }
}
