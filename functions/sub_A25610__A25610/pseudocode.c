void __cdecl sub_A25610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BC4); /*0xa2561a*/
  if ( off_B14BC8 ) /*0xa25626*/
  {
    if ( *off_B14BC8 == 0x53 ) /*0xa2562b*/
      FormHeapFree((unsigned int)off_B14BC8); /*0xa2562e*/
  }
}
