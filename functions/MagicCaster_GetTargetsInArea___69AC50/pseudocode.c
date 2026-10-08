void __thiscall MagicCaster_GetTargetsInArea_(char *this, char *a2, int a3, float pointXYZ, __int64 a5, _DWORD *a6)
{
  int Area; // ebx
  char *v7; // esi
  _DWORD *v8; // edi
  int v9; // esi
  _BYTE *v10; // eax
  int v11; // eax
  Actor *ListHead; // eax
  Actor *v13; // eax
  TESObjectREFR *vtbl; // esi
  bool v15; // bl
  TESChildCELL *v16; // ebp
  NiPoint3 v17; // [esp-10h] [ebp-30h]
  NiPoint3 v18; // [esp-10h] [ebp-30h]
  PlayerCharacter *v19; // [esp+10h] [ebp-10h]
  float v21; // [esp+18h] [ebp-8h]
  int v22; // [esp+1Ch] [ebp-4h]
  char v23; // [esp+24h] [ebp+4h]
  Actor *v24; // [esp+28h] [ebp+8h]

  if ( a6 ) /*0x69ac60*/
  {
    Area = 0; /*0x69ac6a*/
    if ( a2 ) /*0x69ac6e*/
    {
      v7 = a2 + 0xC; /*0x69ac74*/
      if ( a2 != (char *)0xFFFFFFF4 ) /*0x69ac79*/
      {
        do /*0x69acba*/
        {
          if ( !*((_DWORD *)v7 + 2) && !*((_DWORD *)v7 + 1) ) /*0x69ac86*/
            break; /*0x69ac8a*/
          v8 = *((_DWORD **)v7 + 1); /*0x69ac8c*/
          if ( v8 ) /*0x69ac91*/
          {
            if ( v8[4] == a3 && EffectItem_GetArea(*((_DWORD **)v7 + 1)) > Area ) /*0x69aca5*/
              Area = EffectItem_GetArea(v8); /*0x69acae*/
          }
          v9 = *((_DWORD *)v7 + 2); /*0x69acb0*/
          if ( !v9 ) /*0x69acb5*/
            break; /*0x69acb5*/
          v7 = (char *)(v9 - 4); /*0x69acb7*/
        }
        while ( v7 ); /*0x69acba*/
        if ( Area ) /*0x69acc2*/
        {
          v10 = OblivionDynamicCast( /*0x69acd7*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                  &SpellItem `RTTI Type Descriptor',
                  0);
          if ( !v10 || (v23 = 1, (v10[0x40] & 0x10) == 0) ) /*0x69acec*/
            v23 = 0; /*0x69acee*/
          v21 = (double)Area * MEMORY[0xB37DB8][0]; /*0x69ad08*/
          v11 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x20))(this); /*0x69ad0c*/
          if ( v11 && (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v11 + 0x190))(v11) ) /*0x69ad1c*/
            v19 = (PlayerCharacter *)(this + 0xFFFFFFA4); /*0x69ad25*/
          else
            v19 = 0; /*0x69ad2b*/
          ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x69ad3a*/
          v13 = ActorList_ReturnHead((ActorList *)ListHead); /*0x69ad41*/
          v24 = v13; /*0x69ad48*/
          if ( v13 ) /*0x69ad4c*/
          {
            while ( 1 ) /*0x69ad58*/
            {
              vtbl = (TESObjectREFR *)v13->vtbl; /*0x69ad58*/
              if ( !v13->vtbl ) /*0x69ad58*/
                break; /*0x69ad58*/
              v22 = (int)vtbl->vtbl->GetMagicTarget(vtbl); /*0x69ad7f*/
              v15 = 0; /*0x69ad83*/
              v16 = (TESChildCELL *)OblivionDynamicCast( /*0x69ad8a*/
                                      vtbl,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                                      &Actor `RTTI Type Descriptor',
                                      0);
              if ( v19 ) /*0x69ad95*/
                v15 = v16 == (TESChildCELL *)v19; /*0x69ad99*/
              if ( v22 ) /*0x69ada1*/
              {
                if ( !v15 ) /*0x69ada5*/
                {
                  if ( vtbl->vtbl->GetNiNode(vtbl) ) /*0x69adb1*/
                  {
                    if ( (double)v21 >= TESObjectREFR::GetDistanceToPoint(vtbl, &pointXYZ) /*0x69add6*/
                      && (!v16 || !Actor_IsGhost((Actor *)v16)) )
                    {                           // Area magic target check calls 0x69A490 unless spell ignores obstruction; source point is area origin and target is actor midpoint. Confirms helper is an unobstructed movement-layer ray, not a climb-specific rule.
                      if ( v23 /*0x69ae04*/
                        || (v17.x = pointXYZ,
                            *(_QWORD *)&v17.y = a5,
                            MagicCaster_IsRayClearToActorMidpoint_Layer1C(v17, v16)) )
                      {
                        BSSimpleList_PushFront(a6, (int)v16); /*0x69ae12*/
                      }
                    }
                  }
                }
              }
              v24 = *(Actor **)&v24->members.super.super.super.type; /*0x69ae86*/
              if ( !v24 ) /*0x69ae8a*/
                break; /*0x69ae8a*/
              v13 = v24; /*0x69ad54*/
            }
          }
          if ( reference != v19 ) /*0x69ae9a*/
          {
            if ( reference->vtbl->super.super.super.GetNiNode(reference) ) /*0x69aea8*/
            {
              if ( (double)v21 >= TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)reference, &pointXYZ) /*0x69aed1*/
                && !Actor_IsGhost((Actor *)reference) )
              {                                 // Player variant of area magic target obstruction check; same 0x69A490 clear-ray helper on layer 0x1C.
                if ( v23 /*0x69af04*/
                  || (v18.x = pointXYZ,
                      *(_QWORD *)&v18.y = a5,
                      MagicCaster_IsRayClearToActorMidpoint_Layer1C(v18, (TESChildCELL *)reference)) )
                {
                  BSSimpleList_PushFront(a6, (int)reference); /*0x69af18*/
                }
              }
            }
          }
        }
      }
    }
  }
}
