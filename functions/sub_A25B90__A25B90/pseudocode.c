void __cdecl sub_A25B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14F10); /*0xa25b9a*/
  if ( off_B14F14 ) /*0xa25ba6*/
  {
    if ( *off_B14F14 == 0x53 ) /*0xa25bab*/
      FormHeapFree((unsigned int)off_B14F14); /*0xa25bae*/
  }
}
