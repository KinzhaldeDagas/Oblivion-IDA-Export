void __cdecl sub_A19020()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06D2C);
  if ( off_B06D30 )
  {
    if ( *off_B06D30 == 0x53 )
      FormHeapFree((unsigned int)off_B06D30);
  }
}
