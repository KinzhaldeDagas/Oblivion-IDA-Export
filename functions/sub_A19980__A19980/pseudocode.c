void __cdecl sub_A19980()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EBC);
  if ( off_B06EC0 )
  {
    if ( *off_B06EC0 == 0x53 )
      FormHeapFree((unsigned int)off_B06EC0);
  }
}
