char __cdecl sub_4F4A00(TESObjectREFR *a1, int a2, int a3, double *a4)
{
  TESForm *v4; // eax
  TESForm *v5; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  *a4 = 0.0; /*0x4f4a07*/
  v4 = TESDataHandler_LookupFormByID((TESForm *)0xF); /*0x4f4a13*/
  v5 = v4; /*0x4f4a1e*/
  if ( a1 ) /*0x4f4a20*/
  {
    if ( v4 ) /*0x4f4a24*/
    {
      if ( TESObjectREFR_GetContainer(a1) ) /*0x4f4a28*/
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x4f4a33*/
        if ( ContainerExtraDataForRef ) /*0x4f4a3d*/
          *a4 = (double)(int)ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v5); /*0x4f4a4f*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4a51*/
    Interface_ConsolePrint("GetGold >> %0.2f", *a4); /*0x4f4a67*/
  return 1; /*0x4f4a6f*/
}
