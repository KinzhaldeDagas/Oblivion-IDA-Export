void __cdecl sub_A1C580()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B114A4);
  if ( off_B114A8[0] )
  {
    if ( *off_B114A8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B114A8[0]);
  }
}
