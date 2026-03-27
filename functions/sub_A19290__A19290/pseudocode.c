void __cdecl sub_A19290()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D94);
  if ( off_B06D98 )
  {
    if ( *off_B06D98 == 0x53 )
      FormHeapFree((unsigned int)off_B06D98);
  }
}
