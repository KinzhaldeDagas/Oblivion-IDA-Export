void __cdecl sub_A181B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05584); /*0xa181ba*/
  if ( off_B05588 ) /*0xa181c6*/
  {
    if ( *off_B05588 == 0x53 ) /*0xa181cb*/
      FormHeapFree((unsigned int)off_B05588); /*0xa181ce*/
  }
}
