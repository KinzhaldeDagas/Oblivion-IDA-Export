void __cdecl sub_A266D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B162FC);
  if ( off_B16300 )
  {
    if ( *off_B16300 == 0x53 )
      FormHeapFree((unsigned int)off_B16300);
  }
}
