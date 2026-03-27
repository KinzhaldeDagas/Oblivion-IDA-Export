void __cdecl sub_A19A70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EE4);
  if ( off_B06EE8 )
  {
    if ( *off_B06EE8 == 0x53 )
      FormHeapFree((unsigned int)off_B06EE8);
  }
}
