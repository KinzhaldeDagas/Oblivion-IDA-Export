void __cdecl sub_A1BB30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B097C0);
  if ( off_B097C4 )
  {
    if ( *off_B097C4 == 0x53 )
      FormHeapFree((unsigned int)off_B097C4);
  }
}
