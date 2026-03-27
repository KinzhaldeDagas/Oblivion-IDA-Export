void __cdecl sub_A236C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B12608);
  if ( off_B1260C )
  {
    if ( *off_B1260C == 0x53 )
      FormHeapFree((unsigned int)off_B1260C);
  }
}
