void __cdecl sub_A256A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CBC);
  if ( off_B14CC0 )
  {
    if ( *off_B14CC0 == 0x53 )
      FormHeapFree((unsigned int)off_B14CC0);
  }
}
