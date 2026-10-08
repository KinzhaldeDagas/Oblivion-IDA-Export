void __usercall sub_5D1FC0(double a1@<st2>, double st6_0@<st1>, double a3@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  int *ContainerChanges; // edi
  double v6; // st7
  float a2; // [esp+0h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40B); /*0x5d1fc6*/
  if ( OpenMenuTile ) /*0x5d1fd0*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5d1fde*/
    if ( ParentMenu ) /*0x5d1fe2*/
    {
      if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x5d1fef*/
      {
        ContainerChanges = (int *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5d2000*/
        sub_48F390(ContainerChanges); /*0x5d2004*/
        sub_491700((float *)ContainerChanges, a1, st6_0, a3, (TESObjectREFR *)reference, dword_B3B704[4], 0); /*0x5d201a*/
        v6 = (double)sub_5E4420((Actor *)reference); /*0x5d202e*/
        a2 = v6; /*0x5d2036*/
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x34), 0xFAEu, a2); /*0x5d203e*/
        reference->vtbl->super.Unk_B0((Actor *)reference); /*0x5d2051*/
        sub_5D0B80(); /*0x5d2055*/
        sub_5D1080(ParentMenu, v6, a1, st6_0, 1); /*0x5d205e*/
      }
      *(_BYTE *)(ParentMenu + 0x64) = 0; /*0x5d2064*/
    }
  }
}
