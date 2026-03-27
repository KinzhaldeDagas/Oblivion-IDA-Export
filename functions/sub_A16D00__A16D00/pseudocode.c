void __cdecl sub_A16D00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D90);
  if ( off_B02D94 )
  {
    if ( *off_B02D94 == 0x53 )
      FormHeapFree((unsigned int)off_B02D94);
  }
}
