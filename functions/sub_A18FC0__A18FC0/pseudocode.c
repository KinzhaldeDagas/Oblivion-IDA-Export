void __cdecl sub_A18FC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06D1C); /*0xa18fca*/
  if ( off_B06D20 ) /*0xa18fd6*/
  {
    if ( *off_B06D20 == 0x53 ) /*0xa18fdb*/
      FormHeapFree((unsigned int)off_B06D20); /*0xa18fde*/
  }
}
