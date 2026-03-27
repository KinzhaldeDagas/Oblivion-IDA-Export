void __cdecl sub_A16B50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D48);
  if ( off_B02D4C[0] )
  {
    if ( *off_B02D4C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02D4C[0]);
  }
}
