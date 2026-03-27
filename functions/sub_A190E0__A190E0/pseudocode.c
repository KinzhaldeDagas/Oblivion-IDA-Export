void __cdecl sub_A190E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D4C);
  if ( off_B06D50 )
  {
    if ( *off_B06D50 == 0x53 )
      FormHeapFree((unsigned int)off_B06D50);
  }
}
