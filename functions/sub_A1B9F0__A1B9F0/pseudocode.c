void __cdecl sub_A1B9F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B8C);
  if ( off_B08B90 )
  {
    if ( *off_B08B90 == 0x53 )
      FormHeapFree((unsigned int)off_B08B90);
  }
}
