// GetItemCount_Eval (index 47 / opcode 0x102F), used 54 times in vanilla core dialogue. Requires a valid item form, a container subject, and ContainerChanges data; returns abs(base TESContainer count plus EntryData.countDelta). If no ContainerChanges data exists it returns 0. Fallout's analogue x4y6:0x823BCE90 also has a special form-type-85 leveled-list expansion loop; this Oblivion handler performs only a single lookup for the supplied ObjectID.
char __cdecl GetItemCount_Eval(TESObjectREFR *subject, TESForm *objectID, TESForm *param2, double *value)
{
  TESForm *v4; // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax

  *value = 0.0; /*0x4f48f7*/
  v4 = 0; /*0x4f48ff*/
  if ( objectID ) /*0x4f4903*/
  {
    if ( objectID->vtbl->Unk_29(objectID) ) /*0x4f490f*/
      v4 = objectID; /*0x4f4915*/
  }
  if ( subject ) /*0x4f491d*/
  {
    if ( v4 ) /*0x4f4921*/
    {
      if ( TESObjectREFR_GetContainer(subject) ) /*0x4f4925*/
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(subject); /*0x4f4930*/
        if ( ContainerExtraDataForRef ) /*0x4f493a*/
          *value = (double)(int)abs32(ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v4)); /*0x4f4951*/
      }
    }
  }
  if ( MEMORY[0xB361AC] ) /*0x4f4953*/
    Interface_ConsolePrint("GetItemCount >> %0.2f", *value); /*0x4f4969*/
  return 1; /*0x4f4971*/
}
