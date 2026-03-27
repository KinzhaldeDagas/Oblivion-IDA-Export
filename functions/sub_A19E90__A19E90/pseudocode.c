void __cdecl sub_A19E90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F94);
  if ( off_B06F98 )
  {
    if ( *off_B06F98 == 0x53 )
      FormHeapFree((unsigned int)off_B06F98);
  }
}
