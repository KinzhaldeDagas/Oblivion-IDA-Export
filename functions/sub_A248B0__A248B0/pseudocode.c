void __cdecl sub_A248B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13610);
  if ( off_B13614 )
  {
    if ( *off_B13614 == 0x53 )
      FormHeapFree((unsigned int)off_B13614);
  }
}
