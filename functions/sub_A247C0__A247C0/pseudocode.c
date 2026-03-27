void __cdecl sub_A247C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135E8);
  if ( off_B135EC )
  {
    if ( *off_B135EC == 0x53 )
      FormHeapFree((unsigned int)off_B135EC);
  }
}
