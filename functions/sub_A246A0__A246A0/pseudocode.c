void __cdecl sub_A246A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135B8);
  if ( off_B135BC )
  {
    if ( *off_B135BC == 0x53 )
      FormHeapFree((unsigned int)off_B135BC);
  }
}
