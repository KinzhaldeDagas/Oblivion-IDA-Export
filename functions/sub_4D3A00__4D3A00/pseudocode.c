// Verified Oblivion clone helper: scans the persistent cell's reference list, maps each reference position to a destination exterior cell, and adds the reference there. Probable structural analogue in Fallout is TESObjectCELL::AssignPersistentRefsToCellsInWorld, called from Fallout TESWorldSpace::CreateDuplicateForm; it does not correspond to Oblivion's SubSpace spatial index.
void __thiscall TESWorldSpace_DistributePersistentCellReferences(
        TESObjectCELL *persistentCell,
        TESWorldSpace *destinationWorldSpace)
{
  TESObjectREFR *refr; // esi
  int v4; // edi
  int v5; // ebx
  TESObjectCELL *CellAtCellCoord; // eax
  int v7; // eax
  const char *v8; // eax
  int v9; // [esp-18h] [ebp-2Ch]
  const char *v10; // [esp-14h] [ebp-28h]
  int v11; // [esp-10h] [ebp-24h]
  ObjectListEntry *p_objectList; // [esp+4h] [ebp-10h]
  UInt32 refID; // [esp+10h] [ebp-4h]

  if ( destinationWorldSpace ) /*0x4d3a0b*/
  {
    if ( (persistentCell->members.super.flags & 0x400) != 0 ) /*0x4d3a18*/
    {
      sub_496EA0((char *)&unk_B35C80, persistentCell); /*0x4d3a24*/
      p_objectList = &persistentCell->members.objectList; /*0x4d3a2e*/
      if ( persistentCell != (TESObjectCELL *)0xFFFFFFB8 ) /*0x4d3a32*/
      {
        do /*0x4d3af1*/
        {
          refr = p_objectList->refr; /*0x4d3a44*/
          if ( p_objectList->refr ) /*0x4d3a44*/
          {
            v4 = (int)*refr->vtbl->GetPos(p_objectList->refr) >> 0xC; /*0x4d3a76*/
            v5 = (int)refr->vtbl->GetPos(refr)[1] >> 0xC; /*0x4d3a92*/
            CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(destinationWorldSpace, v4, v5); /*0x4d3a97*/
            if ( CellAtCellCoord ) /*0x4d3a9e*/
            {
              TESObjectCELL_AddReference(CellAtCellCoord, refr); /*0x4d3aa3*/
            }
            else
            {
              refID = persistentCell->members.super.refID; /*0x4d3ab2*/
              v7 = ((int (__thiscall *)(TESObjectREFR *, UInt32))refr->vtbl->super.GetEditorName)( /*0x4d3abf*/
                     refr,
                     refr->member.super.refID);
              v8 = (const char *)((int (__thiscall *)(TESObjectCELL *, UInt32, int))persistentCell->vtbl->GetEditorName)( /*0x4d3ad2*/
                                   persistentCell,
                                   refID,
                                   v7);
              PrintError( /*0x4d3adc*/
                "Could not find cell (%i, %i) in world '%s' (%08X) to add reference '%s' (%08X) to.",
                v4,
                v5,
                v8,
                v9,
                v10,
                v11);
            }
          }
          p_objectList = p_objectList->next; /*0x4d3aed*/
        }
        while ( p_objectList ); /*0x4d3af1*/
      }
      sub_496F50(&unk_B35C80, persistentCell); /*0x4d3b00*/
    }
  }
}
