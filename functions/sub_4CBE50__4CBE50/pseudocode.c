// Verified cell object-list processing: door references with ExtraTeleport are checked for a nonempty TESObjectDOOR.randomTeleport list; if present, RemoveExtraTeleportFromDoorRef removes reciprocal low-path indexing before save/load reset/post-fixup. The nested gate has been verified as a randomTeleport-list nonempty check.
void __userpurge sub_4CBE50(TESObjectCELL *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, _DWORD *a5)
{
  TESObjectCELL *v5; // edi
  TESForm *v6; // esi
  UInt8 flags0; // al
  TESWorldSpace *worldSpace; // ecx
  ObjectListEntry *p_objectList; // ebx
  TESForm **v10; // ebp
  TESForm *refr; // edi
  TESObjectREFR **TeleportExtraData; // eax
  TESObjectCELL *v13; // eax
  void *v14; // eax
  _DWORD *v15; // eax
  TESForm **v16; // eax
  TESForm **v17; // eax
  TESObjectCELL **v18; // esi
  TESObjectCELL *v19; // edi
  int v20; // [esp-10h] [ebp-28h]
  int v21; // [esp+8h] [ebp-10h] BYREF
  TESObjectCELL *v22; // [esp+Ch] [ebp-Ch]
  _DWORD v23[2]; // [esp+10h] [ebp-8h] BYREF

  v5 = a1; /*0x4cbe55*/
  v6 = 0; /*0x4cbe5b*/
  v22 = a1; /*0x4cbe5f*/
  if ( a5 ) /*0x4cbe63*/
  {
    NiTMap_SetAt(a5, (int)a1, 1); /*0x4cbe6c*/
    flags0 = v5->members.flags0; /*0x4cbe71*/
    if ( (flags0 & 1) != 0 ) /*0x4cbe76*/
    {
      if ( (flags0 & 8) == 0 ) /*0x4cbe7a*/
        return; /*0x4cbe7a*/
      goto LABEL_7; /*0x4cbe7a*/
    }
    worldSpace = v5->members.worldSpace; /*0x4cbe84*/
    if ( worldSpace && sub_4EF150(worldSpace) ) /*0x4cbe8f*/
    {
LABEL_7:
      if ( (v5->members.flags0 & 1) != 0 ) /*0x4cbea0*/
      {
        if ( TESObjectCELL_IsProcessLevel_LowHigh(v5, 0) ) /*0x4cbeaa*/
          sub_440120(MEMORY[0xB333A0], a2, a3, a4, v5); /*0x4cbeba*/
        if ( (v5->members.flags0 & 1) != 0 ) /*0x4cbec3*/
          sub_459F30((NiTMap_TESCELL **)g_TESSaveLoadGame, v5); /*0x4cbecc*/
      }
      sub_496EA0((char *)&unk_B35C80, v5); /*0x4cbed9*/
      p_objectList = &v5->members.objectList; /*0x4cbede*/
      v10 = 0; /*0x4cbee1*/
      v23[0] = 0; /*0x4cbee5*/
      v23[1] = 0; /*0x4cbee9*/
      if ( v5 != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4cbeed*/
      {
        do /*0x4cbfa6*/
        {
          if ( !p_objectList->next && !p_objectList->refr ) /*0x4cbef9*/
            break; /*0x4cbefc*/
          refr = (TESForm *)p_objectList->refr; /*0x4cbf02*/
          if ( p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_Door ) /*0x4cbf14*/
          {
            TeleportExtraData = (TESObjectREFR **)TESObjectREFR_GetTeleportData(refr); /*0x4cbf18*/
            if ( TeleportExtraData ) /*0x4cbf1f*/
            {
              v13 = sub_42B460(TeleportExtraData); /*0x4cbf23*/
              if ( v13 ) /*0x4cbf2a*/
              {
                if ( (v13->members.flags0 & 1) != 0 ) /*0x4cbf30*/
                  BSSimpleList_PushFront(v23, (int)v13); /*0x4cbf37*/
              }
              v14 = (void *)((int (__thiscall *)(TESForm *))refr->vtbl[1].SetQuestItem)(refr); /*0x4cbf54*/
              v15 = OblivionDynamicCast( /*0x4cbf57*/
                      v14,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectDOOR `RTTI Type Descriptor',
                      0);
              if ( v15 ) /*0x4cbf61*/
              {
                if ( TESObjectDOOR_HasRandomTeleportSpaces(v15) ) /*0x4cbf65*/
                  RemoveExtraTeleportFromDoorRef(refr); /*0x4cbf6f*/
              }
            }
          }
          if ( v6 ) /*0x4cbf79*/
          {
            v16 = (TESForm **)FormHeapAlloc(8u); /*0x4cbf7d*/
            if ( v16 ) /*0x4cbf87*/
            {
              *v16 = v6; /*0x4cbf89*/
              v16[1] = 0; /*0x4cbf8b*/
            }
            else
            {
              v16 = 0; /*0x4cbf94*/
            }
            v16[1] = (TESForm *)v10; /*0x4cbf96*/
            v10 = v16; /*0x4cbf99*/
          }
          p_objectList = p_objectList->next; /*0x4cbf9b*/
          v6 = refr; /*0x4cbfa0*/
          v5 = v22; /*0x4cbfa2*/
        }
        while ( p_objectList ); /*0x4cbfa6*/
      }
      sub_496F50(&unk_B35C80, v5); /*0x4cbfb2*/
      while ( v10 || v6 ) /*0x4cbfbd*/
      {
        TESSaveLoadGame_ResetObject(g_TESSaveLoadGame, a2, a3, a4, v6, 0xFFFFFFFF, 0); /*0x4cbfca*/
        v6->vtbl->DoPostFixup(v6); /*0x4cbfd6*/
        sub_45C020((int)g_TESSaveLoadGame, v6, 0xFFFFFFFF, 0); /*0x4cbfe3*/
        sub_45B780((TESForm *)g_TESSaveLoadGame, (int)v6, 1); /*0x4cbff1*/
        if ( v10 ) /*0x4cbff8*/
        {
          v17 = v10; /*0x4cbffa*/
          v10 = (TESForm **)v10[1]; /*0x4cbffc*/
          v6 = *v17; /*0x4cbfff*/
          FormHeapFree((unsigned int)v17); /*0x4cc002*/
        }
        else
        {
          v6 = 0; /*0x4cc00c*/
        }
      }
      v18 = (TESObjectCELL **)v23; /*0x4cc010*/
      do /*0x4cc04f*/
      {
        if ( !v18[1] && !*v18 ) /*0x4cc01a*/
          break; /*0x4cc01d*/
        v19 = *v18; /*0x4cc01f*/
        v20 = (int)*v18; /*0x4cc02a*/
        HIBYTE(v21) = 0; /*0x4cc02d*/
        if ( !sub_4D6760(a5, v20, (_BYTE *)&v21 + 3) || !HIBYTE(v21) ) /*0x4cc040*/
          sub_4CBE50(v19, a2, a3, a4, a5); /*0x4cc045*/
        v18 = (TESObjectCELL **)v18[1]; /*0x4cc04a*/
      }
      while ( v18 ); /*0x4cc04f*/
      BSSimpleList_Clear(v23); /*0x4cc055*/
    }
  }
}
