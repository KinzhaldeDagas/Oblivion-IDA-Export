void __cdecl sub_A1B3F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeLinear);
  if ( off_B08144 )
  {
    if ( *off_B08144 == 0x53 )
      FormHeapFree((unsigned int)off_B08144);
  }
}
