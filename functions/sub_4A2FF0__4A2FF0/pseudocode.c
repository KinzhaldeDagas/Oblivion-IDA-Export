int sub_4A2FF0()
{
  int v0; // ecx
  OblivionRegionListNode *p_regions; // eax

  v0 = 0; /*0x4a2ffb*/
  p_regions = &g_TESDataHandler->regionListOwner->regions; /*0x4a2ffd*/
  if ( g_TESDataHandler->regionListOwner != (TESRegionList *)0xFFFFFFFC ) /*0x4a3000*/
  {
    do /*0x4a300f*/
    {
      if ( p_regions->regionForm ) /*0x4a3002*/
        ++v0; /*0x4a3007*/
      p_regions = p_regions->next; /*0x4a300a*/
    }
    while ( p_regions ); /*0x4a300f*/
  }
  return 8 * v0 + 2; /*0x4a3018*/
}
