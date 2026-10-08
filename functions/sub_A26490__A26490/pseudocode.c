void __cdecl sub_A26490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1629C); /*0xa2649a*/
  if ( off_B162A0 ) /*0xa264a6*/
  {
    if ( *off_B162A0 == 0x53 ) /*0xa264ab*/
      FormHeapFree((unsigned int)off_B162A0); /*0xa264ae*/
  }
}
