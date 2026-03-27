void __cdecl sub_A25CE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B14F48);
  if ( off_B14F4C )
  {
    if ( *off_B14F4C == 0x53 )
      FormHeapFree((unsigned int)off_B14F4C);
  }
}
