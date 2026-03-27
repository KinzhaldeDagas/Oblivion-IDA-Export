void __cdecl sub_A185B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06538);
  if ( off_B0653C )
  {
    if ( *off_B0653C == 0x53 )
      FormHeapFree((unsigned int)off_B0653C);
  }
}
