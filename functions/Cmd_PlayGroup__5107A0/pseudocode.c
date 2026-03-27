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
  TESObjectREFR *v11; // eax
  PlayerCharacter *v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  ActorAnimData *v15; // eax
  PowerListEntry *v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  NiObject *v21; // esi
  int v22; // ebp
  unsigned int v23; // ebx
  int v24; // ebp
  char *Name; // eax
  _DWORD *v26; // [esp+8h] [ebp-28h]
  char *v27; // [esp+8h] [ebp-28h]
  char *v28; // [esp+8h] [ebp-28h]
  int v29; // [esp+Ch] [ebp-24h]
  void *refID; // [esp+Ch] [ebp-24h]
  void *v31; // [esp+Ch] [ebp-24h]
  void *v32; // [esp+Ch] [ebp-24h]
  int v33; // [esp+20h] [ebp-10h]
  UInt16 v34[2]; // [esp+24h] [ebp-Ch] BYREF
  float v35[2]; // [esp+28h] [ebp-8h] BYREF

  v35[0] = 0.0;
  result = Script_ExtractArgs(a1, a4, a3, a5, a6, a7, l, v34, v35);
  if ( result )
  {
    if ( a5 )
    {
      ((void (__thiscall *)(TESObjectREFR *, int, int, int))a5->vtbl->super.MarkAsModified)(a5, 0x2000000, a2, ebp0);
      if ( a5->vtbl->GetAnimData(a5) && a5->vtbl->IsActor(a5) )
      {
        v11 = (TESObjectREFR *)OblivionDynamicCast(
                                 a5,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0);
        v29 = *(_DWORD *)v34;
        v12 = (PlayerCharacter *)v11;
        LOWORD(v13) = Actor_LoadAnimGroup_(v11, v33, 0, 0);
        v26 = v13;
        v14 = (int)a5->vtbl->GetAnimData(a5);
        ActorAnimData_PlayAnimGroup(v14, v26, v29, 0xFFFFFFFF);
        if ( v33 )
        {
          v15 = a5->vtbl->GetAnimData(a5);
          v16 = sub_4706E0(v15, 0);
          HighPRocess_DoAction_____(v12, 0xC, (int)v16);
        }
        else if ( Actor_GetCurrentAction(v12) == 0xC )
        {
          HighPRocess_DoAction_____(v12, 0xFFFFFFFF, 0);
        }
      }
      else if ( v33 != 0xFF )
      {
        v17 = (int)a5->vtbl->GetNiNode(a5);
        if ( v17
          && (v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 8))(v17), (v19 = v18) != 0)
          && sub_405790(v18, 0)
          && *(_DWORD *)(sub_405790(v19, 0) + 0xC) )
        {
          v20 = sub_405790(v19, 0);
          v21 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v20 + 0xC));
          if ( v21 || (v21 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v19 + 0xC))) != 0 )
          {
            v22 = sub_4715A0(v21, *(_DWORD *)(0x24 * v33 + 0xB102E0));
            v35[0] = *(float *)&v22;
            if ( v22 )
            {
              v23 = 0;
              if ( HIWORD(v21[8].members.m_uiRefCount) )
              {
                do
                {
                  v24 = *((_DWORD *)&v21[8].__vftable->super.Destructor + v23);
                  if ( _strcmp(*(char **)(v24 + 8), *(char **)animGroupInfos_ptr) )
                    sub_6C9CB0(v24, 0.0, 0);
                  ++v23;
                }
                while ( v23 < HIWORD(v21[8].members.m_uiRefCount) );
                v22 = LODWORD(v35[0]);
              }
              if ( *(_DWORD *)v34 )
              {
                v35[0] = (double)*(int *)v34 * dbl_A2FC80;
                sub_6C5C70(v21, v22, 0.0, v35[0], 0, 0);
              }
              else
              {
                sub_470B20((_DWORD *)v22, 0, 0, 1.0, 0.0, 0);
              }
              *(float *)(v22 + 0x48) = -flt_A7DEB4;
              LOWORD(v21[1].__vftable) |= 8u;
            }
            else
            {
              refID = (void *)a5->member.super.refID;
              Name = TESObjectREFR_GetName(a5);
              PrintError(
                "PlayGroup Error: Sequence '%s' not found for '%s' (%08X).",
                *(const char **)(0x24 * v33 + 0xB102E0),
                Name,
                refID);
            }
          }
          else
          {
            v31 = (void *)a5->member.super.refID;
            v27 = TESObjectREFR_GetName(a5);
            PrintError("PlayGroup Error: No NiControllerManager found for '%s' (%08X).", v27, v31);
          }
        }
        else
        {
          v32 = (void *)a5->member.super.refID;
          v28 = TESObjectREFR_GetName(a5);
          PrintError("PlayGroup Error: No 3d or controllers found for '%s' (%08X).", v28, v32);
        }
      }
      return Cmd_PlayGroup_::SetFromActiveFile((int)a5);
    }
    else
    {
      return Cmd_PlayGroup_::Return_1();
    }
  }
  return result;
}
