void __cdecl sub_A256D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CC4);
  if ( off_B14CC8 )
  {
    if ( *off_B14CC8 == 0x53 )
      FormHeapFree((unsigned int)off_B14CC8);
  }
}
