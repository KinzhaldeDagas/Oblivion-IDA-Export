void __cdecl sub_A181B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05584);
  if ( off_B05588 )
  {
    if ( *off_B05588 == 0x53 )
      FormHeapFree((unsigned int)off_B05588);
  }
}
