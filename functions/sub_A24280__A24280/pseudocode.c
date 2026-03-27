void __cdecl sub_A24280()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&rDebugTextColor_Menu);
  if ( off_B12DB0 )
  {
    if ( *off_B12DB0 == 0x53 )
      FormHeapFree((unsigned int)off_B12DB0);
  }
}
