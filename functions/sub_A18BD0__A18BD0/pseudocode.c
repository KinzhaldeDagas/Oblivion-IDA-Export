void __cdecl sub_A18BD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_bFullScreen);
  if ( off_B06C78 )
  {
    if ( *off_B06C78 == 0x53 )
      FormHeapFree((unsigned int)off_B06C78);
  }
}
