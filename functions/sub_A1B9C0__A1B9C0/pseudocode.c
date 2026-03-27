void __cdecl sub_A1B9C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B84);
  if ( off_B08B88 )
  {
    if ( *off_B08B88 == 0x53 )
      FormHeapFree((unsigned int)off_B08B88);
  }
}
