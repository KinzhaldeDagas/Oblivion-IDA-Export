void __cdecl sub_A254B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14974); /*0xa254ba*/
  if ( off_B14978[0] ) /*0xa254c6*/
  {
    if ( *off_B14978[0] == 0x53 ) /*0xa254cb*/
      FormHeapFree((unsigned int)off_B14978[0]); /*0xa254ce*/
  }
}
