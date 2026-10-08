// PlayGroup script command path. Actors use Actor_LoadAnimGroup_ + ActorAnimData_PlayAnimGroup; non-actors play a sequence directly from NiControllerManager.
char __usercall Cmd_PlayGroup@<al>(
        int ebp0@<ebp>,
        int a2@<esi>,
        ParamInfo *a1,
        UInt8 *a4,
        TESObjectREFR *a5,
        TESObjectREFR *a6,
        Script *a7,
        ScriptEventList *l,
        int a9,
        UInt32 *a3)
{
  char result; // al
  Actor *v11; // eax
  Actor *v12; // esi
  unsigned int v13; // eax
  ActorAnimData *v14; // eax
  ActorAnimData *v15; // eax
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  NiNode *v17; // eax
  NiNode *v18; // eax
  NiNode *v19; // ebx
  NiAVObject *ChildAtIndex; // eax
  NiObject *v21; // esi
  NiControllerSequence *SequenceByName; // ebp
  unsigned int v23; // ebx
  const char **v24; // ebp
  char *Name; // eax
  unsigned int easeInTime; // [esp+8h] [ebp-28h]
  char *easeInTimea; // [esp+8h] [ebp-28h]
  char *easeInTimeb; // [esp+8h] [ebp-28h]
  unsigned int v29; // [esp+Ch] [ebp-24h]
  UInt32 refID; // [esp+Ch] [ebp-24h]
  UInt32 v31; // [esp+Ch] [ebp-24h]
  UInt32 v32; // [esp+Ch] [ebp-24h]
  unsigned int groupID; // [esp+20h] [ebp-10h]
  UInt16 v34[2]; // [esp+24h] [ebp-Ch] BYREF
  float v35[2]; // [esp+28h] [ebp-8h] BYREF

  v35[0] = 0.0; /*0x5107d1*/
  result = Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v34, v35); /*0x5107d9*/
  if ( result )
  {
    if ( a5 )
    {
      ((void (__thiscall *)(TESObjectREFR *, int, int, int))a5->vtbl->super.MarkAsModified)(a5, 0x2000000, a2, ebp0); /*0x510800*/
      if ( a5->vtbl->GetAnimData(a5) && a5->vtbl->IsActor(a5) )
      {
        v11 = (Actor *)OblivionDynamicCast( /*0x510839*/
                         a5,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
        v29 = *(_DWORD *)v34; /*0x51084b*/
        v12 = v11; /*0x51084e*/
        LOWORD(v13) = Actor_LoadAnimGroup_(v11, groupID, 0, 0); /*0x510855*/
        easeInTime = v13; /*0x51085c*/
        v14 = a5->vtbl->GetAnimData(a5); /*0x510865*/
        ActorAnimData_PlayAnimGroup(v14, easeInTime, v29, 0xFFFFFFFF); /*0x510869*/
        if ( groupID ) /*0x510873*/
        {
          v15 = a5->vtbl->GetAnimData(a5); /*0x510881*/
          NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v15, 0); /*0x510885*/
          Actor_SetCurrentActionWithBowVisualCleanup(v12, (ActorCurrentAction)0xCu, NormalizedSequenceSlot); /*0x51088f*/
        }
        else if ( Actor_GetCurrentAction(v12) == 0xC ) /*0x5108a3*/
        {
          Actor_SetCurrentActionWithBowVisualCleanup(v12, kActorCurrentAction_None, 0); /*0x5108af*/
        }
      }
      else if ( groupID != 0xFF )
      {
        v17 = a5->vtbl->GetNiNode(a5); /*0x5108d2*/
        if ( v17
          && (v18 = (NiNode *)v17->vtbl->super.super.Unk_02((NiObject *)v17), (v19 = v18) != 0)
          && NiNode_GetChildAtIndex(v18, 0)
          && NiNode_GetChildAtIndex(v19, 0)->members.super.m_controller )
        {
          ChildAtIndex = NiNode_GetChildAtIndex(v19, 0); /*0x510917*/
          v21 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)ChildAtIndex->members.super.m_controller); /*0x51092a*/
          if ( v21
            || (v21 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)v19->members.super.super.m_controller)) != 0 )
          {
            SequenceByName = NiControllerManager_FindSequenceByName( /*0x510964*/
                               (NiControllerManager *)v21,
                               *(const char **)(0x24 * groupID + 0xB102E0));
            LODWORD(v35[0]) = SequenceByName; /*0x510968*/
            if ( SequenceByName )
            {
              v23 = 0; /*0x510972*/
              if ( HIWORD(v21[8].members.m_uiRefCount) ) /*0x510974*/
              {
                do /*0x5109b5*/
                {
                  v24 = *((const char ***)&v21[8].__vftable->super.Destructor + v23); /*0x510983*/
                  if ( CRT_StricmpLocaleDispatch(v24[2], *(const char **)animGroupInfos_ptr) ) /*0x510991*/
                    NiControllerSequence_Deactivate((NiControllerSequence *)v24, 0.0, 0); /*0x5109a7*/
                  ++v23; /*0x5109b0*/
                }
                while ( v23 < HIWORD(v21[8].members.m_uiRefCount) ); /*0x5109b5*/
                SequenceByName = (NiControllerSequence *)LODWORD(v35[0]); /*0x5109b7*/
              }
              if ( *(_DWORD *)v34 ) /*0x5109c4*/
              {
                v35[0] = (double)*(int *)v34 * dbl_A2FC80; /*0x5109d5*/
                NiControllerManager_BlendFromPose((int **)v21, SequenceByName, 0.0, v35[0], 0, 0); /*0x5109e7*/
              }
              else
              {
                BSAnimGroupSequence_Activate(SequenceByName, 0, 0, 1.0, 0.0, 0); /*0x510a01*/
              }
              *((float *)SequenceByName + 0x12) = -flt_A7DEB4; /*0x510a0e*/
              LOWORD(v21[1].__vftable) |= 8u; /*0x510a11*/
            }
            else
            {
              refID = a5->member.super.refID; /*0x510a1b*/
              Name = TESObjectREFR_GetName(a5); /*0x510a1e*/
              PrintError(
                "PlayGroup Error: Sequence '%s' not found for '%s' (%08X).",
                *(const char **)(0x24 * groupID + 0xB102E0),
                Name,
                refID);
            }
          }
          else
          {
            v31 = a5->member.super.refID; /*0x510a45*/
            easeInTimea = TESObjectREFR_GetName(a5); /*0x510a4d*/
            PrintError("PlayGroup Error: No NiControllerManager found for '%s' (%08X).", easeInTimea, v31);
          }
        }
        else
        {
          v32 = a5->member.super.refID; /*0x510a58*/
          easeInTimeb = TESObjectREFR_GetName(a5); /*0x510a60*/
          PrintError("PlayGroup Error: No 3d or controllers found for '%s' (%08X).", easeInTimeb, v32);
        }
      }
      return Cmd_PlayGroup_::SetFromActiveFile((int)a5); /*0x510894*/
    }
    else
    {
      return Cmd_PlayGroup_::Return_1(); /*0x5107ec*/
    }
  }
  return result; /*0x5107e5*/
}
