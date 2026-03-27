void __cdecl sub_A191D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D74);
  if ( off_B06D78 )
  {
    if ( *off_B06D78 == 0x53 )
      FormHeapFree((unsigned int)off_B06D78);
  }
}
