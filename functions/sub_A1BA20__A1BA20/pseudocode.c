void __cdecl sub_A1BA20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B94);
  if ( off_B08B98 )
  {
    if ( *off_B08B98 == 0x53 )
      FormHeapFree((unsigned int)off_B08B98);
  }
}
