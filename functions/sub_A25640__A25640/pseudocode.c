void __cdecl sub_A25640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BCC); /*0xa2564a*/
  if ( off_B14BD0 ) /*0xa25656*/
  {
    if ( *off_B14BD0 == 0x53 ) /*0xa2565b*/
      FormHeapFree((unsigned int)off_B14BD0); /*0xa2565e*/
  }
}
