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
  int BhkCollisionObject; // eax
  int v20; // ecx
  _BYTE v21[12]; // [esp+34h] [ebp-14h]

  if ( *(_DWORD *)(a1 + 0x24) ) /*0x6a40d8*/
  {
    v6 = *(MagicTarget **)(a1 + 0x20); /*0x6a40e6*/
    if ( v6 /*0x6a410c*/
      && (ParentActor = MagicTarget_GetParentActor(v6)) != 0
      && ParentActor->vtbl->super.super.IsDead((TESObjectREFR *)ParentActor, 0) )
    {
      ((void (__usercall *)(Actor *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))ParentActor->vtbl->super.super.super.Unk_27)( /*0x6a4122*/
        ParentActor,
        0,
        a5,
        a3,
        a2);
      Actor_HandleDeathState(ParentActor, 4u); /*0x6a4128*/
      if ( ParentActor->vtbl->IsInCombat(ParentActor, 1) ) /*0x6a4139*/
        ((void (__thiscall *)(Actor *, _DWORD))ParentActor->vtbl->Unk_D0)(ParentActor, 0); /*0x6a414b*/
      process = ParentActor->members.super.process; /*0x6a414d*/
      if ( !process->GetProcessLevel(process) ) /*0x6a4157*/
        BYTE1(process[4].unk068) = 1; /*0x6a415d*/
      sub_5E8EC0((char *)ParentActor, 1); /*0x6a4168*/
      vtbl = ParentActor->vtbl; /*0x6a4175*/
      v10 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x24) + 0x20))(*(_DWORD *)(a1 + 0x24)); /*0x6a4177*/
      ((void (__thiscall *)(Actor *, int))vtbl->super.Unk_79)(ParentActor, v10); /*0x6a4182*/
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) ) /*0x6a418e*/
      {
        v11 = (float *)ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x6a419e*/
        TESObjectREFR_SetPosition((TESObjectREFR *)ParentActor, v11[0x22], v11[0x23], v11[0x24]); /*0x6a41c0*/
      }
      ParentActor->vtbl->super.super.Unk_52((TESObjectREFR *)ParentActor); /*0x6a41cf*/
      ((void (__thiscall *)(LowProcess *, _DWORD))ParentActor->members.super.process->Unk_120)( /*0x6a41de*/
        ParentActor->members.super.process,
        0);
      sub_5E6D70(ParentActor, 0); /*0x6a41e4*/
      v12 = ParentActor->vtbl; /*0x6a41e9*/
      *(double *)v21 = (double)Actor_GetBaseCalcAVi((int *)ParentActor, a1, (int)ParentActor->vtbl, (int)ParentActor, 8); /*0x6a4208*/
      *(float *)&v21[4] = *(double *)&v21[4] /*0x6a421b*/
                        - ((double (__thiscall *)(Actor *, int, _DWORD))ParentActor->vtbl->GetAV_F)(ParentActor, 8, 0);
      ((void (__thiscall *)(Actor *, int, _DWORD))v12->DamageAV_F)(ParentActor, 8, *(_DWORD *)&v21[4]); /*0x6a422a*/
      if ( ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor) ) /*0x6a4236*/
      {
        Actor_SetupAnimationData((TESObjectREFR *)ParentActor, a2, a3, *(float *)&v21[4]); /*0x6a423e*/
        v13 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x6a424d*/
        sub_5EA1A0((int)ParentActor, a4, v13); /*0x6a4252*/
      }
      v14 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x6a4259*/
      if ( v14 ) /*0x6a426f*/
        v15 = TESPackage::TESPackage(v14); /*0x6a4278*/
      else
        v15 = 0; /*0x6a427c*/
      TESPackage_SetType_(v15, 0x18); /*0x6a428a*/
      v15->members.packageFlags |= 0x1006u; /*0x6a428f*/
      v15->members.procedureArrayIndex = 0x19; /*0x6a429d*/
      Actor_AddPackage_(ParentActor, v15, 1, 1); /*0x6a42a4*/
      v16 = ParentActor->vtbl->super.super.GetNiNode((TESObjectREFR *)ParentActor); /*0x6a42b3*/
      v17 = v16; /*0x6a42b5*/
      if ( v16 ) /*0x6a42b9*/
      {
        sub_88D070(v16, 1, 1, 0); /*0x6a42c6*/
        v18 = (int)v17->vtbl->super.GetObjectByName((NiAVObject *)v17, "Bip01 Spine2"); /*0x6a42da*/
        if ( v18 ) /*0x6a42de*/
        {
          BhkCollisionObject = NiAVObject_GetBhkCollisionObject(v18); /*0x6a42e1*/
          if ( BhkCollisionObject ) /*0x6a42eb*/
          {
            v20 = *(_DWORD *)(BhkCollisionObject + 0x10); /*0x6a42ed*/
            *(_DWORD *)(a1 + 0x38) = v20; /*0x6a42f0*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v20 + 0x9C))(v20, 6); /*0x6a42fd*/
            sub_4D6900(*(void **)(a1 + 0x38), (float *)(a1 + 0x44)); /*0x6a4306*/
            sub_4D6950(*(void **)(a1 + 0x38), (float *)(a1 + 0x50)); /*0x6a4312*/
          }
        }
        else
        {
          PrintError("No Bip01 Spine2 bone for reanimation. Need a backup bone!"); /*0x6a432f*/
        }
      }
    }
    else
    {
      ActiveEffect_Base_Remove((ActiveEffect *)a1, a4, a5, 0); /*0x6a434e*/
    }
  }
  else
  {
    ActiveEffect_Base_Remove((ActiveEffect *)a1, a4, a5, 1); /*0x6a40e1*/
  }
}
