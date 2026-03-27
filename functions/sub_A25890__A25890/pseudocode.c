void __cdecl sub_A25890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bHealthBarShowing_Gameplay);
  if ( off_B14E94 )
  {
    if ( *off_B14E94 == 0x53 )
      FormHeapFree((unsigned int)off_B14E94);
  }
}
