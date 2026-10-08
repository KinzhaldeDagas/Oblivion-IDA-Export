void __cdecl sub_A24A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B139A4); /*0xa24a1a*/
  if ( off_B139A8 ) /*0xa24a26*/
  {
    if ( *off_B139A8 == 0x53 ) /*0xa24a2b*/
      FormHeapFree((unsigned int)off_B139A8); /*0xa24a2e*/
  }
}
