// Set or create ExtraReferencePointer (type 0x22) in one logical function, now merged through 0x41FAF4. This extra preserves persistent-reference provenance inside an already form-keyed inventory entry; it does not override EntryData.type or sourceRef->baseForm and therefore cannot restore a thrown proxy AMMO to its source WEAP.
void __thiscall ExtraDataList_SetReferencePointer(ExtraDataList *this, TESObjectREFR *reference)
{                                               // Outside the special global mode, a non-null target must be persistent; otherwise no ExtraReferencePointer is stored. Null is allowed and existing payloads can be cleared.
  BSExtraData *ExtraData; // eax
  ExtraReferencePointer *v4; // eax
  ExtraReferencePointer *v5; // eax

  if ( sub_45A500(g_TESSaveLoadGame) || !reference || TESObjectREFR_IsPersistent(reference) ) /*0x41fa7d*/
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer);// Lookup/create ExtraReferencePointer type 0x22. /*0x41fa8a*/
    if ( ExtraData ) /*0x41fa91*/
    {
      ExtraData[1].vtbl = (BSExtraDataVtbl *)reference; /*0x41fadd*/
    }
    else
    {
      v4 = (ExtraReferencePointer *)FormHeapAlloc(0x10u); /*0x41fa95*/
      if ( v4 ) /*0x41faab*/
        v5 = ExtraReferencePointer_ctor(v4, reference); /*0x41fab0*/
      else
        v5 = 0; /*0x41fab7*/
      BaseExtraList_AddExtra(this, &v5->base); /*0x41fac4*/
    }
  }
}
