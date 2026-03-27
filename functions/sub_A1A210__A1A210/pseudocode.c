void __cdecl sub_A1A210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B07048);
  if ( off_B0704C )
  {
    if ( *off_B0704C == 0x53 )
      FormHeapFree((unsigned int)off_B0704C);
  }
}
