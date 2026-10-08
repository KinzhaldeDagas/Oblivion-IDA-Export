void __cdecl sub_A23310()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useFaceGenHeads); /*0xa2331a*/
  if ( off_B120B8 ) /*0xa23326*/
  {
    if ( *off_B120B8 == 0x53 ) /*0xa2332b*/
      FormHeapFree((unsigned int)off_B120B8); /*0xa2332e*/
  }
}
