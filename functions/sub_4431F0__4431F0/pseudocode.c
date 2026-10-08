void __userpurge sub_4431F0(TES *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESWorldSpace *a5)
{
  int v7; // edi
  char v8; // al
  OblivionTESFormListNode *p_worldspaceList; // esi
  TESWorldSpaceTerrainLODQuadMap *RootTerrainLODQuadMap; // eax
  NiTMap_TESCELL *v11; // eax

  if ( a5 ) /*0x4431fa*/
  {
    if ( a1->currentWorldSpace != a5 ) /*0x443203*/
    {
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x44320b*/
      if ( bPreemptivelyUnloadCells ) /*0x443213*/
      {
        if ( a1->currentInteriorCell ) /*0x44321c*/
          sub_4425D0(a1); /*0x443224*/
        v7 = sub_43FFF0(a1, a2, a3, a4, 1, a1->currentWorldSpace); /*0x44323b*/
        if ( !a1->currentInteriorCell ) /*0x443237*/
          v7 += sub_43FE30(a1, a2, a3, a4, 1); /*0x443248*/
        v8 = sub_4C9300(); /*0x44324a*/
        if ( v7 || v8 ) /*0x443256*/
          sub_43FC20(a1, 0); /*0x44325c*/
      }
      MEMORY[0xB33398]->unk18 = 0; /*0x443267*/
      a1->currentWorldSpace = a5; /*0x443270*/
      sub_4425D0(a1); /*0x443273*/
      a1->extXCoord = 0x7FFFFFFF; /*0x44327d*/
      a1->extYCoord = 0x7FFFFFFF; /*0x443280*/
      a1->unk28 = 0x7FFFFFFF; /*0x443283*/
      a1->unk2C = 0x7FFFFFFF; /*0x443286*/
      a1->unk48 = 0x7FFFFFFF; /*0x443289*/
      a1->unk4C = 0x7FFFFFFF; /*0x44328c*/
      p_worldspaceList = &g_TESDataHandler->worldspaceList; /*0x443295*/
      if ( g_TESDataHandler != (TESDataHandler *)0xFFFFFFF4 ) /*0x443298*/
      {
        do /*0x4432df*/
        {
          if ( TESWorldSpace_GetRootTerrainLODQuadMap((TESWorldSpace *)p_worldspaceList->item) /*0x4432ad*/
            && (TESWorldSpace *)p_worldspaceList->item == a5 )
          {
            RootTerrainLODQuadMap = TESWorldSpace_GetRootTerrainLODQuadMap((TESWorldSpace *)p_worldspaceList->item); /*0x4432af*/
            TESWorldSpaceTerrainLODQuadMap_Initialize(RootTerrainLODQuadMap); /*0x4432b6*/
          }
          else if ( TESWorldSpace_GetRootTerrainLODQuadMap((TESWorldSpace *)p_worldspaceList->item) ) /*0x4432bf*/
          {
            if ( (TESWorldSpace *)p_worldspaceList->item != a5 ) /*0x4432cc*/
            {
              v11 = (NiTMap_TESCELL *)TESWorldSpace_GetRootTerrainLODQuadMap((TESWorldSpace *)p_worldspaceList->item); /*0x4432ce*/
              sub_4EA570(v11); /*0x4432d5*/
            }
          }
          p_worldspaceList = p_worldspaceList->next; /*0x4432da*/
        }
        while ( p_worldspaceList ); /*0x4432df*/
      }
      sub_57A0D0(a2, a3, a4); /*0x4432e1*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4432e8*/
    }
  }
}
