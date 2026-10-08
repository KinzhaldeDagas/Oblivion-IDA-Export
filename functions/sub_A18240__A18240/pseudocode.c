void __cdecl sub_A18240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0559C); /*0xa1824a*/
  if ( off_B055A0 ) /*0xa18256*/
  {
    if ( *off_B055A0 == 0x53 ) /*0xa1825b*/
      FormHeapFree((unsigned int)off_B055A0); /*0xa1825e*/
  }
}
