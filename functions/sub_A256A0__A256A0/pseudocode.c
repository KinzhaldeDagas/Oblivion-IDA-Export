void __cdecl sub_A256A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CBC); /*0xa256aa*/
  if ( off_B14CC0 ) /*0xa256b6*/
  {
    if ( *off_B14CC0 == 0x53 ) /*0xa256bb*/
      FormHeapFree((unsigned int)off_B14CC0); /*0xa256be*/
  }
}
