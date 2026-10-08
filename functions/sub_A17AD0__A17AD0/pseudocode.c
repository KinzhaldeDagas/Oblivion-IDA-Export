void __cdecl sub_A17AD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)sInvalidationFile_Archive); /*0xa17ada*/
  if ( off_B04454[0] ) /*0xa17ae6*/
  {
    if ( *off_B04454[0] == 0x53 ) /*0xa17aeb*/
      FormHeapFree((unsigned int)off_B04454[0]); /*0xa17aee*/
  }
}
