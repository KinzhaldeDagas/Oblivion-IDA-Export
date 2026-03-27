void __cdecl sub_A19B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F14);
  if ( off_B06F18 )
  {
    if ( *off_B06F18 == 0x53 )
      FormHeapFree((unsigned int)off_B06F18);
  }
}
