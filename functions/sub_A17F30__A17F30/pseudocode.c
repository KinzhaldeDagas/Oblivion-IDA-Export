void __cdecl sub_A17F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B05234); /*0xa17f3a*/
  if ( off_B05238 ) /*0xa17f46*/
  {
    if ( *off_B05238 == 0x53 ) /*0xa17f4b*/
      FormHeapFree((unsigned int)off_B05238); /*0xa17f4e*/
  }
}
