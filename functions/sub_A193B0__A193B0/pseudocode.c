void __cdecl sub_A193B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06DC4);
  if ( off_B06DC8 )
  {
    if ( *off_B06DC8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DC8);
  }
}
