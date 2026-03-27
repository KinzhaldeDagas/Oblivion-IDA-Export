void __cdecl sub_A25E00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B15750);
  if ( off_B15754[0] )
  {
    if ( *off_B15754[0] == 0x53 )
      FormHeapFree((unsigned int)off_B15754[0]);
  }
}
