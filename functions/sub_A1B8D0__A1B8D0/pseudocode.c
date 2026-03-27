void __cdecl sub_A1B8D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B5C);
  if ( off_B08B60 )
  {
    if ( *off_B08B60 == 0x53 )
      FormHeapFree((unsigned int)off_B08B60);
  }
}
