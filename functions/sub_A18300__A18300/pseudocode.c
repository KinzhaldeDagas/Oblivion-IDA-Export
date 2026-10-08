void __cdecl sub_A18300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055BC); /*0xa1830a*/
  if ( off_B055C0 ) /*0xa18316*/
  {
    if ( *off_B055C0 == 0x53 ) /*0xa1831b*/
      FormHeapFree((unsigned int)off_B055C0); /*0xa1831e*/
  }
}
