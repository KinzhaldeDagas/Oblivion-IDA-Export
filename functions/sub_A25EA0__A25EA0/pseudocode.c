void __cdecl sub_A25EA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bDebugSmoothing); /*0xa25eaa*/
  if ( off_B15820 ) /*0xa25eb6*/
  {
    if ( *off_B15820 == 0x53 ) /*0xa25ebb*/
      FormHeapFree((unsigned int)off_B15820); /*0xa25ebe*/
  }
}
