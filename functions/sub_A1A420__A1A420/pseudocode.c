void __cdecl sub_A1A420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useWaterDepth); /*0xa1a42a*/
  if ( off_B070A4 ) /*0xa1a436*/
  {
    if ( *off_B070A4 == 0x53 ) /*0xa1a43b*/
      FormHeapFree((unsigned int)off_B070A4); /*0xa1a43e*/
  }
}
