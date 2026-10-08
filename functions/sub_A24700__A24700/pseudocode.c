void __cdecl sub_A24700()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B135C8); /*0xa2470a*/
  if ( off_B135CC ) /*0xa24716*/
  {
    if ( *off_B135CC == 0x53 ) /*0xa2471b*/
      FormHeapFree((unsigned int)off_B135CC); /*0xa2471e*/
  }
}
