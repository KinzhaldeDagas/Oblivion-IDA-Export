void __cdecl sub_A17150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B030AC);
  if ( off_B030B0 )
  {
    if ( *off_B030B0 == 0x53 )
      FormHeapFree((unsigned int)off_B030B0);
  }
}
