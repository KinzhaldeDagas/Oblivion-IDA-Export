void __cdecl sub_A254F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14B94); /*0xa254fa*/
  if ( off_B14B98 ) /*0xa25506*/
  {
    if ( *off_B14B98 == 0x53 ) /*0xa2550b*/
      FormHeapFree((unsigned int)off_B14B98); /*0xa2550e*/
  }
}
