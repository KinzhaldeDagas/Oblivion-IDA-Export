void __cdecl sub_A19200()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06D7C);
  if ( off_B06D80 )
  {
    if ( *off_B06D80 == 0x53 )
      FormHeapFree((unsigned int)off_B06D80);
  }
}
