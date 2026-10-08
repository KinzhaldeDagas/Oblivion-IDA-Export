void __cdecl sub_A24490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13220); /*0xa2449a*/
  if ( off_B13224 ) /*0xa244a6*/
  {
    if ( *off_B13224 == 0x53 ) /*0xa244ab*/
      FormHeapFree((unsigned int)off_B13224); /*0xa244ae*/
  }
}
