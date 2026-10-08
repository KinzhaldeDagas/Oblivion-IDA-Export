void __cdecl sub_A18440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05BBC); /*0xa1844a*/
  if ( off_B05BC0 ) /*0xa18456*/
  {
    if ( *off_B05BC0 == 0x53 ) /*0xa1845b*/
      FormHeapFree((unsigned int)off_B05BC0); /*0xa1845e*/
  }
}
