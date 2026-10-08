void __cdecl sub_A18DB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDoImageSpaceEffect); /*0xa18dba*/
  if ( off_B06CC8 ) /*0xa18dc6*/
  {
    if ( *off_B06CC8 == 0x53 ) /*0xa18dcb*/
      FormHeapFree((unsigned int)off_B06CC8); /*0xa18dce*/
  }
}
