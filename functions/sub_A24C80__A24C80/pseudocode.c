void __cdecl sub_A24C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14158);
  if ( off_B1415C )
  {
    if ( *off_B1415C == 0x53 )
      FormHeapFree((unsigned int)off_B1415C);
  }
}
