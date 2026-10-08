// Verified PathGrid clone override: delegates to TESForm_Clone then RTTI-casts the duplicate to TESPathGrid. No graph-copy/rebuild is performed in this tiny override; subsequent graph population is handled by normal form loading.
TESPathGrid *__thiscall TESPathGrid_CreateDuplicateForm(TESPathGrid *this, int cloneFlags, void *cloneMap)
{
  TESForm *v3; // eax

  v3 = TESForm_Clone(&this->base, 0, cloneMap); /*0x4e4955*/
  return (TESPathGrid *)OblivionDynamicCast( /*0x4e4963*/
                          v3,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESPathGrid `RTTI Type Descriptor',
                          0);
}
