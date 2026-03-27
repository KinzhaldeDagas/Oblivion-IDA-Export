void __usercall sub_611D70(Actor *a1@<ecx>, int a2@<edi>)
{
  Actor *v4; // esi
  TESPackage *v5; // eax
  TESPackage *v6; // edi
  TESPackage *v7; // esi
  _DWORD *v8; // eax
  int v9; // [esp+0h] [ebp-20h]

  if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) )
  {
    v5 = (TESPackage *)FormHeapAlloc(0x3Cu);
    v6 = 0;
    if ( v5 )
      v7 = TESPackage::TESPackage(v5);
    else
      v7 = 0;
    TESPackage_SetType_(v7, 0x17);
    v7->members.packageFlags = v7->members.packageFlags & 0xFFFFFFF9 | 4;
    v8 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v8 )
      v6 = (TESPackage *)TESPackage_LocationData_constr(v8);
    TESPackage_LocationData_SetType(v6, 0);
    TESPackage_LocationData_SetReference(v6, (int)a1);
    TESPackage_SetLocation(v7, (char *)v6);
    if ( v6 )
    {
      TESPackage_LocationData_destr(v6);
      FormHeapFree((unsigned int)v6);
    }
    sub_5672A0(v7);
    Actor_AddPackage_(a1, v7, 1, 1);
  }
  else
  {
    v4 = (Actor *)a1->vtbl->GetMountedHorse(a1);
    if ( v4 )
    {
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0);
      ((void (__thiscall *)(Actor *, _DWORD))v4->vtbl->Unk_E3)(v4, 0);
      sub_5EAE70(v4, (int)a1, a2, v9);
    }
  }
}
