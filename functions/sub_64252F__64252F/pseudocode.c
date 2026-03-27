// bad sp value at call has been detected, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
bool __userpurge sub_64252F@<al>(
        int *a1@<ecx>,
        int a2@<ebx>,
        float *a3@<ebp>,
        int a4@<edi>,
        Actor *a5@<esi>,
        double a6@<st2>,
        double a7@<st0>,
        int a8)
{
  int (__thiscall *v8)(int); // eax
  signed int v9; // eax
  BSSimpleList_VoidPtr *v10; // ebx
  int v11; // edi
  _DWORD *v12; // ebx
  void (__thiscall **v13)(_DWORD *); // edi
  Actor *v14; // eax
  Actor *v15; // eax
  _DWORD *v16; // ebx
  Actor *v17; // ebp
  TESObjectCELL *ParentCell; // eax
  TESObjectREFR *vtbl; // edi
  double Distance; // st7
  int v21; // eax
  int v22; // eax
  int v24; // [esp-15Ch] [ebp-190h]
  int v25; // [esp-158h] [ebp-18Ch]
  float v26; // [esp-144h] [ebp-178h]
  char v27; // [esp-13Dh] [ebp-171h] BYREF
  int v28; // [esp-138h] [ebp-16Ch]
  int v29; // [esp-11Ch] [ebp-150h]
  float *v30; // [esp-114h] [ebp-148h]
  float v31; // [esp-110h] [ebp-144h]
  signed int v32; // [esp-F4h] [ebp-128h]

  v31 = a7;
  a3[0x6E] = v31;
  if ( *(float *)GameSetting_GetSafeFloatPointer(a1) <= (double)v31 )
  {
    ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_D0)(a5, a4);
    if ( !a5->vtbl->IsInCombat(a5, 1) )
      ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_C7)(a5, a4);
  }
  if ( v32 > 0 )
    goto LABEL_8;
  if ( TESDataHandler_g_PlayerRef->vtbl->super.IsTresspassing((Actor *)TESDataHandler_g_PlayerRef) )
  {
    v8 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x284);
    v28 = 0x24;
    v9 = v8(a2);
    if ( sub_546700(v32, v9) )
    {
      a3 = v30;
LABEL_8:
      if ( sub_5E0F30(a5)
        || !sub_5E32D0(a5)
        || ((double (__thiscall *)(LowProcess *))a5->members.super.process->Unk_79)(a5->members.super.process) >= *(float *)&SrcStr
        || (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a3 + 0x33C))(a3, 0) )
      {
        a5->vtbl->super.Unk_77((MobileObject *)a5);
      }
      else
      {
        v10 = (BSSimpleList_VoidPtr *)TESTopic::GEtTopic(4, 3);
        if ( !sub_5E6BA0(a5) && !sub_5E6CD0((TESObjectREFR *)a5, 0) && !a5->vtbl->IsInCombat(a5, 1) )
        {
          if ( v10 )
          {
            if ( v10 != (BSSimpleList_VoidPtr *)0xFFFFFFD8 && !BSSimpleList_IsEmpty(v10 + 5) )
            {
              v11 = v29;
              (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v29 + 0x484))(v29, TESDataHandler_g_PlayerRef);
              a5->members.unk0E4 = (Actor *)TESDataHandler_g_PlayerRef;
              v25 = (int)a5;
              (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 0x1A4))(v11);
              v12 = &a5->members.super.process->__vftable;
              v13 = (void (__thiscall **)(_DWORD *))(*v12 + 0x1C0);
              v24 = *GameSetting_GetSafeFloatPointer((int *)&unk_B36928);
              (*v13)(v12);
            }
          }
        }
      }
    }
  }
  v14 = sub_673A50(&ActorProcessManager_ptr, 0);
  v15 = sub_7616D0((ActorList *)v14);
  v16 = (_DWORD *)v28;
  *(_DWORD *)(v28 + 0x1A4) = 0;
  v26 = fSneakMaxDistance;
  v17 = v15;
  if ( !TESObjectREFR_GetParentCell((TESObjectREFR *)a5)
    || (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a5), !TESObjectCELL_IsInterior(ParentCell)) )
  {
    v26 = v26 + v26;
  }
  for ( ; v17; v17 = *(Actor **)&v17->members.super.super.super.type )
  {
    vtbl = (TESObjectREFR *)v17->vtbl;
    if ( !v17->vtbl )
      break;
    if ( v16[0x69] )
      break;
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, vtbl, 0);
    if ( v26 < Distance )
    {
      if ( vtbl->vtbl->IsActor(vtbl) )
      {
        v21 = (*(int (__thiscall **)(_DWORD *, TESObjectREFR *))(*v16 + 0x3B0))(v16, vtbl);
        if ( v21 )
          *(_DWORD *)(v21 + 0xC) = iAICombatMinDetection;
        else
          (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, int))(*v16 + 0xA8))(
            v16,
            vtbl,
            0,
            0,
            iAICombatMinDetection);
      }
    }
    else
    {
      sub_640900((int)v16, (char)vtbl, a6, v26, Distance, vtbl, (TESObjectREFR *)a5, (int)&v27, v24, v25);
    }
  }
  if ( v27 )
  {
    if ( dword_B3B930 )
    {
      if ( !sub_5E6BA0(a5) && !a5->vtbl->IsInCombat(a5, 0) )
      {
        v22 = v16[2];
        if ( !v22 || (*(_DWORD *)(v22 + 0x1C) & 0x400000) == 0 )
          ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_C5)(a5, dword_B3B930);
      }
    }
  }
  return v16[0x69] != 0;
}
