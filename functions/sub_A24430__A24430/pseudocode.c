void __cdecl sub_A24430()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13210); /*0xa2443a*/
  if ( off_B13214 ) /*0xa24446*/
  {
    if ( *off_B13214 == 0x53 ) /*0xa2444b*/
      FormHeapFree((unsigned int)off_B13214); /*0xa2444e*/
  }
}
