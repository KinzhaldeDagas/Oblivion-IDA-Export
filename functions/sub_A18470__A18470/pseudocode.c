void __cdecl sub_A18470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B05BC4); /*0xa1847a*/
  if ( off_B05BC8[0] ) /*0xa18486*/
  {
    if ( *off_B05BC8[0] == 0x53 ) /*0xa1848b*/
      FormHeapFree((unsigned int)off_B05BC8[0]); /*0xa1848e*/
  }
}
