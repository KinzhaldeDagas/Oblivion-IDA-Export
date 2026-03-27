void __cdecl sub_A257B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14E34);
  if ( off_B14E38 )
  {
    if ( *off_B14E38 == 0x53 )
      FormHeapFree((unsigned int)off_B14E38);
  }
}
