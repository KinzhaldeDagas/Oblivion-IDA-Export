void __cdecl sub_A25810()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14E44); /*0xa2581a*/
  if ( off_B14E48 ) /*0xa25826*/
  {
    if ( *off_B14E48 == 0x53 ) /*0xa2582b*/
      FormHeapFree((unsigned int)off_B14E48); /*0xa2582e*/
  }
}
