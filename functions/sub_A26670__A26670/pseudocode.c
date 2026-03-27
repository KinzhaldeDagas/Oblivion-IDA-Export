void __cdecl sub_A26670()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B162EC);
  if ( off_B162F0 )
  {
    if ( *off_B162F0 == 0x53 )
      FormHeapFree((unsigned int)off_B162F0);
  }
}
