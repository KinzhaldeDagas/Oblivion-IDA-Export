void __usercall sub_5D1FC0(int a1@<ebx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // esi
  int *ContainerChanges; // edi
  double v8; // st7
  float a2; // [esp+0h] [ebp-10h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x40B);
  if ( OpenMenuTile )
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( sub_578D70() == 1 )
      {
        ContainerChanges = (int *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
        sub_48F390(ContainerChanges);
        sub_491700(
          (float *)ContainerChanges,
          st5_0,
          a3,
          a4,
          (TESObjectREFR *)TESDataHandler_g_PlayerRef,
          dword_B3B714,
          0);
        v8 = (double)sub_5E4420((Actor *)TESDataHandler_g_PlayerRef);
        a2 = v8;
        Tile_SetFloat(*(Tile **)(ParentMenu + 0x34), (_DWORD *)0xFAE, a2);
        TESDataHandler_g_PlayerRef->vtbl->super.Unk_B0((Actor *)TESDataHandler_g_PlayerRef);
        sub_5D0B80();
        sub_5D1080(ParentMenu, a1, v8, st5_0, a3, 1);
      }
      *(_BYTE *)(ParentMenu + 0x64) = 0;
    }
  }
}
