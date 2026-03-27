char __userpurge sub_612240@<al>(Actor *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR a5)
{
  TESPackage *v6; // ebx
  int p_magicTarget; // edi
  MobileObject *vtbl; // ebp
  TESObjectREFRVtbl *v9; // eax
  TESPackage *v10; // edi
  TESObjectREFRVtbl *v11; // eax
  TESObjectREFRVtbl *v12; // eax
  unsigned __int8 *v13; // ebx
  int v14; // eax
  _DWORD *v15; // edi
  float *v16; // eax
  BSExtraDataVtbl *Owner; // eax
  int vtbl_high; // edi
  NiNode *v19; // ebx
  bhkCharacterProxy *CharProxy; // eax
  float v22; // [esp+8h] [ebp-30h]
  float v23[3]; // [esp+20h] [ebp-18h] BYREF
  int v24; // [esp+34h] [ebp-4h]

  v6 = 0;
  p_magicTarget = (int)&a1->members.magicTarget;
  sub_6A24B0((int)&a1->members.magicTarget, (int)a1, 0x58415742, 0);
  sub_6A24B0(p_magicTarget, (int)a1, 0x4F425742, 0);
  sub_6A24B0(p_magicTarget, (int)a1, 0x41445742, 0);
  sub_6A24B0(p_magicTarget, (int)a1, 0x414D5742, 0);
  sub_6A24B0(p_magicTarget, (int)a1, 0x57535742, 0);
  vtbl = (MobileObject *)a5.vtbl;
  ((void (__thiscall *)(Actor *, TESObjectREFRVtbl *))a1->vtbl->Unk_E1)(a1, a5.vtbl);
  if ( a1->members.super.process )
  {
    if ( ((int (__thiscall *)(LowProcess *))a1->members.super.process->GetCurrentAction)(a1->members.super.process) == 6 )
      sub_5F4AE0(a1, a2, a3, a4, 0);
  }
  sub_5E6D70(a1, 0);
  ((void (__thiscall *)(MobileObject *, Actor *))vtbl->vtbl[1].super.IsMobileObject)(vtbl, a1);
  v9 = (TESObjectREFRVtbl *)FormHeapAlloc(0x3Cu);
  a5.vtbl = v9;
  v24 = 0;
  if ( v9 )
    v10 = TESPackage::TESPackage((TESPackage *)v9);
  else
    v10 = 0;
  v24 = 0xFFFFFFFF;
  TESPackage_SetType_(v10, 0x16);
  v10->members.packageFlags = v10->members.packageFlags & 0xFFFFFFF9 | 4;
  v11 = (TESObjectREFRVtbl *)FormHeapAlloc(0xCu);
  a5.vtbl = v11;
  v24 = 1;
  if ( v11 )
    v6 = (TESPackage *)TESPackage_LocationData_constr(v11);
  v24 = 0xFFFFFFFF;
  TESPackage_LocationData_SetType(v6, 0);
  TESPackage_LocationData_SetReference(v6, (int)vtbl);
  TESPackage_SetLocation(v10, (char *)v6);
  if ( v6 )
  {
    TESPackage_LocationData_destr(v6);
    FormHeapFree((unsigned int)v6);
  }
  v12 = (TESObjectREFRVtbl *)FormHeapAlloc(0xCu);
  a5.vtbl = v12;
  v24 = 2;
  if ( v12 )
    v13 = (unsigned __int8 *)TESPackage_TargetData_constr(v12);
  else
    v13 = 0;
  v24 = 0xFFFFFFFF;
  TESPackage_SetTarget(v10, v13);
  if ( v13 )
  {
    TESTexture::ClearComponentReferences(v13);
    FormHeapFree((unsigned int)v13);
  }
  sub_5672A0(v10);
  TESPackage_TargetData_SetType(&v10->members.target->targetType, 0);
  TeSPackage_TargetData_SetTargetREFR(&v10->members.target->targetType, (int)vtbl);
  v14 = a1->members.super.process->GetProcessLevel(a1->members.super.process);
  Actor_AddPackage_(a1, v10, v14 < 2, 1);
  v15 = (_DWORD *)((int (__thiscall *)(LowProcess *))a1->members.super.process->GetUnk128)(a1->members.super.process);
  if ( v15 )
  {
    v16 = sub_625290(vtbl, v23);
    *v15 = *(_DWORD *)v16;
    v15[1] = *((_DWORD *)v16 + 1);
    v15[2] = *((_DWORD *)v16 + 2);
  }
  a1->vtbl->super.super.GetScale((TESObjectREFR *)a1);
  __asm { fstp    [esp+30h+var_30]; float }
  sub_4DB520(vtbl, v22);
  LOBYTE(Owner) = TESOBjectREFR_IsOwnedBy((TESObjectREFR *)vtbl, (TESObjectREFR *)a1, 1);
  if ( !(_BYTE)Owner )
  {
    Owner = TESObjectREFR_GetOwner((TESObjectREFR *)vtbl);
    if ( Owner )
      LOBYTE(Owner) = ((int (__thiscall *)(Actor *, MobileObject *))a1->vtbl->Unk_93)(a1, vtbl);
  }
  if ( a1 != (Actor *)TESDataHandler_g_PlayerRef )
  {
    Owner = (BSExtraDataVtbl *)a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1);
    if ( Owner == (BSExtraDataVtbl *)3 )
    {
      if ( Actor_GetCurrentAction(vtbl) == 0xB )
      {
        vtbl_high = HIWORD(sub_65ABE0(vtbl, &a5)->vtbl);
        v19 = a1->vtbl->super.super.GetNiNode((TESObjectREFR *)a1);
        CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
        sub_5EA350(CharProxy, vtbl_high);
        sub_88D0E0(v19, vtbl_high, 1, 0);
      }
      LOBYTE(Owner) = ((char (__thiscall *)(LowProcess *, Actor *, int))a1->members.super.process->Unk_61)(
                        a1->members.super.process,
                        a1,
                        1);
    }
  }
  return (char)Owner;
}
