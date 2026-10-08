void __cdecl sub_A259B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&fCameraCasterSize); /*0xa259ba*/
  if ( off_B14EC4 ) /*0xa259c6*/
  {
    if ( *off_B14EC4 == 0x53 ) /*0xa259cb*/
      FormHeapFree((unsigned int)off_B14EC4); /*0xa259ce*/
  }
}
