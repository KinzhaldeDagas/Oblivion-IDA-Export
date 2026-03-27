void __usercall ReanimateEffect_Apply(int a1@<ecx>, double a2@<st2>, double a3@<st1>, char a4@<bpl>, double a5@<st0>)
{
  MagicTarget *v6; // ecx
  Actor *ParentActor; // esi
  LowProcess *process; // edi
  ActorVtbl *vtbl; // edi
  int v10; // eax
  float *v11; // eax
  ActorVtbl *v12; // edi
  NiNode *v13; // eax
  TESPackage *v14; // eax
  TESPackage *v15; // edi
  NiNode *v16; // eax
  NiNode *v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  _BYTE v21[12]; // [esp+34h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 0x24) )
  {
    v6 = *(MagicTarget **)(a1 + 0x20);
    if ( v6
      && (ParentActor = MagicTarget_GetParentActor(v6)) != 0
      && ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
    {
      ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>))ParentActor->vtbl->super.super.super.Unk_27)(
        ParentActor,
        0,
        a5,
        a3);
      Actor_HandleDeathSTate____(ParentActor, 4u);
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) )
        ((void (__thiscall *)(Actor *, _DWORD))ParentActor->vtbl->Unk_D0)(ParentActor, 0);
      process = ParentActor->members.super.process;
      if ( !process->GetProcessLevel(process) )
        BYTE1(process[4].unk068) = 1;
      sub_5E8EC0((char *)ParentActor, 1);
      vtbl = ParentActor->vtbl;
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x24) + 0x20))(*(_DWORD *)(a1 + 0x24));
      ((void (__thiscall *)(Actor *, int))vtbl->super.Unk_79)(ParentActor, v10);
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) )
      {
        v11 = (float *)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
        TESObjectREFR_SetPosition((TESObjectREFR *)ParentActor, v11[0x22], v11[0x23], v11[0x24]);
      }
      ParentActor->vtbl->super.super.Unk_52((TESObjectREFR *)ParentActor);
      ((void (__thiscall *)(LowProcess *, _DWORD))ParentActor->members.super.process->Unk_120)(
        ParentActor->members.super.process,
        0);
      sub_5E6D70(ParentActor, 0);
      v12 = ParentActor->vtbl;
      *(double *)v21 = (double)Actor_GetBaseCalcAVi((int *)ParentActor, a1, (int)ParentActor->vtbl, (int)ParentActor, 8);
      *(float *)&v21[4] = *(double *)&v21[4]
                        - ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->GetAV_F)(ParentActor, 8, 0);
      ((void (__thiscall *)(Actor *, int, _DWORD))v12->DamageAV_F)(ParentActor, 8, *(_DWORD *)&v21[4]);
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) )
      {
        sub_4E3490((TESObjectREFR *)ParentActor, a2, a3, *(float *)&v21[4]);
        v13 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
        sub_5EA1A0((int)ParentActor, a4, v13);
      }
      v14 = (TESPackage *)FormHeapAlloc(0x3Cu);
      if ( v14 )
        v15 = TESPackage::TESPackage(v14);
      else
        v15 = 0;
      TESPackage_SetType_(v15, 0x18);
      v15->members.packageFlags |= 0x1006u;
      v15->members.procedureArrayIndex = 0x19;
      Actor_AddPackage_(ParentActor, v15, 1, 1);
      v16 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor);
      v17 = v16;
      if ( v16 )
      {
        sub_88D070(v16, 1, 1, 0);
        v18 = (int)v17->vtbl->super.GetObjectByName((NiAVObject *)v17, "Bip01 Spine2");
        if ( v18 )
        {
          v19 = sub_47FAC0(v18);
          if ( v19 )
          {
            v20 = *(_DWORD *)(v19 + 0x10);
            *(_DWORD *)(a1 + 0x38) = v20;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 0x9C))(v20, 6);
            sub_4D6900(*(void **)(a1 + 0x38), (float *)(a1 + 0x44));
            sub_4D6950(*(void **)(a1 + 0x38), (float *)(a1 + 0x50));
          }
        }
        else
        {
          PrintError("No Bip01 Spine2 bone for reanimation. Need a backup bone!");
        }
      }
    }
    else
    {
      ActiveEffect_Base_Remove((ActiveEffect *)a1, a4, a5, 0);
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, a4, a5, 1);
  }
}
