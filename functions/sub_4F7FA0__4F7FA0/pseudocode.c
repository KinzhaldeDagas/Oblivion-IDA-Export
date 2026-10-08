// GetIsCurrentPackage_Eval requires an actor subject and Package parameter (form type 0x3D). It reads the subject's current package; for a temporary-override package it prefers the actor's ExtraPackage when present, then pointer-compares against the parameter.
char __cdecl GetIsCurrentPackage_Eval(TESObjectREFR *subject, TESPackage *package, TESForm *param2, double *value)
{
  TESObjectREFR *v4; // edi
  TESPackage *v5; // ebx
  TESPackage *v6; // eax
  BSExtraDataVtbl *ExtraPackage; // esi
  ExtraDataList *p_baseExtraList; // edi

  *value = 0.0; /*0x4f7fa7*/
  v4 = 0; /*0x4f7fb0*/
  if ( subject ) /*0x4f7fb4*/
  {
    if ( subject->vtbl->IsActor(subject) ) /*0x4f7fc0*/
      v4 = subject; /*0x4f7fc6*/
  }
  v5 = 0; /*0x4f7fcd*/
  if ( package ) /*0x4f7fd1*/
  {
    if ( package->members.super.type == kFormType_Package ) /*0x4f7fd7*/
      v5 = package; /*0x4f7fd9*/
  }
  if ( v4 ) /*0x4f7fdd*/
  {
    if ( v5 ) /*0x4f7fe1*/
    {
      v6 = (TESPackage *)sub_5E03A0(v4); /*0x4f7fe5*/
      ExtraPackage = (BSExtraDataVtbl *)v6; /*0x4f7fea*/
      if ( v6 ) /*0x4f7fee*/
      {
        if ( TESPackage_IsRuntimePackage(v6) ) /*0x4f7ff2*/
        {
          p_baseExtraList = &v4->member.baseExtraList; /*0x4f7ffb*/
          if ( ExtraDataList::GetExtraPackage(p_baseExtraList) ) /*0x4f8000*/
            ExtraPackage = ExtraDataList::GetExtraPackage(p_baseExtraList); /*0x4f8010*/
        }
      }
      if ( ExtraPackage == (BSExtraDataVtbl *)v5 ) /*0x4f8014*/
        *value = 1.0; /*0x4f8018*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f801b*/
    Interface_ConsolePrint("GetIsCurrentPackage >> %0.2f", *value); /*0x4f8033*/
  return 1; /*0x4f803f*/
}
