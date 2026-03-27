void __cdecl sub_A19770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E64);
  if ( off_B06E68 )
  {
    if ( *off_B06E68 == 0x53 )
      FormHeapFree((unsigned int)off_B06E68);
  }
}
