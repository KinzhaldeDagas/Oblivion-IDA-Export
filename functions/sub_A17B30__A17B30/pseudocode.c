void __cdecl sub_A17B30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bInvalidateOlderFiles_Archive); /*0xa17b3a*/
  if ( off_B04464[0] ) /*0xa17b46*/
  {
    if ( *off_B04464[0] == 0x53 ) /*0xa17b4b*/
      FormHeapFree((unsigned int)off_B04464[0]); /*0xa17b4e*/
  }
}
