char __cdecl Cmd_GetItemCount(TESObjectREFR *a1, TESForm *a2, int a3, double *a4)
{
  TESForm *v4; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  *a4 = 0.0;
  v4 = 0;
  if ( a2 )
  {
    if ( a2->vtbl->Unk_29(a2) )
      v4 = a2;
  }
  if ( a1 )
  {
    if ( v4 )
    {
      if ( TESObjectREFR_GetContainer(a1) )
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1);
        if ( ContainerExtraDataForRef )
          *a4 = (double)(int)abs32(ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v4));
      }
    }
  }
  if ( IsConsoleMode )
    Interface_ConsolePrint("GetItemCount >> %0.2f", *a4);
  return 1;
}
