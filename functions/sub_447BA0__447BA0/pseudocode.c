// Verified TESObjectCELL deactivation path. Removes cell temp effects, lowers its process level, invokes cell teardown, clears pathgrid graph/render resources, removes the scene node and inactive cell forms, then for exteriors asks TESWorldSpace_UnloadExteriorCellIfEligible to either preserve or remove the cell. Nine call sites are in world/cell transition and TES destruction paths; inspect xrefs for the full lifecycle context.
void __userpurge TESObjectCELL_Deactivate(double st5_0@<st2>, double a2@<st1>, double a3@<st0>, TESObjectCELL *a1)
{
  TESForm *v4; // eax
  unsigned int **v5; // eax
  TESWorldSpace *WorldSpace; // eax

  if ( a1 ) /*0x447ba7*/
  {
    if ( (a1->members.super.flags & 0x20) == 0 ) /*0x447bb5*/
    {
      ActorProcessManager_RemoveTempEffectsForCell((ActorProcessManager *)&qword_B3BB2C[0x75], a1); /*0x447bc1*/
      a1->members.cellProcessLevel = 1; /*0x447bc8*/
      sub_4CB4D0(a1); /*0x447bcc*/
      if ( !g_TESDataHandler->unknownC0[0xC14] ) /*0x447bd7*/
        sub_4CB010(a1, st5_0, a2, a3, 1); /*0x447be4*/
      v4 = (TESForm *)sub_4AF170(a1); /*0x447beb*/
      if ( v4 ) /*0x447bf2*/
        TESPathGrid_ClearGraphOnCellUnload(v4); // Verified PathGrid lifecycle edge: cell deactivation obtains the cell's TESPathGrid and calls TESPathGrid_ClearGraphOnCellUnload before interior/exterior content teardown. /*0x447bf6*/
      if ( !TESObjectCELL_IsInterior(a1) ) /*0x447bfd*/
      {
        v5 = (unsigned int **)sub_4CE3C0(a1); /*0x447c08*/
        sub_4C6280(v5); /*0x447c0f*/
      }
      TESObjectCELL_DestroySceneNode(a1); /*0x447c16*/
      if ( TESObjectCELL_IsInterior(a1) ) /*0x447c1d*/
      {
        TESObjectCELL_ClearInactiveRuntimeForms(a1); /*0x447c28*/
      }
      else
      {
        WorldSpace = TESObjectCELL_GetWorldSpace(a1); /*0x447c32*/
        TESWorldSpace_UnloadExteriorCellIfEligible(WorldSpace, (TESForm *)a1);// Verified exterior unload edge: after deactivation cleanup, passes the cell and owning TESWorldSpace into TESWorldSpace_UnloadExteriorCellIfEligible; map removal and destruction occur only for absent/master winning overrides. /*0x447c39*/
      }
    }
  }
}
