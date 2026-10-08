void __cdecl sub_A23720()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&OB_INI_fTreeForceLeafDimming_SpeedTree_010201A0); /*0xa2372a*/
  if ( off_B1261C ) /*0xa23736*/
  {
    if ( *off_B1261C == 0x53 ) /*0xa2373b*/
      FormHeapFree((unsigned int)off_B1261C); /*0xa2373e*/
  }
}
