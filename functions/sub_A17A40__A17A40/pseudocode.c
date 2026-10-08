void __cdecl sub_A17A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iRetainDirectoryStringTable_Archive); /*0xa17a4a*/
  if ( off_B0443C ) /*0xa17a56*/
  {
    if ( *off_B0443C == 0x53 ) /*0xa17a5b*/
      FormHeapFree((unsigned int)off_B0443C); /*0xa17a5e*/
  }
}
