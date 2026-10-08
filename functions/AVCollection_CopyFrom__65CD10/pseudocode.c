// Verified: deep copy clears destination list/indexed storage first; for nonnull source copies ID10/ID9 values then allocates/clones indexed entries and list entries through Add. NULL source leaves dedicated values unchanged after clearing other storage. No self-copy guard. Source/destination alias therefore does not preserve list/indexed entries. Probable homolog Fallout SetAllModifiers 0x826B7730; Fallout lacks dedicated-node phase and uses different fast storage.
void __thiscall AVCollection_CopyFrom(AVCollection *self, const AVCollection *source)
{
  const AVCollection *next; // esi
  AVCollectionEntry *actorValue0A; // eax
  double value; // st7
  AVCollectionEntry *actorValue09; // eax
  double v7; // st7
  AVCollectionIndex *indexedEntries; // eax
  AVCollectionEntry *v9; // eax
  AVCollectionEntry *v10; // ecx
  AVCollectionEntry *v11; // eax
  AVCollectionEntry *v12; // ecx
  AVCollectionEntry *v13; // eax
  AVCollectionEntry *v14; // ecx
  AVCollectionEntry *v15; // eax
  AVCollectionEntry *v16; // ecx
  AVCollectionEntry *v17; // eax
  AVCollectionEntry *v18; // ecx
  AVCollectionEntry *v19; // eax
  AVCollectionEntry *v20; // ecx
  AVCollectionEntry *v21; // eax
  AVCollectionEntry *v22; // ecx
  AVCollectionEntry *v23; // eax
  AVCollectionEntry *v24; // ecx
  AVCollectionEntry *v25; // eax
  AVCollectionEntry *v26; // ecx
  AVCollectionEntry *v27; // eax
  AVCollectionEntry *v28; // ecx
  AVCollectionEntry *v29; // eax
  AVCollectionEntry *v30; // ecx
  AVCollectionEntry *v31; // eax
  AVCollectionEntry *v32; // ecx
  AVCollectionEntry *v33; // eax
  AVCollectionEntry *v34; // ecx
  AVCollectionEntry *v35; // eax
  AVCollectionEntry *v36; // ecx
  AVCollectionEntry *v37; // eax
  AVCollectionEntry *v38; // ecx
  AVCollectionEntry *v39; // eax
  AVCollectionEntry *v40; // ecx
  AVCollectionEntry *v41; // eax
  AVCollectionEntry *v42; // ecx
  AVCollectionEntry *v43; // eax
  AVCollectionEntry *v44; // ecx
  AVCollectionEntry *entry; // edi
  AVCollectionEntry *v46; // eax
  float sourcea; // [esp+10h] [ebp+4h]
  float sourceb; // [esp+10h] [ebp+4h]

  AVCollection_ClearArrayAndList(self); /*0x65cd14*/
  next = source; /*0x65cd19*/
  if ( source ) /*0x65cd1f*/
  {
    actorValue0A = source->fatigue; /*0x65cd25*/
    if ( actorValue0A ) /*0x65cd2a*/
      value = actorValue0A->value; /*0x65cd2c*/
    else
      value = 0.0; /*0x65cd31*/
    sourcea = value; /*0x65cd33*/
    AVCollection_SetValue(self, 0xA, sourcea); /*0x65cd43*/
    actorValue09 = next->magicka; /*0x65cd48*/
    if ( actorValue09 ) /*0x65cd4d*/
      v7 = actorValue09->value; /*0x65cd4f*/
    else
      v7 = 0.0; /*0x65cd54*/
    sourceb = v7; /*0x65cd56*/
    AVCollection_SetValue(self, 9, sourceb); /*0x65cd66*/
    indexedEntries = next->indexedEntries; /*0x65cd6b*/
    if ( indexedEntries ) /*0x65cd70*/
    {
      if ( indexedEntries->health[0] ) /*0x65cd76*/
      {
        v9 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cd7d*/
        if ( v9 ) /*0x65cd87*/
        {
          v10 = next->indexedEntries->health[0]; /*0x65cd8c*/
          v9->actorValue = v10->actorValue; /*0x65cd90*/
          v9->value = v10->value; /*0x65cd95*/
        }
        else
        {
          v9 = 0; /*0x65cd9a*/
        }
        AVCollection_Add(self, v9); /*0x65cd9f*/
      }
      if ( next->indexedEntries->health[1] ) /*0x65cda7*/
      {
        v11 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cdaf*/
        if ( v11 ) /*0x65cdb9*/
        {
          v12 = next->indexedEntries->health[1]; /*0x65cdbe*/
          v11->actorValue = v12->actorValue; /*0x65cdc3*/
          v11->value = v12->value; /*0x65cdc8*/
        }
        else
        {
          v11 = 0; /*0x65cdcd*/
        }
        AVCollection_Add(self, v11); /*0x65cdd2*/
      }
      if ( next->indexedEntries->health[2] ) /*0x65cdda*/
      {
        v13 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cde2*/
        if ( v13 ) /*0x65cdec*/
        {
          v14 = next->indexedEntries->health[2]; /*0x65cdf1*/
          v13->actorValue = v14->actorValue; /*0x65cdf6*/
          v13->value = v14->value; /*0x65cdfb*/
        }
        else
        {
          v13 = 0; /*0x65ce00*/
        }
        AVCollection_Add(self, v13); /*0x65ce05*/
      }
      if ( next->indexedEntries->health[3] ) /*0x65ce0d*/
      {
        v15 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65ce15*/
        if ( v15 ) /*0x65ce1f*/
        {
          v16 = next->indexedEntries->health[3]; /*0x65ce24*/
          v15->actorValue = v16->actorValue; /*0x65ce29*/
          v15->value = v16->value; /*0x65ce2e*/
        }
        else
        {
          v15 = 0; /*0x65ce33*/
        }
        AVCollection_Add(self, v15); /*0x65ce38*/
      }
      if ( next->indexedEntries->health[4] ) /*0x65ce40*/
      {
        v17 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65ce48*/
        if ( v17 ) /*0x65ce52*/
        {
          v18 = next->indexedEntries->health[4]; /*0x65ce57*/
          v17->actorValue = v18->actorValue; /*0x65ce5c*/
          v17->value = v18->value; /*0x65ce61*/
        }
        else
        {
          v17 = 0; /*0x65ce66*/
        }
        AVCollection_Add(self, v17); /*0x65ce6b*/
      }
      if ( next->indexedEntries->health[5] ) /*0x65ce73*/
      {
        v19 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65ce7b*/
        if ( v19 ) /*0x65ce85*/
        {
          v20 = next->indexedEntries->health[5]; /*0x65ce8a*/
          v19->actorValue = v20->actorValue; /*0x65ce8f*/
          v19->value = v20->value; /*0x65ce94*/
        }
        else
        {
          v19 = 0; /*0x65ce99*/
        }
        AVCollection_Add(self, v19); /*0x65ce9e*/
      }
      if ( next->indexedEntries->health[6] ) /*0x65cea6*/
      {
        v21 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65ceae*/
        if ( v21 ) /*0x65ceb8*/
        {
          v22 = next->indexedEntries->health[6]; /*0x65cebd*/
          v21->actorValue = v22->actorValue; /*0x65cec2*/
          v21->value = v22->value; /*0x65cec7*/
        }
        else
        {
          v21 = 0; /*0x65cecc*/
        }
        AVCollection_Add(self, v21); /*0x65ced1*/
      }
      if ( next->indexedEntries->health[7] ) /*0x65ced9*/
      {
        v23 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cee1*/
        if ( v23 ) /*0x65ceeb*/
        {
          v24 = next->indexedEntries->health[7]; /*0x65cef0*/
          v23->actorValue = v24->actorValue; /*0x65cef5*/
          v23->value = v24->value; /*0x65cefa*/
        }
        else
        {
          v23 = 0; /*0x65ceff*/
        }
        AVCollection_Add(self, v23); /*0x65cf04*/
      }
      if ( next->indexedEntries->health[8] ) /*0x65cf0c*/
      {
        v25 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cf14*/
        if ( v25 ) /*0x65cf1e*/
        {
          v26 = next->indexedEntries->health[8]; /*0x65cf23*/
          v25->actorValue = v26->actorValue; /*0x65cf28*/
          v25->value = v26->value; /*0x65cf2d*/
        }
        else
        {
          v25 = 0; /*0x65cf32*/
        }
        AVCollection_Add(self, v25); /*0x65cf37*/
      }
      if ( next->indexedEntries->health[9] ) /*0x65cf3f*/
      {
        v27 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cf47*/
        if ( v27 ) /*0x65cf51*/
        {
          v28 = next->indexedEntries->health[9]; /*0x65cf56*/
          v27->actorValue = v28->actorValue; /*0x65cf5b*/
          v27->value = v28->value; /*0x65cf60*/
        }
        else
        {
          v27 = 0; /*0x65cf65*/
        }
        AVCollection_Add(self, v27); /*0x65cf6a*/
      }
      if ( next->indexedEntries->health[0xA] ) /*0x65cf72*/
      {
        v29 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cf7a*/
        if ( v29 ) /*0x65cf84*/
        {
          v30 = next->indexedEntries->health[0xA]; /*0x65cf89*/
          v29->actorValue = v30->actorValue; /*0x65cf8e*/
          v29->value = v30->value; /*0x65cf93*/
        }
        else
        {
          v29 = 0; /*0x65cf98*/
        }
        AVCollection_Add(self, v29); /*0x65cf9d*/
      }
      if ( next->indexedEntries->health[0xB] ) /*0x65cfa5*/
      {
        v31 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cfad*/
        if ( v31 ) /*0x65cfb7*/
        {
          v32 = next->indexedEntries->health[0xB]; /*0x65cfbc*/
          v31->actorValue = v32->actorValue; /*0x65cfc1*/
          v31->value = v32->value; /*0x65cfc6*/
        }
        else
        {
          v31 = 0; /*0x65cfcb*/
        }
        AVCollection_Add(self, v31); /*0x65cfd0*/
      }
      if ( next->indexedEntries->health[0xC] ) /*0x65cfd8*/
      {
        v33 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65cfe0*/
        if ( v33 ) /*0x65cfea*/
        {
          v34 = next->indexedEntries->health[0xC]; /*0x65cfef*/
          v33->actorValue = v34->actorValue; /*0x65cff4*/
          v33->value = v34->value; /*0x65cff9*/
        }
        else
        {
          v33 = 0; /*0x65cffe*/
        }
        AVCollection_Add(self, v33); /*0x65d003*/
      }
      if ( next->indexedEntries->health[0xD] ) /*0x65d00b*/
      {
        v35 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d013*/
        if ( v35 ) /*0x65d01d*/
        {
          v36 = next->indexedEntries->health[0xD]; /*0x65d022*/
          v35->actorValue = v36->actorValue; /*0x65d027*/
          v35->value = v36->value; /*0x65d02c*/
        }
        else
        {
          v35 = 0; /*0x65d031*/
        }
        AVCollection_Add(self, v35); /*0x65d036*/
      }
      if ( next->indexedEntries->health[0xE] ) /*0x65d03e*/
      {
        v37 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d046*/
        if ( v37 ) /*0x65d050*/
        {
          v38 = next->indexedEntries->health[0xE]; /*0x65d055*/
          v37->actorValue = v38->actorValue; /*0x65d05a*/
          v37->value = v38->value; /*0x65d05f*/
        }
        else
        {
          v37 = 0; /*0x65d064*/
        }
        AVCollection_Add(self, v37); /*0x65d069*/
      }
      if ( next->indexedEntries->health[0xF] ) /*0x65d071*/
      {
        v39 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d079*/
        if ( v39 ) /*0x65d083*/
        {
          v40 = next->indexedEntries->health[0xF]; /*0x65d088*/
          v39->actorValue = v40->actorValue; /*0x65d08d*/
          v39->value = v40->value; /*0x65d092*/
        }
        else
        {
          v39 = 0; /*0x65d097*/
        }
        AVCollection_Add(self, v39); /*0x65d09c*/
      }
      if ( next->indexedEntries->health[0x10] ) /*0x65d0a4*/
      {
        v41 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d0ac*/
        if ( v41 ) /*0x65d0b6*/
        {
          v42 = next->indexedEntries->health[0x10]; /*0x65d0bb*/
          v41->actorValue = v42->actorValue; /*0x65d0c0*/
          v41->value = v42->value; /*0x65d0c5*/
        }
        else
        {
          v41 = 0; /*0x65d0ca*/
        }
        AVCollection_Add(self, v41); /*0x65d0cf*/
      }
      if ( next->indexedEntries->health[0x11] ) /*0x65d0d7*/
      {
        v43 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d0df*/
        if ( v43 ) /*0x65d0e9*/
        {
          v44 = next->indexedEntries->health[0x11]; /*0x65d0ee*/
          v43->actorValue = v44->actorValue; /*0x65d0f3*/
          v43->value = v44->value; /*0x65d0f8*/
        }
        else
        {
          v43 = 0; /*0x65d0fd*/
        }
        AVCollection_Add(self, v43); /*0x65d102*/
      }
    }
    do /*0x65d137*/
    {
      entry = next->list.entry; /*0x65d108*/
      if ( !next->list.entry ) /*0x65d108*/
        break; /*0x65d10c*/
      v46 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65d110*/
      if ( v46 ) /*0x65d11a*/
      {
        v46->actorValue = entry->actorValue; /*0x65d11e*/
        v46->value = entry->value; /*0x65d123*/
      }
      else
      {
        v46 = 0; /*0x65d128*/
      }
      AVCollection_Add(self, v46); /*0x65d12d*/
      next = (const AVCollection *)next->list.next; /*0x65d132*/
    }
    while ( next ); /*0x65d137*/
  }
}
