void __cdecl sub_A24EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&aSs_fJ); /*0xa24eaa*/
  if ( off_B14800 ) /*0xa24eb6*/
  {
    if ( *off_B14800 == 0x53 ) /*0xa24ebb*/
      FormHeapFree((unsigned int)off_B14800); /*0xa24ebe*/
  }
}
