void __cdecl sub_A27120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&iDistantLODGroupWidth_DistantLOD); /*0xa2712a*/
  if ( off_B2C360 ) /*0xa27136*/
  {
    if ( *off_B2C360 == 0x53 ) /*0xa2713b*/
      FormHeapFree((unsigned int)off_B2C360); /*0xa2713e*/
  }
}
