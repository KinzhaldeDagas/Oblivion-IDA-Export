void __cdecl sub_A1A940()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B07644);
  if ( off_B07648 )
  {
    if ( *off_B07648 == 0x53 )
      FormHeapFree((unsigned int)off_B07648);
  }
}
