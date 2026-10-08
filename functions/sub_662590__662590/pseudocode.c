// PlayerCharacter post-shot AMMO-consumption override. Takes only PlayerCharacter *this and independently queries GetEquippedAmmoData(1); it does not receive WEAP EntryData in EDI. God mode (g_godModeEnabled at 0x00B3BB06) skips the transaction. Otherwise it decrements/removes exactly one equipped AMMO item. Base Actor slot +0x2E8 is the shared no-op at 0x0060D0A0.
void __thiscall PlayerCharacter_ConsumeEquippedAmmoAfterShot(PlayerCharacter *this)
{
  ExtraDataList ***v2; // eax
  signed __int16 ExtraCount; // ax
  LowProcess *process; // ecx
  int v5; // edi
  BaseExtraList *data; // edi
  EntryData *v7; // eax
  ExtraDataList ***v8; // eax
  EntryData *v9; // eax
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // ebp
  EntryData *v11; // eax
  UInt32 ItemCount; // ebx
  EntryData *v13; // eax
  EntryData *v14; // eax

  if ( !g_godModeEnabled ) /*0x662590*/
  {
    v2 = (ExtraDataList ***)this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x6625ae*/
    ExtraCount = ExtraDataList_GetExtraCount(**v2);// Read ExtraCount from the active equipped AMMO EntryData's selected ExtraDataList, then compute remaining stack count as ExtraCount-1. /*0x6625b4*/
    process = this->super.super.super.process; /*0x6625b9*/
    v5 = ExtraCount - 1; /*0x6625bf*/
    if ( v5 >= 1 ) /*0x6625c7*/
    {
      v8 = (ExtraDataList ***)process->GetEquippedAmmoData(process, 1); /*0x662626*/
      ExtraDataList_SetExtraCount(**v8, v5);    // When at least one item remains in this extra-data stack, write the decremented ExtraCount back before inventory reconciliation. /*0x66262d*/
      v9 = (EntryData *)((int (__thiscall *)(LowProcess *))this->super.super.super.process->GetEquippedAmmoData)(this->super.super.super.process); /*0x662640*/
      Shared_SetDwordAtOffset04(v9, 1);         // On the copied equipped-AMMO EntryData returned by GetEquippedAmmoData, Shared_SetDwordAtOffset04 writes countDelta=1 before container-count reconciliation. /*0x662644*/
      if ( TESObjectREFR_GetContainer((TESObjectREFR *)this) ) /*0x66264b*/
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)this); /*0x66265c*/
        if ( ContainerExtraDataForRef ) /*0x662663*/
        {
          v11 = this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x662673*/
          ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, v11->type);// Read total count for the equipped AMMO form from container changes and reconcile a mismatch before final removal. /*0x662680*/
          if ( ItemCount != v5 + 1 ) /*0x662687*/
          {
            v13 = this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x662696*/
            ExtraContainerChanges_AdjustCountForForm(ContainerExtraDataForRef, v13->type, v5 - ItemCount + 1); /*0x6626a4*/
          }
        }
      }
      v14 = this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x6626b8*/
      this->vtbl->super.super.super.RemoveItem((TESObjectREFR *)this, v14->type, 0, 1, 0, 0, 0, 0, 0, 1, 0);// Player post-shot transaction removes exactly one equipped AMMO form through virtual TESObjectREFR::RemoveItem. /*0x6626da*/
    }
    else
    {
      data = (BaseExtraList *)process->GetEquippedAmmoData(process, 1)->extendData->node.data; /*0x6625d5*/
      v7 = this->super.super.super.process->GetEquippedAmmoData(this->super.super.super.process, 1); /*0x6625e4*/
      this->vtbl->super.super.super.RemoveItem((TESObjectREFR *)this, v7->type, data, 1, 0, 0, 0, 0, 0, 1, 0);// Final-item branch: remove exactly one AMMO form using the selected equipped ammo ExtraDataList; this branch runs when ExtraCount-1 is below one. /*0x662605*/
      PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval();// After selected-list removal of the final AMMO item, reconcile the player's eight hotkey/quickslot bindings so stale inventory bindings are cleared. /*0x662607*/
      this->super.super.super.process->setEquippedAmmoData(this->super.super.super.process, 0);// Calls MiddleHighProcess_SetEquippedAmmoData(NULL): destroys/frees the process's copied equipped-AMMO EntryData and stores NULL. This call does not itself clear hand/quiver 3D. /*0x662619*/
    }
  }
}
