void __cdecl sub_A16BB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D58);
  if ( off_B02D5C )
  {
    if ( *off_B02D5C == 0x53 )
      FormHeapFree((unsigned int)off_B02D5C);
  }
}
