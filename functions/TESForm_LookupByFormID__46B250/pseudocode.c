// OBMEFix correction 2026-05-30: authoritative TESForm lookup by resolved FormID. OBMEFix uses this only in the active-effect load-salvage predicate to resolve vanilla-format saved magic-item FormID/effect index records and confirm SEFF before dropping a non-actor duration record.
TESForm *__cdecl TESForm_LookupByFormID(UInt32 a1)
{
  char v1; // al
  int v3; // [esp+0h] [ebp-4h] BYREF

  v3 = 0; /*0x46b25f*/
  v1 = NiTMap_GetAt(&TESForm_FormIDMap, a1, &v3);// NiTMap_GetAt(TESForm_FormIDMap, formID, &outForm); returns null on missing ID. /*0x46b267*/
  return v1 != 0 ? (TESForm *)v3 : 0;
}
