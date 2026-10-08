// Probable lifecycle phase naming: vtable3FC=InitLoadGame,400=FinishInitLoadGame supported by neighboring save/load/revert roles and Fallout BaseProcess FinishInitLoadGame8265D168 exact actor/no-package/procedure==-1 test. Verified local behavior: 60D780 resolves deferred package and bounds procedure;643810 resolves follow/other references;60CF80 evaluates package for nonplayer actor with missing package and procedure==-1. RET12 proves three stack args. Full external phase scheduling remains Unknown.
void __thiscall LowProcess_InitLoadGame(
        LowProcess *self,
        unsigned int changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  Actor *follow; // eax
  TESForm *v6; // eax
  Actor *v7; // eax
  TESObjectREFR *unk030; // eax
  TESForm *v9; // eax

  BaseProcess_InitLoadGame(self, changeMask, currentFlags, owner); /*0x643824*/
  follow = self->follow; /*0x643829*/
  if ( follow ) /*0x64382e*/
  {
    v6 = TESForm_LookupByFormID((UInt32)follow); /*0x64383f*/
    v7 = (Actor *)OblivionDynamicCast( /*0x643848*/
                    v6,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                    0);
    self->follow = v7; /*0x643852*/
    if ( v7 ) /*0x643855*/
      Actor::SetCompressedFlag(v7, 1); /*0x64385b*/
  }
  unk030 = self->unk030; /*0x643860*/
  if ( unk030 ) /*0x643865*/
  {
    v9 = TESForm_LookupByFormID((UInt32)unk030); /*0x643876*/
    self->unk030 = (TESObjectREFR *)OblivionDynamicCast( /*0x643887*/
                                      v9,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                      0);
  }
}
