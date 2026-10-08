void __cdecl sub_A24BF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&a33J); /*0xa24bfa*/
  if ( off_B14144 ) /*0xa24c06*/
  {
    if ( *off_B14144 == 0x53 ) /*0xa24c0b*/
      FormHeapFree((unsigned int)off_B14144); /*0xa24c0e*/
  }
}
