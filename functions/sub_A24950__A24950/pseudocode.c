void __cdecl sub_A24950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13984);
  if ( off_B13988 )
  {
    if ( *off_B13988 == 0x53 )
      FormHeapFree((unsigned int)off_B13988);
  }
}
