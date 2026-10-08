void __cdecl sub_A167C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CB0); /*0xa167ca*/
  if ( off_B02CB4 ) /*0xa167d6*/
  {
    if ( *off_B02CB4 == 0x53 ) /*0xa167db*/
      FormHeapFree((unsigned int)off_B02CB4); /*0xa167de*/
  }
}
