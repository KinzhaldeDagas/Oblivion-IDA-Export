void __userpurge sub_5DD3E0(
        int a1@<ebx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void *v9; // esi
  float *ContainerChanges; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x404);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      v9 = OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &TrainingMenu `RTTI Type Descriptor',
             0);
      if ( v9 )
      {
        if ( a6 == 6 )
        {
          if ( *((_DWORD *)v9 + 0x17) > sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) )
          {
            ShowUIMessageBox(
              (char *)sNotEnoughGold,
              a2,
              a3,
              a4,
              a5,
              (const char *)sNotEnoughGold,
              0,
              1,
              (const char *)sOk,
              0);
          }
          else
          {
            sub_66A3D0((int)TESDataHandler_g_PlayerRef, a1, a3, a4, a5, *((float **)v9 + 0x16));
            ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
            sub_491700(
              ContainerChanges,
              a3,
              a4,
              a5,
              (TESObjectREFR *)TESDataHandler_g_PlayerRef,
              *((_DWORD *)v9 + 0x17),
              0);
            sub_5DD340(a3, a4);
          }
        }
        else if ( a6 == 7 )
        {
          sub_57DE50(2);
          sub_5DD340(a3, a4);
        }
      }
    }
  }
}
