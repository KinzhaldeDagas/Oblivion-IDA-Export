void __cdecl sub_A18550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06310); /*0xa1855a*/
  if ( off_B06314[0] ) /*0xa18566*/
  {
    if ( *off_B06314[0] == 0x53 ) /*0xa1856b*/
      FormHeapFree((unsigned int)off_B06314[0]); /*0xa1856e*/
  }
}
