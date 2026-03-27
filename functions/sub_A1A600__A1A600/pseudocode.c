void __cdecl sub_A1A600()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B070F0);
  if ( off_B070F4[0] )
  {
    if ( *off_B070F4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B070F4[0]);
  }
}
