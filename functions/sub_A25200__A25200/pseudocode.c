void __cdecl sub_A25200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B1488C);
  if ( off_B14890 )
  {
    if ( *off_B14890 == 0x53 )
      FormHeapFree((unsigned int)off_B14890);
  }
}
