void __cdecl sub_A25760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CDC);
  if ( off_B14CE0[0] )
  {
    if ( *off_B14CE0[0] == 0x53 )
      FormHeapFree((unsigned int)off_B14CE0[0]);
  }
}
