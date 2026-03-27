TESPackage *__cdecl CommandEffect_MakeActorLoyal__(Actor *a1, PlayerCharacter *a2)
{
  TESPackage *v3; // esi
  TESPackage *result; // eax
  TESPackage *v5; // eax
  unsigned __int8 v6[12]; // [esp+18h] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-18h] BYREF
  int v8; // [esp+38h] [ebp-4h]

  ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->vtbl->Unk_DD)(a1, a2, flt_A2FE7C);
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a1->members.super.process->Unk_F2)(
    a1->members.super.process,
    a2);
  v3 = 0;
  a1->vtbl->ModMaxAV(a1, 0x22, 0x64, 0);
  if ( a2 == TESDataHandler_g_PlayerRef
    || (result = a2->super.super.super.process->GetCurrentPackage(a2->super.super.super.process)) == 0
    || result->members.type == 0xC )
  {
    v5 = (TESPackage *)FormHeapAlloc(0x3Cu);
    v8 = 0;
    if ( v5 )
      v3 = TESPackage::TESPackage(v5);
    v8 = 0xFFFFFFFF;
    TESPackage_SetType_(v3, 0x1F);
    v3->members.packageFlags |= 0x401006u;
    TESPackage_LocationData_constr(v7);
    v8 = 1;
    TESPackage_LocationData_SetReference(v7, (int)a2);
    TESPackage_LocationData_SetRadius(v7, 0x5DC);
    TESPackage_LocationData_SetType((TESPackage *)v7, 0);
    TESPackage_SetLocation(v3, (char *)v7);
    TESPackage_TargetData_constr(v6);
    LOBYTE(v8) = 2;
    TESPackage_TargetData_SetType(v6, 0);
    TeSPackage_TargetData_SetTargetREFR(v6, (int)a2);
    TESAIForm_SetServiceFlags(v6, 0x12C);
    TESPackage_SetTarget(v3, v6);
    v3->members.procedureArrayIndex = 0x26;
    Actor_AddPackage_(a1, v3, 0, 1);
    LOBYTE(v8) = 1;
    TESTexture::ClearComponentReferences(v6);
    v8 = 0xFFFFFFFF;
    return (TESPackage *)TESPackage_LocationData_destr(v7);
  }
  return result;
}
