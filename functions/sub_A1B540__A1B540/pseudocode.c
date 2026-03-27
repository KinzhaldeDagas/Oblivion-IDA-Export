void __cdecl sub_A1B540()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08178);
  if ( off_B0817C )
  {
    if ( *off_B0817C == 0x53 )
      FormHeapFree((unsigned int)off_B0817C);
  }
}
