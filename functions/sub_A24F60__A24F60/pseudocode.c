void __cdecl sub_A24F60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1481C);
  if ( off_B14820 )
  {
    if ( *off_B14820 == 0x53 )
      FormHeapFree((unsigned int)off_B14820);
  }
}
