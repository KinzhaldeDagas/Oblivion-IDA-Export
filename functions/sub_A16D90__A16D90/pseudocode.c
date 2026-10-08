void __cdecl sub_A16D90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DA8); /*0xa16d9a*/
  if ( off_B02DAC ) /*0xa16da6*/
  {
    if ( *off_B02DAC == 0x53 ) /*0xa16dab*/
      FormHeapFree((unsigned int)off_B02DAC); /*0xa16dae*/
  }
}
