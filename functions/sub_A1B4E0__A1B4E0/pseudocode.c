void __cdecl sub_A1B4E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08168);
  if ( off_B0816C )
  {
    if ( *off_B0816C == 0x53 )
      FormHeapFree((unsigned int)off_B0816C);
  }
}
