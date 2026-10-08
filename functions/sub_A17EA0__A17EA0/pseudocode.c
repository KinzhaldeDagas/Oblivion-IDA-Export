void __cdecl sub_A17EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBipedWhenKeyframed); /*0xa17eaa*/
  if ( off_B05220 ) /*0xa17eb6*/
  {
    if ( *off_B05220 == 0x53 ) /*0xa17ebb*/
      FormHeapFree((unsigned int)off_B05220); /*0xa17ebe*/
  }
}
