void __cdecl sub_A255B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14BB4); /*0xa255ba*/
  if ( off_B14BB8 ) /*0xa255c6*/
  {
    if ( *off_B14BB8 == 0x53 ) /*0xa255cb*/
      FormHeapFree((unsigned int)off_B14BB8); /*0xa255ce*/
  }
}
