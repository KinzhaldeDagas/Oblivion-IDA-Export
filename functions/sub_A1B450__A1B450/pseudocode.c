void __cdecl sub_A1B450()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08150);
  if ( off_B08154 )
  {
    if ( *off_B08154 == 0x53 )
      FormHeapFree((unsigned int)off_B08154);
  }
}
