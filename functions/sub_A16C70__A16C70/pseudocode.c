void __cdecl sub_A16C70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D78);
  if ( off_B02D7C )
  {
    if ( *off_B02D7C == 0x53 )
      FormHeapFree((unsigned int)off_B02D7C);
  }
}
