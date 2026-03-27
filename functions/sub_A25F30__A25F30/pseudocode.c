void __cdecl sub_A25F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15834);
  if ( off_B15838[0] )
  {
    if ( *off_B15838[0] == 0x53 )
      FormHeapFree((unsigned int)off_B15838[0]);
  }
}
