void __cdecl sub_A18C90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C94); /*0xa18c9a*/
  if ( off_B06C98 ) /*0xa18ca6*/
  {
    if ( *off_B06C98 == 0x53 ) /*0xa18cab*/
      FormHeapFree((unsigned int)off_B06C98); /*0xa18cae*/
  }
}
