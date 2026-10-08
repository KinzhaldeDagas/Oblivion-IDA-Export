char __userpurge sub_612240@<al>(Actor *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR a5)
{
  TESPackage *v6; // ebx
  MagicTarget *p_magicTarget; // edi
  MobileObject *vtbl; // ebp
  TESObjectREFRVtbl *v9; // eax
  TESPackage *v10; // edi
  TESObjectREFRVtbl *v11; // eax
  TESObjectREFRVtbl *v12; // eax
  unsigned __int8 *v13; // ebx
  signed int v14; // eax
  _DWORD *v15; // edi
  float *v16; // eax
  TESForm *Owner; // eax
  int vtbl_high; // edi
  NiObjectNET *v19; // ebx
  bhkCharacterProxy *CharProxy; // eax
  float v22; // [esp+8h] [ebp-30h]
  float v23[3]; // [esp+20h] [ebp-18h] BYREF
  int v24; // [esp+34h] [ebp-4h]

  v6 = 0; /*0x612269*/
  p_magicTarget = &a1->members.magicTarget; /*0x61226c*/
  MagicTarget_RemoveActiveEffectsByCode(&a1->members.magicTarget, 0x58415742u, 0); /*0x612276*/
  MagicTarget_RemoveActiveEffectsByCode(p_magicTarget, 0x4F425742u, 0); /*0x612283*/
  MagicTarget_RemoveActiveEffectsByCode(p_magicTarget, 0x41445742u, 0); /*0x612290*/
  MagicTarget_RemoveActiveEffectsByCode(p_magicTarget, 0x414D5742u, 0); /*0x61229d*/
  MagicTarget_RemoveActiveEffectsByCode(p_magicTarget, 0x57535742u, 0); /*0x6122aa*/
  vtbl = (MobileObject *)a5.vtbl; /*0x6122b1*/
  ((void (__usercall *)(Actor *@<ecx>, TESObjectREFRVtbl *, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->Unk_E1)( /*0x6122be*/
    a1,
    a5.vtbl,
    a4,
    a3,
    a2);
  if ( a1->members.super.process ) /*0x6122c0*/
  {
    if ( ((int (__thiscall *)(LowProcess *))a1->members.super.process->GetCurrentAction)(a1->members.super.process) == 6 ) /*0x6122d5*/
      Actor_UpdateBlockingState(a1, 0); /*0x6122da*/
  }
  sub_5E6D70(a1, 0); /*0x6122e2*/
  ((void (__thiscall *)(MobileObject *, Actor *))vtbl->vtbl[1].super.IsMobileObject)(vtbl, a1); /*0x6122f3*/
  v9 = (TESObjectREFRVtbl *)FormHeapAlloc(0x3Cu); /*0x6122f7*/
  a5.vtbl = v9; /*0x6122ff*/
  v24 = 0; /*0x612305*/
  if ( v9 ) /*0x612309*/
    v10 = TESPackage::TESPackage((TESPackage *)v9); /*0x612312*/
  else
    v10 = 0; /*0x612316*/
  v24 = 0xFFFFFFFF; /*0x61231c*/
  TESPackage_SetType_(v10, 0x16); /*0x612324*/
  v10->members.packageFlags = v10->members.packageFlags & 0xFFFFFFF9 | 4; /*0x612334*/
  v11 = (TESObjectREFRVtbl *)FormHeapAlloc(0xCu); /*0x612337*/
  a5.vtbl = v11; /*0x61233f*/
  v24 = 1; /*0x612345*/
  if ( v11 ) /*0x61234d*/
    v6 = (TESPackage *)TESPackage_LocationData_constr(v11); /*0x612356*/
  v24 = 0xFFFFFFFF; /*0x61235c*/
  TESPackage_LocationData_SetType(v6, 0); /*0x612364*/
  TESPackage_LocationData_SetReference(v6, (int)vtbl); /*0x61236c*/
  TESPackage_SetLocation(v10, (char *)v6); /*0x612374*/
  if ( v6 ) /*0x61237b*/
  {
    TESPackage_LocationData_destr(v6); /*0x61237f*/
    FormHeapFree((unsigned int)v6); /*0x612385*/
  }
  v12 = (TESObjectREFRVtbl *)FormHeapAlloc(0xCu); /*0x61238f*/
  a5.vtbl = v12; /*0x612397*/
  v24 = 2; /*0x61239d*/
  if ( v12 ) /*0x6123a5*/
    v13 = (unsigned __int8 *)TESPackage_TargetData_constr(v12); /*0x6123ae*/
  else
    v13 = 0; /*0x6123b2*/
  v24 = 0xFFFFFFFF; /*0x6123b7*/
  TESPackage_SetTarget(v10, v13); /*0x6123bf*/
  if ( v13 ) /*0x6123c6*/
  {
    Shared_NoOpVirtual_60D0A0(v13); /*0x6123ca*/
    FormHeapFree((unsigned int)v13); /*0x6123d0*/
  }
  sub_5672A0(v10); /*0x6123da*/
  TESPackage_TargetData_SetType(&v10->members.target->targetType, 0); /*0x6123e4*/
  TeSPackage_TargetData_SetTargetREFR(&v10->members.target->targetType, (int)vtbl); /*0x6123ed*/
  v14 = a1->members.super.process->GetProcessLevel(a1->members.super.process); /*0x6123fa*/
  Actor_AddPackage_(a1, v10, v14 < 2, 1); /*0x61240c*/
  v15 = (_DWORD *)((int (__thiscall *)(LowProcess *))a1->members.super.process->GetUnk128)(a1->members.super.process); /*0x61241e*/
  if ( v15 ) /*0x612422*/
  {
    v16 = sub_625290(vtbl, v23); /*0x61242b*/
    *v15 = *(_DWORD *)v16; /*0x612432*/
    v15[1] = *((_DWORD *)v16 + 1); /*0x612437*/
    v15[2] = *((_DWORD *)v16 + 2); /*0x61243d*/
  }
  v22 = a1->vtbl->super.super.GetScale((TESObjectREFR *)a1); /*0x61244f*/
  sub_4DB520(vtbl, v22); /*0x612452*/
  LOBYTE(Owner) = TESObjectREFR_IsOwnedBy((TESObjectREFR *)vtbl, (TESObjectREFR *)a1, 1); /*0x61245c*/
  if ( !(_BYTE)Owner ) /*0x612463*/
  {
    Owner = TESObjectREFR_GetOwner((TESObjectREFR *)vtbl); /*0x612467*/
    if ( Owner ) /*0x61246e*/
      LOBYTE(Owner) = ((int (__thiscall *)(Actor *, MobileObject *))a1->vtbl->Unk_93)(a1, vtbl); /*0x61247b*/
  }
  if ( a1 != (Actor *)reference ) /*0x612483*/
  {
    Owner = (TESForm *)a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1); /*0x61248f*/
    if ( Owner == (TESForm *)3 ) /*0x612494*/
    {
      if ( Actor_GetCurrentAction(vtbl) == 0xB ) /*0x6124a0*/
      {
        vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo(vtbl, &a5)->vtbl); /*0x6124b0*/
        v19 = (NiObjectNET *)a1->vtbl->super.super.GetNiNode(a1); /*0x6124c0*/
        CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x6124c2*/
        sub_5EA350(CharProxy, vtbl_high); /*0x6124ca*/
        sub_88D0E0(v19, vtbl_high, 1, 0); /*0x6124d5*/
      }
      LOBYTE(Owner) = ((char (__thiscall *)(LowProcess *, Actor *, int))a1->members.super.process->Unk_61)( /*0x6124eb*/
                        a1->members.super.process,
                        a1,
                        1);
    }
  }
  return (char)Owner; /*0x6124ed*/
}
