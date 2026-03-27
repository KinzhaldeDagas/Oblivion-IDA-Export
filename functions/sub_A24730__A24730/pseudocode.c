void __cdecl sub_A24730()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135D0);
  if ( off_B135D4 )
  {
    if ( *off_B135D4 == 0x53 )
      FormHeapFree((unsigned int)off_B135D4);
  }
}
