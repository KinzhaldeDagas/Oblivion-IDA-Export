void __cdecl sub_A25D70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B15370);
  if ( off_B15374[0] )
  {
    if ( *off_B15374[0] == 0x53 )
      FormHeapFree((unsigned int)off_B15374[0]);
  }
}
