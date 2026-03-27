void __cdecl sub_A24670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135B0);
  if ( off_B135B4 )
  {
    if ( *off_B135B4 == 0x53 )
      FormHeapFree((unsigned int)off_B135B4);
  }
}
