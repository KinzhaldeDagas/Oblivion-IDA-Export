void __cdecl sub_A1BB60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B097C8);
  if ( off_B097CC )
  {
    if ( *off_B097CC == 0x53 )
      FormHeapFree((unsigned int)off_B097CC);
  }
}
