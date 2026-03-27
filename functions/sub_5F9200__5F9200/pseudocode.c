void __userpurge sub_5F9200(
        PlayerCharacter *a1@<ecx>,
        double a2@<st2>,
        double st6_0@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5)
{
  int v5; // ebp
  int v6; // edi
  PlayerCharacter *v7; // esi
  LowProcess *process; // edi
  TESFurniture *v9; // eax
  LowProcess *v10; // edi
  LowProcess_vtbl *v11; // ebp
  int v12; // eax
  LowProcess *v13; // edi
  int v14; // ebp
  double v15; // st7
  PlayerCharacterVtbl *vtbl; // edi
  Unk128 *v17; // eax
  float *v18; // eax
  LowProcess *v19; // edi
  LowProcess_vtbl *v20; // ebp
  TESObjectCELL *ParentCell; // edi
  TESWorldSpace *WorldSpace; // ebp
  float *v23; // eax
  int ExtraDataFollower; // eax
  int v25; // eax
  float a3; // [esp+0h] [ebp-50h]
  int v27; // [esp+10h] [ebp-40h]
  int v28; // [esp+14h] [ebp-3Ch]
  int v29; // [esp+14h] [ebp-3Ch]
  float v30; // [esp+14h] [ebp-3Ch]
  unsigned int v31; // [esp+20h] [ebp-30h]
  int v32; // [esp+40h] [ebp-10h]
  int v33; // [esp+44h] [ebp-Ch]
  int v34; // [esp+48h] [ebp-8h]
  _UNKNOWN *retaddr; // [esp+50h] [ebp+0h] BYREF

  v5 = (int)a1;
  v6 = 0;
  v32 = (int)a1;
  v7 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      if ( !v7->vtbl->super.super.super.IsDead((TESObjectREFR *)v7, 0)
        && (Actor::CanUSeDoor_((Actor *)v7) || !TESDataHandler_g_PlayerRef->unk114) )
      {
        sub_5F0810(v7, a4, a2, st6_0, (int)a5, (int)&retaddr, v32, v33, v34);
        if ( ((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetSitSleepState)(v7->super.super.super.process) )
        {
          if ( !v7->vtbl->super.GetMountedHorse((Actor *)v7) )
          {
            process = v7->super.super.super.process;
            v31 = ((int (__thiscall *)(LowProcess *))process->GetFurnitureMarkerID)(process);
            v9 = process->GetFurniture(process);
            sub_4D7300(v9, v31, 0);
            v7->vtbl->super.super.super.GetAnimData((TESObjectREFR *)v7)->unkC4 = 1;
            v10 = v7->super.super.super.process;
            v11 = v10->__vftable;
            v12 = ((int (__thiscall *)(LowProcess *, int))v10->GetFurniture)(v10, 0x7F);
            ((void (__thiscall *)(LowProcess *, PlayerCharacter *, _DWORD, int))v11->SetSleepState)(v10, v7, 0, v12);
            v13 = v7->super.super.super.process;
            v14 = (int)v13->GetFurniture(v13);
            v29 = *(unsigned __int8 *)(((int (__thiscall *)(LowProcess *))v13->GetUnk128)(v13) + 0xE);
            (*(void (__thiscall **)(int))(*(_DWORD *)v14 + 0x170))(v14);
            v15 = -sub_4AEBE0(v29);
            v30 = v15;
            sub_659B90((int *)v7, v15, v30);
            vtbl = v7->vtbl;
            *(float *)&v32 = ((double (__thiscall *)(PlayerCharacter *))v7->vtbl->super.super.GetZRotation)(v7)
                           + dbl_A3D5B8;
            v28 = v32;
            vtbl->super.super.Unk_7A((MobileObject *)v7);
            v17 = (Unk128 *)((int (*)(void))v7->super.super.super.process->GetUnk128)();
            sub_6FAEE0(v17, 0.0);
            *(_BYTE *)(((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetUnk128)(v7->super.super.super.process)
                     + 0xE) = 0;
            v18 = (float *)((int (__thiscall *)(LowProcess *))v7->super.super.super.process->GetUnk128)(v7->super.super.super.process);
            *v18 = Vector3_InitValue_;
            v18[1] = *(&Vector3_InitValue_ + 1);
            v18[2] = dword_B3F9B0;
            v19 = v7->super.super.super.process;
            v20 = v19->__vftable;
            v27 = ((int (__thiscall *)(LowProcess *))v19->GetUnk128)(v19);
            ((void (__thiscall *)(LowProcess *, _DWORD, int))v20->Unk_F9)(v19, 0, 0x7F);
            sub_65AC20(v7, 0);
          }
        }
        ParentCell = TESObjectREFR_GetParentCell(a5);
        WorldSpace = TESObjectREFR_GetWorldSpace(a5);
        v23 = a5->vtbl->GetPos(a5);
        TESObjectREFR_SetPosition((TESObjectREFR *)v7, *v23, v23[1], v23[2]);
        if ( ParentCell && TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 0) )
        {
          sub_4D8A10(a5->member.rot.z);
          a4 = 0.0;
        }
        else
        {
          a4 = flt_A32048;
        }
        a3 = a4;
        sub_4D89D0(a3);
        sub_4DD4B0((int)a5, a2, st6_0, a4, (Actor *)v7, ParentCell, WorldSpace);
        v5 = v28;
        v6 = v27;
      }
      if ( v7 == (PlayerCharacter *)v5 )
      {
        ExtraDataFollower = GetExtraDataFollower();
        if ( !ExtraDataFollower )
          return;
        v25 = *(_DWORD *)(ExtraDataFollower + 0xC);
        v7 = *(PlayerCharacter **)v25;
        v27 = *(_DWORD *)(v25 + 4);
      }
      else
      {
        if ( !v6 )
          return;
        v7 = *(PlayerCharacter **)v6;
        v27 = *(_DWORD *)(v6 + 4);
      }
      if ( !v7 )
        break;
      v6 = v27;
    }
  }
}
