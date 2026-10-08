void __cdecl sub_A25890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bHealthBarShowing_Gameplay); /*0xa2589a*/
  if ( off_B14E94 ) /*0xa258a6*/
  {
    if ( *off_B14E94 == 0x53 ) /*0xa258ab*/
      FormHeapFree((unsigned int)off_B14E94); /*0xa258ae*/
  }
}
