void __cdecl sub_A18C60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C8C);
  if ( off_B06C90 )
  {
    if ( *off_B06C90 == 0x53 )
      FormHeapFree((unsigned int)off_B06C90);
  }
}
