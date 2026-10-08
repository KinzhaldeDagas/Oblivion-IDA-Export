void __cdecl sub_A26550()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B162BC); /*0xa2655a*/
  if ( off_B162C0 ) /*0xa26566*/
  {
    if ( *off_B162C0 == 0x53 ) /*0xa2656b*/
      FormHeapFree((unsigned int)off_B162C0); /*0xa2656e*/
  }
}
