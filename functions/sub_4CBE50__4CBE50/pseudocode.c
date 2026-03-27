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
  int *v18; // esi
  int v19; // edi
  int v20; // [esp-10h] [ebp-28h]
  int v21; // [esp+8h] [ebp-10h] BYREF
  int v22; // [esp+Ch] [ebp-Ch]
  _DWORD v23[2]; // [esp+10h] [ebp-8h] BYREF

  v5 = a1;
  v6 = 0;
  v22 = (int)a1;
  if ( a5 )
  {
    NiTMap_SetAt(a5, (int)a1, 1);
    flags0 = v5->members.flags0;
    if ( (flags0 & 1) != 0 )
    {
      if ( (flags0 & 8) == 0 )
        return;
      goto LABEL_7;
    }
    worldSpace = v5->members.worldSpace;
    if ( worldSpace && sub_4EF150(worldSpace) )
    {
LABEL_7:
      if ( (v5->members.flags0 & 1) != 0 )
      {
        if ( TESObjectCELL_IsProcessLevel_LowHigh(v5, 0) )
          sub_440120(TES, a2, a3, a4, v5);
        if ( (v5->members.flags0 & 1) != 0 )
          sub_459F30((NiTMap_TESCELL **)SaveLoad_CurrentSavegame, v5);
      }
      sub_496EA0((char *)&stru_B35C80, v5);
      p_objectList = &v5->members.objectList;
      v10 = 0;
      v23[0] = 0;
      v23[1] = 0;
      if ( v5 != (TESObjectCELL *)0xFFFFFFB8 )
      {
        do
        {
          if ( !p_objectList->next && !p_objectList->refr )
            break;
          refr = (TESForm *)p_objectList->refr;
          if ( p_objectList->refr->vtbl->GetBaseForm(p_objectList->refr)->member.type == kFormType_Door )
          {
            TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(refr);
            if ( TeleportExtraData )
            {
              v13 = sub_42B460(TeleportExtraData);
              if ( v13 )
              {
                if ( (v13->members.flags0 & 1) != 0 )
                  BSSimpleList_PushFront(v23, (int)v13);
              }
              v14 = (void *)((int (__thiscall *)(TESForm *))refr->vtbl[1].SetQuestItem)(refr);
              v15 = OblivionDynamicCast(
                      v14,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectDOOR `RTTI Type Descriptor',
                      0);
              if ( v15 )
              {
                if ( sub_4B78E0(v15) )
                  RemoveExtraTeleportFromDoorRef(refr);
              }
            }
          }
          if ( v6 )
          {
            v16 = (TESForm **)FormHeapAlloc(8u);
            if ( v16 )
            {
              *v16 = v6;
              v16[1] = 0;
            }
            else
            {
              v16 = 0;
            }
            v16[1] = (TESForm *)v10;
            v10 = v16;
          }
          p_objectList = p_objectList->next;
          v6 = refr;
          v5 = (TESObjectCELL *)v22;
        }
        while ( p_objectList );
      }
      sub_496F50(&stru_B35C80, v5);
      while ( v10 || v6 )
      {
        TESSaveLoadGame_ResetObject((int)SaveLoad_CurrentSavegame, a2, a3, a4, v6, 0xFFFFFFFF, 0);
        a4 = ((double (__thiscall *)(TESForm *))v6->vtbl->DoPostFixup)(v6);
        sub_45C020((int)SaveLoad_CurrentSavegame, a2, a3, a4, v6, 0xFFFFFFFF, 0);
        sub_45B780((TESForm *)SaveLoad_CurrentSavegame, (int)v6, 1);
        if ( v10 )
        {
          v17 = v10;
          v10 = (TESForm **)v10[1];
          v6 = *v17;
          FormHeapFree((unsigned int)v17);
        }
        else
        {
          v6 = 0;
        }
      }
      v18 = v23;
      do
      {
        if ( !v18[1] && !*v18 )
          break;
        v19 = *v18;
        v20 = *v18;
        HIBYTE(v21) = 0;
        if ( !sub_4D6760(a5, v20, (_BYTE *)&v21 + 3) || !HIBYTE(v21) )
          sub_4CBE50(v19, a2, a3, a4, a5);
        v18 = (int *)v18[1];
      }
      while ( v18 );
      BSSimpleList_Clear(v23);
    }
  }
}
