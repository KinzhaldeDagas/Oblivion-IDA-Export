void __cdecl sub_A24280()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&rDebugTextColor_Menu); /*0xa2428a*/
  if ( off_B12DB0 ) /*0xa24296*/
  {
    if ( *off_B12DB0 == 0x53 ) /*0xa2429b*/
      FormHeapFree((unsigned int)off_B12DB0); /*0xa2429e*/
  }
}
