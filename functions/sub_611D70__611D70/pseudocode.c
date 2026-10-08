void __usercall sub_611D70(Actor *a1@<ecx>, int a2@<edi>)
{
  Actor *v3; // esi
  TESPackage *v4; // eax
  TESPackage *v5; // edi
  TESPackage *v6; // esi
  _DWORD *v7; // eax
  int v8; // [esp+0h] [ebp-20h]

  if ( a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1) ) /*0x611d9e*/
  {
    v4 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x611df2*/
    v5 = 0; /*0x611dfe*/
    if ( v4 ) /*0x611e06*/
      v6 = TESPackage::TESPackage(v4); /*0x611e0f*/
    else
      v6 = 0; /*0x611e13*/
    TESPackage_SetType_(v6, 0x17); /*0x611e21*/
    v6->members.packageFlags = v6->members.packageFlags & 0xFFFFFFF9 | 4; /*0x611e31*/
    v7 = (_DWORD *)FormHeapAlloc(0xCu); /*0x611e34*/
    if ( v7 ) /*0x611e4a*/
      v5 = (TESPackage *)TESPackage_LocationData_constr(v7); /*0x611e53*/
    TESPackage_LocationData_SetType(v5, 0); /*0x611e61*/
    TESPackage_LocationData_SetReference(v5, (int)a1); /*0x611e69*/
    TESPackage_SetLocation(v6, (char *)v5); /*0x611e71*/
    if ( v5 ) /*0x611e78*/
    {
      TESPackage_LocationData_destr(v5); /*0x611e7c*/
      FormHeapFree((unsigned int)v5); /*0x611e82*/
    }
    sub_5672A0(v6); /*0x611e8c*/
    Actor_AddPackage_(a1, v6, 1, 1); /*0x611e98*/
  }
  else
  {
    v3 = (Actor *)a1->vtbl->GetMountedHorse(a1); /*0x611db0*/
    if ( v3 ) /*0x611db4*/
    {
      ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->Unk_E1)(a1, 0); /*0x611dc6*/
      ((void (__thiscall *)(Actor *, _DWORD))v3->vtbl->Unk_E3)(v3, 0); /*0x611dd4*/
      sub_5EAE70(v3, (int)a1, a2, v8); /*0x611dd8*/
    }
  }
}
