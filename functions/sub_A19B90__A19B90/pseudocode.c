void __cdecl sub_A19B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06F14); /*0xa19b9a*/
  if ( off_B06F18 ) /*0xa19ba6*/
  {
    if ( *off_B06F18 == 0x53 ) /*0xa19bab*/
      FormHeapFree((unsigned int)off_B06F18); /*0xa19bae*/
  }
}
