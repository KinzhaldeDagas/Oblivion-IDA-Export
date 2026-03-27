void __cdecl sub_A263D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1627C);
  if ( off_B16280 )
  {
    if ( *off_B16280 == 0x53 )
      FormHeapFree((unsigned int)off_B16280);
  }
}
