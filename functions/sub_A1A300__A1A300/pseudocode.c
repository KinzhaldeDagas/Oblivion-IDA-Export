void __cdecl sub_A1A300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07070);
  if ( off_B07074 )
  {
    if ( *off_B07074 == 0x53 )
      FormHeapFree((unsigned int)off_B07074);
  }
}
