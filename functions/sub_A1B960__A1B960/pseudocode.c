void __cdecl sub_A1B960()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B74);
  if ( off_B08B78 )
  {
    if ( *off_B08B78 == 0x53 )
      FormHeapFree((unsigned int)off_B08B78);
  }
}
