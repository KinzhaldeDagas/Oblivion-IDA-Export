void __cdecl sub_A18210()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05594); /*0xa1821a*/
  if ( off_B05598 ) /*0xa18226*/
  {
    if ( *off_B05598 == 0x53 ) /*0xa1822b*/
      FormHeapFree((unsigned int)off_B05598); /*0xa1822e*/
  }
}
