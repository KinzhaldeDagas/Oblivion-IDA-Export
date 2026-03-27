void __cdecl sub_A1B5A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08188);
  if ( off_B0818C )
  {
    if ( *off_B0818C == 0x53 )
      FormHeapFree((unsigned int)off_B0818C);
  }
}
