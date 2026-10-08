// Verified: restores package identity during load. Existing formID collision goes through DeleteForm; absent form clears changes entry. Switch0C CombatController(1C0),0F AlarmPackage(40),10 FleePackage(68),11 TrespassPackage(58),12 DialoguePackage(64), default TESPackage(3C); installs requested FormID on constructed result. Types established by constructor vtable stores and base inheritance. Unknown full combatContext meaning; only CombatController branch forwards it. Probable Fallout82602990; Fallout delegates subtype construction to separate factory.
TESPackage *__thiscall TESSaveLoadGame_CreatePackage(
        TESSaveLoadGame_SerializationView *self,
        unsigned int formID,
        void *combatContext,
        TESPackageType packageType)
{
  TESForm *v5; // eax
  CombatController *v6; // eax
  TESForm *v7; // eax
  AlarmPackage *v8; // eax
  FleePackage *v9; // eax
  DialoguePackage *v10; // eax
  TrespassPackage *v11; // eax
  TESPackage *v12; // eax
  TESPackage *v13; // esi

  v5 = TESForm_LookupByFormID(formID); /*0x463ee9*/
  if ( v5 ) /*0x463ef3*/
    TESSaveLoadGame_DeleteForm(self, v5); /*0x463ef8*/
  else
    SaveLoadChangesMap_RemoveChanges(self->currentChangesMap, formID, 1); /*0x463f04*/
  switch ( packageType ) /*0x463f1a*/
  {
    case kPackageType_Combat: /*0x463f1a*/
      v6 = (CombatController *)FormHeapAlloc(0x1C0u); /*0x463f26*/
      if ( !v6 ) /*0x463f3c*/
        goto LABEL_17; /*0x463f3c*/
      v7 = (TESForm *)CombatController::CombatController(v6, (int)combatContext, 0, 0, 0.0); /*0x463f4f*/
      break; /*0x463f54*/
    case kPackageType_Alarm: /*0x463f1a*/
      v8 = (AlarmPackage *)FormHeapAlloc(0x40u); /*0x463f5b*/
      if ( !v8 ) /*0x463f71*/
        goto LABEL_17; /*0x463f71*/
      v7 = (TESForm *)AlarmPackage_Constructor(v8); /*0x463f79*/
      break; /*0x463f7e*/
    case kPackageType_Flee: /*0x463f1a*/
      v9 = (FleePackage *)FormHeapAlloc(0x68u); /*0x463f85*/
      if ( !v9 ) /*0x463f9b*/
        goto LABEL_17; /*0x463f9b*/
      v7 = (TESForm *)FleePackage::FleePackage(v9, 0, 0, 0); /*0x463fa5*/
      break; /*0x463faa*/
    case kPackageType_Trespass: /*0x463f1a*/
      v11 = (TrespassPackage *)FormHeapAlloc(0x58u); /*0x463fd1*/
      if ( !v11 ) /*0x463fe7*/
        goto LABEL_17; /*0x463fe7*/
      v7 = (TESForm *)TrespassPackage_Constructor(v11); /*0x463feb*/
      break; /*0x463ff0*/
    case kPackageType_Dialogue: /*0x463f1a*/
      v10 = (DialoguePackage *)FormHeapAlloc(0x64u); /*0x463fae*/
      if ( !v10 ) /*0x463fc4*/
        goto LABEL_17; /*0x463fc4*/
      v7 = (TESForm *)DialoguePackage_Constructor(v10); /*0x463fc8*/
      break; /*0x463fcd*/
    default:
      v12 = (TESPackage *)FormHeapAlloc(0x3Cu); /*0x463ff4*/
      if ( v12 ) /*0x46400a*/
        v7 = (TESForm *)TESPackage::TESPackage(v12); /*0x46400e*/
      else
LABEL_17:
        v7 = 0; /*0x464015*/
      break; /*0x464013*/
  }
  v13 = (TESPackage *)v7; /*0x464017*/
  TESForm_SetFormID(v7, formID, 1); /*0x464026*/
  return v13; /*0x46402d*/
}
