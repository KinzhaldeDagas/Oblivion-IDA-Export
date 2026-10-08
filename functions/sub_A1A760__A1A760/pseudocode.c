void __cdecl sub_A1A760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B075F4); /*0xa1a76a*/
  if ( off_B075F8 ) /*0xa1a776*/
  {
    if ( *off_B075F8 == 0x53 ) /*0xa1a77b*/
      FormHeapFree((unsigned int)off_B075F8); /*0xa1a77e*/
  }
}
