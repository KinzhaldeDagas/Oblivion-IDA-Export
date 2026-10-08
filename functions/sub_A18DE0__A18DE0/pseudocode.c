void __cdecl sub_A18DE0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CCC); /*0xa18dea*/
  if ( off_B06CD0 ) /*0xa18df6*/
  {
    if ( *off_B06CD0 == 0x53 ) /*0xa18dfb*/
      FormHeapFree((unsigned int)off_B06CD0); /*0xa18dfe*/
  }
}
