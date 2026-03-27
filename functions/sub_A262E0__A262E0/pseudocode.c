void __cdecl sub_A262E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16254);
  if ( off_B16258 )
  {
    if ( *off_B16258 == 0x53 )
      FormHeapFree((unsigned int)off_B16258);
  }
}
