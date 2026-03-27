void __cdecl sub_A17240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B03124);
  if ( off_B03128 )
  {
    if ( *off_B03128 == 0x53 )
      FormHeapFree((unsigned int)off_B03128);
  }
}
