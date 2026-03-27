char __cdecl Cmd_GetSelf(int a1, int a2, TESObjectREFR *a3, int a4, int a5, int a6, double *refID)
{
  double *v7; // edi
  TESForm *v8; // eax

  v7 = refID;
  *refID = 0.0;
  refID = 0;
  if ( a3 )
  {
    if ( TESObjectREFR_IsPersistent_(a3)
      || (v8 = a3->vtbl->GetBaseForm(a3), !TESContainer_IsInventoryItemType(v8->member.type)) )
    {
      refID = (double *)a3->member.super.refID;
      sub_4F9FB0(&refID, v7);
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetSelf >> (%08x)", refID);
  return 1;
}
