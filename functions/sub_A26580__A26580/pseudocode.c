void __cdecl sub_A26580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B162C4); /*0xa2658a*/
  if ( off_B162C8 ) /*0xa26596*/
  {
    if ( *off_B162C8 == 0x53 ) /*0xa2659b*/
      FormHeapFree((unsigned int)off_B162C8); /*0xa2659e*/
  }
}
