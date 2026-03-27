void __cdecl sub_A19710()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E54);
  if ( off_B06E58 )
  {
    if ( *off_B06E58 == 0x53 )
      FormHeapFree((unsigned int)off_B06E58);
  }
}
