void __cdecl sub_A17C90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B05150);
  if ( off_B05154[0] )
  {
    if ( *off_B05154[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05154[0]);
  }
}
