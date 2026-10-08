// Verified: clears previous timer with same index, allocates 0x14-byte node, assigns opaque index and duration, appends to InterfaceManager timer list at +0x130. Shared by menus and Tile animation objects; not menu-specific. Fallout named analogue 0x824EDBA0.
void __cdecl InterfaceManager::NewTimer(void *index, float duration)
{
  int v2; // eax
  double v3; // st7
  int v4; // ecx
  double v5; // st6
  float indexa; // [esp+8h] [ebp+4h]

  InterfaceManager::ClearTimer(index); /*0x584306*/
  v2 = FormHeapAlloc(0x14u); /*0x58430d*/
  v3 = 0.0; /*0x584312*/
  v4 = 0; /*0x584314*/
  if ( v2 ) /*0x58431b*/
  {
    *(float *)(v2 + 4) = 0.0; /*0x58431d*/
    *(_DWORD *)(v2 + 0xC) = 0; /*0x584320*/
    v5 = flt_A37080; /*0x584323*/
    *(_DWORD *)(v2 + 0x10) = 0; /*0x584329*/
    *(_DWORD *)v2 = 0; /*0x58432c*/
    *(float *)(v2 + 8) = v5; /*0x58432e*/
    v4 = v2; /*0x584331*/
  }
  *(_DWORD *)v4 = index; /*0x584337*/
  if ( duration > 0.0 ) /*0x584341*/
    v3 = duration; /*0x584343*/
  indexa = v3; /*0x584349*/
  *(float *)(v4 + 8) = indexa; /*0x584351*/
  *(_DWORD *)(v4 + 0xC) = *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0xC); /*0x584362*/
  *(_DWORD *)(*(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0xC) + 0x10) = v4; /*0x584374*/
  *(_DWORD *)(MEMORY[0xB3A6E0]->unk0C0[0x1C] + 0xC) = v4; /*0x584382*/
}
