TESPackage *__cdecl CommandEffect_MakeActorLoyal__(Actor *a1, PlayerCharacter *a2)
{
  TESPackage *v3; // esi
  TESPackage *result; // eax
  TESPackage *v5; // eax
  unsigned __int8 v6[12]; // [esp+18h] [ebp-24h] BYREF
  _DWORD v7[3]; // [esp+24h] [ebp-18h] BYREF
  int v8; // [esp+38h] [ebp-4h]

  ((void (__thiscall *)(_DWORD, _DWORD, _DWORD))a1->vtbl->Unk_DD)(a1, a2, flt_A2FE7C); /*0x692474*/
  ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a1->members.super.process->Unk_F2)( /*0x692482*/
    a1->members.super.process,
    a2);
  v3 = 0; /*0x69248d*/
  a1->vtbl->ModMaxAV(a1, 0x22, 0x64, 0); /*0x692496*/
  if ( a2 == reference /*0x6924b5*/
    || (result = a2->super.super.super.process->GetCurrentPackage(a2->super.super.super.process)) == 0
    || result->members.type == kPackageType_Combat )
  {
    v5 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x6924bd*/
    v8 = 0; /*0x6924cb*/
    if ( v5 ) /*0x6924cf*/
      v3 = TESPackage::TESPackage(v5); /*0x6924d8*/
    v8 = 0xFFFFFFFF; /*0x6924de*/
    TESPackage_SetType_(v3, 0x1F); /*0x6924e6*/
    v3->members.packageFlags |= 0x401006u; /*0x6924eb*/
    TESPackage_LocationData_constr(v7); /*0x6924f6*/
    v8 = 1; /*0x692500*/
    TESPackage_LocationData_SetReference(v7, (int)a2); /*0x692508*/
    TESPackage_LocationData_SetRadius(v7, 0x5DC); /*0x692516*/
    TESPackage_LocationData_SetType((TESPackage *)v7, 0); /*0x692521*/
    TESPackage_SetLocation(v3, (char *)v7); /*0x69252d*/
    TESPackage_TargetData_constr(v6); /*0x692536*/
    LOBYTE(v8) = 2; /*0x692541*/
    TESPackage_TargetData_SetType(v6, 0); /*0x692546*/
    TeSPackage_TargetData_SetTargetREFR(v6, (int)a2); /*0x692550*/
    TESAIForm_SetServiceFlags(v6, 0x12C); /*0x69255e*/
    TESPackage_SetTarget(v3, v6); /*0x69256a*/
    v3->members.procedureArrayIndex = 0x26; /*0x692576*/
    Actor_AddPackage_(a1, v3, 0, 1); /*0x69257d*/
    LOBYTE(v8) = 1; /*0x692586*/
    Shared_NoOpVirtual_60D0A0(v6); /*0x69258b*/
    v8 = 0xFFFFFFFF; /*0x692594*/
    return (TESPackage *)TESPackage_LocationData_destr(v7); /*0x69259c*/
  }
  return result; /*0x6925a1*/
}
