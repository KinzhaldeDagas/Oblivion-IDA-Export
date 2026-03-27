void __cdecl sub_A196B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E44);
  if ( off_B06E48 )
  {
    if ( *off_B06E48 == 0x53 )
      FormHeapFree((unsigned int)off_B06E48);
  }
}
