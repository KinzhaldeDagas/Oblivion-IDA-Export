void __cdecl sub_A16D90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DA8);
  if ( off_B02DAC )
  {
    if ( *off_B02DAC == 0x53 )
      FormHeapFree((unsigned int)off_B02DAC);
  }
}
