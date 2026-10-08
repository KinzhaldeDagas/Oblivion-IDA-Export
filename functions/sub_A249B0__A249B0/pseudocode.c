void __cdecl sub_A249B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B13994); /*0xa249ba*/
  if ( off_B13998 ) /*0xa249c6*/
  {
    if ( *off_B13998 == 0x53 ) /*0xa249cb*/
      FormHeapFree((unsigned int)off_B13998); /*0xa249ce*/
  }
}
