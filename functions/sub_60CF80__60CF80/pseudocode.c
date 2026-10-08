// Probable lifecycle phase naming: vtable3FC=InitLoadGame,400=FinishInitLoadGame supported by neighboring save/load/revert roles and Fallout BaseProcess FinishInitLoadGame8265D168 exact actor/no-package/procedure==-1 test. Verified local behavior: 60D780 resolves deferred package and bounds procedure;643810 resolves follow/other references;60CF80 evaluates package for nonplayer actor with missing package and procedure==-1. RET12 proves three stack args. Full external phase scheduling remains Unknown.
void __thiscall BaseProcess_FinishInitLoadGame(
        BaseProcess *self,
        unsigned int changeMask,
        unsigned int currentFlags,
        MobileObject *owner)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // edi
  double v7; // st5
  double v8; // st6
  double v9; // st7
  TESObjectREFR *v11; // eax

  v11 = (TESObjectREFR *)OblivionDynamicCast( /*0x60cf96*/
                           owner,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  if ( v11 ) /*0x60cfa0*/
  {
    if ( v11 != (TESObjectREFR *)reference && !self->editorPackage && self->editorPackProcedure == 0xFFFFFFFF ) /*0x60cfb4*/
    {
      self->editorPackProcedure = kProcedure_TRAVEL; /*0x60cfb8*/
      EvaluatePackage(v11, v4, v5, v6, v9, v7, v8); /*0x60cfbf*/
    }
  }
}
