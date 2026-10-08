void __cdecl sub_A1BB90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_iMaxDecalsPerFrame_Display); /*0xa1bb9a*/
  if ( off_B097D4 ) /*0xa1bba6*/
  {
    if ( *off_B097D4 == 0x53 ) /*0xa1bbab*/
      FormHeapFree((unsigned int)off_B097D4); /*0xa1bbae*/
  }
}
