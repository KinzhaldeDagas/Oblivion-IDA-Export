//  Verified: keyed lookup of ChangeData by reference FormID. If flags bit 1 is set, copies a 36-byte initial-reference record from savedFormBuffer+4, resolves the two embedded FormIDs, creates the reference, and calls LoadForm unless RTTI identifies MagicProjectile (which it immediately deletes). Otherwise negative flags select the 44-byte moved-reference record; resolves primary/fallback location IDs, reconstructs from source-location override files, loads, then removes the reference ID from manager deferred list. Probable Fallout homolog BGSSaveLoadReferencesMap::LoadChangedReference at 825F9840; both classify a saved ref, consume its change-map buffer, create/move and load it. Verified divergence: Oblivion uses 36/44-byte records and FormID table; Fallout uses compact initial-data structs and BGS numeric ID indices. Verified: created data copy size 0x24; source is owned ChangeData buffer after 4-byte header. Payload structure attached as OblivionCreatedReferenceInitialData.
void __userpurge TESSaveLoadGame_RestoreChangedReference(
        TESSaveLoadGame_SerializationView *self@<ecx>,
        double arg2@<st2>,
        double arg3@<st1>,
        double arg4@<st0>,
        unsigned int referenceID)
{
  ChangesMap *changesMap; // ecx
  int v7; // esi
  TESForm *ReferenceFromInitialData; // eax
  int v9; // esi
  void *v10; // eax
  int v11; // esi
  TESObjectREFR *v12; // eax
  int *v13; // [esp+8h] [ebp-30h] BYREF
  OblivionMovedReferenceInitialData data; // [esp+Ch] [ebp-2Ch] BYREF

  changesMap = self->changesMap; /*0x463d7f*/
  v13 = 0; /*0x463d83*/
  NiTMap_GetAt(changesMap, referenceID, &v13); /*0x463d8b*/
  if ( v13 ) /*0x463d96*/
  {
    if ( (*v13 & 2) != 0 ) /*0x463da3*/
    {
      v7 = v13[1]; /*0x463da9*/
      if ( v7 ) /*0x463dae*/
      {
        qmemcpy(&data, (const void *)(v7 + 4), 0x24u); /*0x463dc0*/
        LODWORD(data.worldX) = sub_459950(self, LODWORD(data.worldX)); /*0x463dd5*/
        LODWORD(data.worldY) = sub_459950(self, LODWORD(data.worldY)); /*0x463dde*/
        ReferenceFromInitialData = TESSaveLoadGame_CreateReferenceFromInitialData( /*0x463dea*/
                                     self,
                                     arg2,
                                     arg3,
                                     referenceID,
                                     (OblivionCreatedReferenceInitialData *)&data);
        v9 = (int)ReferenceFromInitialData; /*0x463def*/
        if ( ReferenceFromInitialData ) /*0x463df3*/
        {
          v10 = OblivionDynamicCast( /*0x463e08*/
                  ReferenceFromInitialData,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &MagicProjectile `RTTI Type Descriptor',
                  0);
          if ( v10 ) /*0x463e12*/
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v10 + 0x10))(v10, 1); /*0x463e2a*/
          else
            TESSaveLoadGame_LoadForm(self, arg2, arg3, arg4, v9); /*0x463e2f*/
        }
      }
    }
    else if ( *v13 >= 0 ) /*0x463e40*/
    {
      PrintError("Reference in cell map has neither required flag."); /*0x463ea8*/
    }
    else
    {
      v11 = v13[1]; /*0x463e42*/
      if ( v11 ) /*0x463e47*/
      {
        qmemcpy(&data, (const void *)(v11 + 4), sizeof(data)); /*0x463e55*/
        data.primaryLocationFormID = sub_459950(self, data.primaryLocationFormID); /*0x463e6a*/
        data.fallbackLocationFormID = sub_459950(self, data.fallbackLocationFormID); /*0x463e73*/
        v12 = TESSaveLoadGame_RebuildReferenceFromLocationOverrides(referenceID, &data); /*0x463e7f*/
        if ( v12 ) /*0x463e86*/
          TESSaveLoadGame_LoadForm(self, arg2, arg3, arg4, (int)v12); /*0x463e8b*/
        BSSimpleList_Remove((int *)&self->unknown1C[4], referenceID); /*0x463e94*/
      }
    }
  }
}
