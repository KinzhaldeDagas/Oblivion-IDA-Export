void __cdecl sub_A24790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135E0);
  if ( off_B135E4 )
  {
    if ( *off_B135E4 == 0x53 )
      FormHeapFree((unsigned int)off_B135E4);
  }
}
