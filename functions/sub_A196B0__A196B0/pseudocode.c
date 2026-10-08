void __cdecl sub_A196B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06E44); /*0xa196ba*/
  if ( off_B06E48 ) /*0xa196c6*/
  {
    if ( *off_B06E48 == 0x53 ) /*0xa196cb*/
      FormHeapFree((unsigned int)off_B06E48); /*0xa196ce*/
  }
}
