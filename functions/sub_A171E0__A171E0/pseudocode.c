void __cdecl sub_A171E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B030C4); /*0xa171ea*/
  if ( off_B030C8[0] ) /*0xa171f6*/
  {
    if ( *off_B030C8[0] == 0x53 ) /*0xa171fb*/
      FormHeapFree((unsigned int)off_B030C8[0]); /*0xa171fe*/
  }
}
