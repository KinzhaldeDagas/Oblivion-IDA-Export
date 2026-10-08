// Probable lifecycle phase naming: vtable3FC=InitLoadGame,400=FinishInitLoadGame supported by neighboring save/load/revert roles and Fallout BaseProcess FinishInitLoadGame8265D168 exact actor/no-package/procedure==-1 test. Verified local behavior: 60D780 resolves deferred package and bounds procedure;643810 resolves follow/other references;60CF80 evaluates package for nonplayer actor with missing package and procedure==-1. RET12 proves three stack args. Full external phase scheduling remains Unknown.
void __thiscall BaseProcess_InitLoadGame(
        BaseProcess *self,
        unsigned int changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  TESPackage *editorPackage; // eax
  TESForm *v6; // eax
  TESPackage *v7; // eax
  eProcedure v8; // eax

  editorPackage = self->editorPackage; /*0x60d783*/
  if ( editorPackage ) /*0x60d788*/
  {
    if ( (changeMask & 0x20000) != 0 ) /*0x60d794*/
    {
      if ( (changeMask & 0x10000) != 0 ) /*0x60d79c*/
      {
        v6 = TESForm_LookupByFormID((UInt32)editorPackage); /*0x60d7ad*/
        self->editorPackage = (TESPackage *)OblivionDynamicCast( /*0x60d7be*/
                                              v6,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESPackage `RTTI Type Descriptor',
                                              0);
      }
      else if ( TESDataHandler_IsFormIDCreated_(editorPackage->members.super.refID) ) /*0x60d7cd*/
      {
        self->editorPackage->__vftable->InitLoadGame(self->editorPackage); /*0x60d7e1*/
      }
    }
    v7 = self->editorPackage; /*0x60d7e3*/
    if ( v7 ) /*0x60d7e8*/
    {
      v8 = sub_673980(v7->members.procedureArrayIndex); /*0x60d7ee*/
      if ( self->editorPackProcedure >= v8 ) /*0x60d7f9*/
        self->editorPackProcedure = v8 - 1; /*0x60d7fe*/
    }
  }
}
