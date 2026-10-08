// Verified: searches timer by owner/index; missing timer returns 1; positive duration returns elapsed/duration clamped to [0,1]. Consumed by menu fade processing and Tile animation.
float __cdecl InterfaceManager::GetTimerPercent(void *index)
{
  int v1; // ecx
  double v3; // st7

  v1 = *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0x10); /*0x583d5c*/
  if ( v1 ) /*0x583d61*/
  {
    while ( index != *(void **)v1 ) /*0x583d69*/
    {
      v1 = *(_DWORD *)(v1 + 0x10); /*0x583d6b*/
      if ( !v1 ) /*0x583d70*/
        return 1.0; /*0x583d70*/
    }
    if ( *(float *)(v1 + 8) <= 0.0 ) /*0x583d80*/
      return kTerrainLODQuadRayDirectionZ; /*0x583dc3*/
    v3 = *(float *)(v1 + 4) / *(float *)(v1 + 8); /*0x583d85*/
    if ( v3 <= 1.0 && v3 < 0.0 ) /*0x583da0*/
      return 0.0; /*0x583da2*/
    if ( v3 > 1.0 ) /*0x583db7*/
      return 1.0; /*0x583dc2*/
    return v3; /*0x583da9*/
  }
  else
  {
    return 1.0; /*0x583d72*/
  }
}
