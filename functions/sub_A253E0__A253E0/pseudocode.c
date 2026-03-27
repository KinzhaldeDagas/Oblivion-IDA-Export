void __cdecl sub_A253E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B148F4);
  if ( off_B148F8 )
  {
    if ( *off_B148F8 == 0x53 )
      FormHeapFree((unsigned int)off_B148F8);
  }
}
