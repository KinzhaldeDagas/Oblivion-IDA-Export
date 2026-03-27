void __cdecl sub_A1A6C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B07280);
  if ( off_B07284[0] )
  {
    if ( *off_B07284[0] == 0x53 )
      FormHeapFree((unsigned int)off_B07284[0]);
  }
}
