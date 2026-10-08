void __cdecl sub_A262E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16254); /*0xa262ea*/
  if ( off_B16258 ) /*0xa262f6*/
  {
    if ( *off_B16258 == 0x53 ) /*0xa262fb*/
      FormHeapFree((unsigned int)off_B16258); /*0xa262fe*/
  }
}
