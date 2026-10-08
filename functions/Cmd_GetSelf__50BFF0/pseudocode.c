char __cdecl Cmd_GetSelf(int a1, int a2, TESObjectREFR *a3, int a4, int a5, int a6, double *refID)
{
  double *v7; // edi
  TESForm *v8; // eax

  v7 = refID; /*0x50bffa*/
  *refID = 0.0; /*0x50bffe*/
  refID = 0; /*0x50c000*/
  if ( a3 ) /*0x50c008*/
  {
    if ( TESObjectREFR_IsPersistent(a3) /*0x50c026*/
      || (v8 = a3->vtbl->GetBaseForm(a3), !TESContainer_IsInventoryItemType(v8->member.type)) )
    {
      refID = (double *)a3->member.super.refID; /*0x50c03b*/
      sub_4F9FB0(&refID, v7); /*0x50c03f*/
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x50c047*/
    Interface_ConsolePrint("GetSelf >> (%08x)", refID); /*0x50c05c*/
  return 1; /*0x50c04e*/
}
