void __cdecl sub_A172D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&g_DefaulFOV);
  if ( off_B03140 )
  {
    if ( *off_B03140 == 0x53 )
      FormHeapFree((unsigned int)off_B03140);
  }
}
