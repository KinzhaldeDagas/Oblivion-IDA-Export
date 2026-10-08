void __cdecl sub_A26520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B162B4); /*0xa2652a*/
  if ( off_B162B8 ) /*0xa26536*/
  {
    if ( *off_B162B8 == 0x53 ) /*0xa2653b*/
      FormHeapFree((unsigned int)off_B162B8); /*0xa2653e*/
  }
}
