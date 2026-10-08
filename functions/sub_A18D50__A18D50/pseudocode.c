void __cdecl sub_A18D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CB4); /*0xa18d5a*/
  if ( off_B06CB8 ) /*0xa18d66*/
  {
    if ( *off_B06CB8 == 0x53 ) /*0xa18d6b*/
      FormHeapFree((unsigned int)off_B06CB8); /*0xa18d6e*/
  }
}
