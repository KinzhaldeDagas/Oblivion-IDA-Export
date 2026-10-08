void __cdecl sub_A1D4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B11E34); /*0xa1d4ba*/
  if ( off_B11E38 ) /*0xa1d4c6*/
  {
    if ( *off_B11E38 == 0x53 ) /*0xa1d4cb*/
      FormHeapFree((unsigned int)off_B11E38); /*0xa1d4ce*/
  }
}
