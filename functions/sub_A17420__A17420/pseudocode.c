void __cdecl sub_A17420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0317C); /*0xa1742a*/
  if ( off_B03180[0] ) /*0xa17436*/
  {
    if ( *off_B03180[0] == 0x53 ) /*0xa1743b*/
      FormHeapFree((unsigned int)off_B03180[0]); /*0xa1743e*/
  }
}
