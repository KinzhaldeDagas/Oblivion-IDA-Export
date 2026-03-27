void __cdecl sub_A1BA50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B9C);
  if ( off_B08BA0 )
  {
    if ( *off_B08BA0 == 0x53 )
      FormHeapFree((unsigned int)off_B08BA0);
  }
}
