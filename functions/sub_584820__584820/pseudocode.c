void __thiscall sub_584820(int this)
{
  NiObject *v2; // [esp-4h] [ebp-10h]

  if ( *(_DWORD *)(this + 0x24) == 2 ) /*0x584827*/
  {
    Tile_SetFloat(*(Tile **)(this + 4), 0xFA1u, fConstant_2); /*0x58483b*/
    v2 = *(NiObject **)(*(_DWORD *)(this + 4) + 0x24); /*0x584854*/
    InterfaceManager_GetSingleton(0, 1); /*0x584859*/
    sub_57EA20(v2, 1.0, 0.0); /*0x584863*/
    *(_DWORD *)(this + 0x24) = 1; /*0x584869*/
    InterfaceManager::ClearTimer((void *)this); /*0x584870*/
  }
}
