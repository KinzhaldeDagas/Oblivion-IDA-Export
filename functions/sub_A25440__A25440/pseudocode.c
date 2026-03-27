void __cdecl sub_A25440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14904);
  if ( off_B14908 )
  {
    if ( *off_B14908 == 0x53 )
      FormHeapFree((unsigned int)off_B14908);
  }
}
