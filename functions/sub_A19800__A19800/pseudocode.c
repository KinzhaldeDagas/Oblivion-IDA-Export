void __cdecl sub_A19800()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E7C);
  if ( off_B06E80 )
  {
    if ( *off_B06E80 == 0x53 )
      FormHeapFree((unsigned int)off_B06E80);
  }
}
