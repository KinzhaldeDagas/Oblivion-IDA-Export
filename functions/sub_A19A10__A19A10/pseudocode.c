void __cdecl sub_A19A10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06ED4);
  if ( off_B06ED8 )
  {
    if ( *off_B06ED8 == 0x53 )
      FormHeapFree((unsigned int)off_B06ED8);
  }
}
