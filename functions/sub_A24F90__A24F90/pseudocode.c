void __cdecl sub_A24F90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14824);
  if ( off_B14828 )
  {
    if ( *off_B14828 == 0x53 )
      FormHeapFree((unsigned int)off_B14828);
  }
}
