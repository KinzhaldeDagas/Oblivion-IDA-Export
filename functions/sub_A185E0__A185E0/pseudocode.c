void __cdecl sub_A185E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06540); /*0xa185ea*/
  if ( off_B06544 ) /*0xa185f6*/
  {
    if ( *off_B06544 == 0x53 ) /*0xa185fb*/
      FormHeapFree((unsigned int)off_B06544); /*0xa185fe*/
  }
}
