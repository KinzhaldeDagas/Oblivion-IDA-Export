void __cdecl sub_A16C70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_fLocalTreeMipMapLODBias_SpeedTree_010201A0); /*0xa16c7a*/
  if ( off_B02D7C ) /*0xa16c86*/
  {
    if ( *off_B02D7C == 0x53 ) /*0xa16c8b*/
      FormHeapFree((unsigned int)off_B02D7C); /*0xa16c8e*/
  }
}
