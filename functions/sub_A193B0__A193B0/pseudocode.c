void __cdecl sub_A193B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06DC4); /*0xa193ba*/
  if ( off_B06DC8 ) /*0xa193c6*/
  {
    if ( *off_B06DC8 == 0x53 ) /*0xa193cb*/
      FormHeapFree((unsigned int)off_B06DC8); /*0xa193ce*/
  }
}
