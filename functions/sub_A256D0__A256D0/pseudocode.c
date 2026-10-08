void __cdecl sub_A256D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B14CC4); /*0xa256da*/
  if ( off_B14CC8 ) /*0xa256e6*/
  {
    if ( *off_B14CC8 == 0x53 ) /*0xa256eb*/
      FormHeapFree((unsigned int)off_B14CC8); /*0xa256ee*/
  }
}
