char __cdecl sub_4F4A00(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESForm *v7; // eax
  TESForm *v8; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  *a4 = 0.0;
  v7 = TESDataHandler_LookupFormByID((TESForm *)0xF);
  v8 = v7;
  if ( a1 )
  {
    if ( v7 )
    {
      if ( TESObjectREFR_GetContainer(a1) )
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1);
        if ( ContainerExtraDataForRef )
          *a4 = (double)(int)ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v8);
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetGold >> %0.2f", *a4);
  return 1;
}
