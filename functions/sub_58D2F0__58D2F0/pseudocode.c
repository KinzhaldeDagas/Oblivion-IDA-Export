// Verified 2026-10-07: AddPair role promoted from Probable after inspecting full token-history rewrite. Tracks last three template items. Closing a literal trait/action replaces opener with SetTrait0x32 or LiteralAction0x37, transfers payload, removes temporary item. Closing action preceded by0xBBB/0xBBC folds into ReferenceAction0x3C with selector string, source-trait number and operator argument. Name token0xBBA turns tile opener into BeginTile0x28; type999 enters/exits named-template construction. Fallout0x827DF340 follows analogous folds but different command IDs/pooling. Unknown: malformed-input edge coverage and exact behavior for all user-defined tokens.
void __thiscall Tile::TileTemplate::AddPair(
        OblivionTileTemplate *this,
        unsigned int command,
        const char *text,
        unsigned int sourceLine,
        bool preserveStrings)
{
  OblivionTileTemplateItem *v5; // edi
  unsigned int v6; // eax
  OblivionTileTemplateItem *v7; // ebp
  int v8; // edx
  char v9; // al
  OblivionTileTemplate *v10; // edx
  OblivionTileTemplateItemNode *tail; // eax
  OblivionTileTemplateItem *item; // ebx
  OblivionTileTemplateItem *v13; // esi
  OblivionTileTemplateItem *v14; // edi
  OblivionTileTemplateItemNode *previous; // eax
  OblivionTileTemplateItemNode *v16; // eax
  OblivionTileBuildStorage *v17; // ecx
  OblivionTileTemplate *v18; // esi
  OblivionTileTemplate *SubTemplateByName; // eax
  OblivionTileBuildStorage *v20; // edx
  OblivionTileTemplateItemNode *v21; // eax
  OblivionTileTemplateItemNode *v22; // ecx
  OblivionTileTemplateItemList *v23; // esi
  unsigned int v24; // edi
  double v25; // st7
  OblivionTileBuildStorage *storage; // eax
  OblivionTileTemplateItemList *v27; // esi
  OblivionTileTemplateItemNode *v28; // eax
  OblivionTileTemplateItemNode *v29; // ecx
  unsigned int v30; // esi
  double v31; // st7
  OblivionTileTemplateItemList *p_items; // edi
  int v33; // eax
  unsigned int v34; // esi
  unsigned int v35; // esi
  int trait; // eax
  OblivionTileTemplateItemNode *v37; // ecx
  float number; // [esp+24h] [ebp-14h] BYREF
  OblivionTileTemplate *v39; // [esp+28h] [ebp-10h]
  unsigned int v40; // [esp+34h] [ebp-4h]

  v39 = this; /*0x58d317*/
  number = 0.0; /*0x58d326*/
  if ( preserveStrings || (number = (float)TileStringToStringID((unsigned __int8 *)text), 0.0 == number) ) /*0x58d34c*/
  {
    if ( *text == 0x5F ) /*0x58d351*/
      number = (float)(int)Tile::AddUserTrait(text, 0xFFFFFFFF); /*0x58d366*/
  }
  v5 = (OblivionTileTemplateItem *)FormHeapAlloc(0x18u); /*0x58d371*/
  v40 = 0; /*0x58d37c*/
  if ( v5 ) /*0x58d384*/
  {
    v6 = Double_To_SInt32(number); /*0x58d391*/
    v7 = Tile::TileTemplateItem::Initialize(v5, command, number, text, v6, sourceLine); /*0x58d3a8*/
  }
  else
  {
    v7 = 0; /*0x58d3ac*/
  }
  v40 = 0xFFFFFFFF; /*0x58d3b0*/
  v8 = 0; /*0x58d3b8*/
  if ( strlen(text) ) /*0x58d3ba*/
  {
    while ( 1 ) /*0x58d3d0*/
    {
      v9 = text[v8]; /*0x58d3d0*/
      if ( (v9 < 0x30 || v9 > 0x39) && v9 != 0x2D && v9 != 0x2E ) /*0x58d3e1*/
        break; /*0x58d3e1*/
      if ( ++v8 >= strlen(text) ) /*0x58d3fd*/
        goto LABEL_14; /*0x58d3fd*/
    }
  }
  else
  {
LABEL_14:
    if ( kTerrainLODQuadRayDirectionZ == number ) /*0x58d40e*/
      sscanf(text, "%f", &number); /*0x58d41b*/
    if ( 0.0 == number ) /*0x58d42e*/
      sscanf(text, "%f", &number); /*0x58d43b*/
    BSStringT_Set(&v7->text, EmptyString, 0); /*0x58d44d*/
    v7->number = number; /*0x58d456*/
    v7->argument.trait = Double_To_SInt32(number); /*0x58d462*/
  }
  v10 = v39; /*0x58d465*/
  tail = v39->items.tail; /*0x58d469*/
  item = 0; /*0x58d46c*/
  v13 = 0; /*0x58d46e*/
  v14 = 0; /*0x58d470*/
  if ( tail ) /*0x58d474*/
  {
    item = tail->item; /*0x58d476*/
    previous = tail->previous; /*0x58d47c*/
    if ( previous ) /*0x58d481*/
    {
      v13 = previous->item; /*0x58d483*/
      v16 = previous->previous; /*0x58d489*/
      if ( v16 ) /*0x58d48e*/
        v14 = v16->item; /*0x58d490*/
    }
  }
  if ( command != 0xBBA ) /*0x58d49c*/
  {
    if ( command == 0xF ) /*0x58d570*/
    {
      v25 = number; /*0x58d576*/
      if ( number == dbl_A6ACF8 ) /*0x58d585*/
      {
        storage = v39->storage; /*0x58d58b*/
        if ( storage->currentTemplate ) /*0x58d58e*/
        {
          storage->currentTemplate = 0; /*0x58d59c*/
          if ( !v7 ) /*0x58d5a3*/
            return; /*0x58d5a3*/
          goto LABEL_77; /*0x58d5a3*/
        }
      }
      if ( item ) /*0x58d671*/
      {
        if ( item->command == 0xBB9 /*0x58d6a9*/
          && v13
          && (v13->command == OblivionTemplate_BeginTrait || v13->command == OblivionTemplate_BeginGroup)
          && v25 == v13->number )
        {
          if ( (v7->number < dbl_A6ACA8 || flt_A6ACA0 < (double)v7->number) && (int)v7->argument.trait < 0x2710 ) /*0x58d6d8*/
          {
            if ( v7->number < dbl_A6AC98 || v7->number > dbl_A6AC90 ) /*0x58d700*/
            {
              v13->command = 0xFFFFFFFF; /*0x58d70f*/
              PrintError("Bad trait/action type in XML"); /*0x58d715*/
            }
            else
            {
              v13->command = OblivionTemplate_LiteralAction; /*0x58d702*/
            }
          }
          else
          {
            v13->command = OblivionTemplate_SetTrait; /*0x58d6da*/
          }
          v13->argument.trait = Double_To_SInt32(v13->number); /*0x58d725*/
          v13->number = item->number; /*0x58d72b*/
          BSStringT_Set(&v13->text, item->text.m_data, 0); /*0x58d738*/
          v30 = sub_5889B0(&v39->items.vtable); /*0x58d749*/
          if ( v30 ) /*0x58d74d*/
          {
            FormHeapFree(*(_DWORD *)(v30 + 8)); /*0x58d753*/
            *(_DWORD *)(v30 + 8) = 0; /*0x58d759*/
            *(_WORD *)(v30 + 0xE) = 0; /*0x58d75c*/
            *(_WORD *)(v30 + 0xC) = 0; /*0x58d760*/
            FormHeapFree(v30); /*0x58d764*/
          }
          goto LABEL_77; /*0x58d764*/
        }
        if ( item->command == 0xBBC /*0x58d7c9*/
          && v13
          && v13->command == 0xBBB
          && v14
          && v14->command == OblivionTemplate_BeginGroup
          && v14->number == v25 )
        {
          v31 = v14->number; /*0x58d7cf*/
          v14->command = OblivionTemplate_ReferenceAction; /*0x58d7d2*/
          v14->argument.trait = Double_To_SInt32(v31); /*0x58d7dd*/
          v14->number = item->number; /*0x58d7e6*/
          sub_4FB4C0(&v14->text, (const char **)&v13->text.m_data); /*0x58d7ed*/
          p_items = &v39->items; /*0x58d7f6*/
          v33 = sub_5889B0(&v39->items.vtable); /*0x58d7fb*/
          v34 = v33; /*0x58d800*/
          if ( v33 ) /*0x58d804*/
          {
            FormHeapFree(*(_DWORD *)(v33 + 8)); /*0x58d80a*/
            *(_DWORD *)(v34 + 8) = 0; /*0x58d812*/
            *(_WORD *)(v34 + 0xE) = 0; /*0x58d815*/
            *(_WORD *)(v34 + 0xC) = 0; /*0x58d819*/
            FormHeapFree(v34); /*0x58d81d*/
          }
          v35 = sub_5889B0(p_items); /*0x58d830*/
          if ( v35 ) /*0x58d834*/
          {
            FormHeapFree(*(_DWORD *)(v35 + 8)); /*0x58d83a*/
            *(_DWORD *)(v35 + 8) = 0; /*0x58d840*/
            *(_WORD *)(v35 + 0xE) = 0; /*0x58d843*/
            *(_WORD *)(v35 + 0xC) = 0; /*0x58d847*/
            FormHeapFree(v35); /*0x58d84b*/
          }
          if ( v7 ) /*0x58d855*/
            goto LABEL_77; /*0x58d855*/
          return; /*0x58d855*/
        }
      }
    }
    trait = v7->argument.trait; /*0x58d87f*/
    if ( (trait < 0xFA1 || trait > 0x1001) && trait < 0x2710 ) /*0x58d895*/
    {
      if ( trait < 0x7D1 || trait > 0x7EB ) /*0x58d8c2*/
      {
        if ( v7->command == 0xF && v7->number >= dbl_A6ACB8 && v7->number <= dbl_A6ACB0 ) /*0x58d907*/
          v7->command = OblivionTemplate_EndTile; /*0x58d909*/
      }
      else if ( v7->command == 0xA ) /*0x58d8ca*/
      {
        v7->command = OblivionTemplate_BeginGroup; /*0x58d8cc*/
      }
      else if ( v7->command == 0xF ) /*0x58d8d8*/
      {
        v7->command = OblivionTemplate_EndGroup; /*0x58d8da*/
      }
    }
    else if ( v7->command == 0xA ) /*0x58d89d*/
    {
      v7->command = OblivionTemplate_BeginTrait; /*0x58d89f*/
    }
    else if ( v7->command == 0xF ) /*0x58d8ab*/
    {
      v7->command = OblivionTemplate_EndTrait; /*0x58d8ad*/
    }
    v27 = &v10->items; /*0x58d918*/
    v28 = (OblivionTileTemplateItemNode *)(*((int (__thiscall **)(OblivionTileTemplateItemList *))v10->items.vtable + 1))(&v10->items); /*0x58d91d*/
    v28->item = v7; /*0x58d91f*/
    v28->next = 0; /*0x58d922*/
    v28->previous = v27->tail; /*0x58d92b*/
    v37 = v27->tail; /*0x58d92e*/
    if ( v37 ) /*0x58d933*/
    {
      v37->next = v28; /*0x58d935*/
      goto LABEL_98; /*0x58d937*/
    }
LABEL_97:
    v27->head = v28; /*0x58d939*/
    goto LABEL_98; /*0x58d939*/
  }
  if ( !item || item->command != 0xA ) /*0x58d4af*/
  {
LABEL_47:
    v27 = &v39->items; /*0x58d632*/
    v7->command = OblivionTemplate_SetTrait; /*0x58d637*/
    v7->argument.trait = 0xBBA; /*0x58d63e*/
    v28 = (OblivionTileTemplateItemNode *)(*((int (__thiscall **)(OblivionTileTemplateItemList *))v10->items.vtable + 1))(v27); /*0x58d64c*/
    v28->item = v7; /*0x58d64e*/
    v28->next = 0; /*0x58d651*/
    v28->previous = v27->tail; /*0x58d65a*/
    v29 = v27->tail; /*0x58d65d*/
    if ( v29 ) /*0x58d662*/
    {
      v29->next = v28; /*0x58d668*/
LABEL_98:
      ++v27->count; /*0x58d93c*/
      v27->tail = v28; /*0x58d940*/
      return; /*0x58d940*/
    }
    goto LABEL_97; /*0x58d662*/
  }
  if ( item->number != dbl_A6ACF8 ) /*0x58d4c3*/
  {
    if ( item->number >= dbl_A6ACB8 && item->number <= dbl_A6ACB0 ) /*0x58d5f0*/
    {
      item->command = OblivionTemplate_BeginTile; /*0x58d5fd*/
      BSStringT_Set(&item->text, text, 0); /*0x58d603*/
      if ( !v7 ) /*0x58d60a*/
        return; /*0x58d60a*/
      goto LABEL_77; /*0x58d60a*/
    }
    goto LABEL_47; /*0x58d5f0*/
  }
  v17 = v39->storage; /*0x58d4c9*/
  if ( v17->currentTemplate ) /*0x58d4cc*/
  {
    PrintError("Can't have nested template definitions in an XML file."); /*0x58d4d7*/
    v18 = v39; /*0x58d4dc*/
  }
  else
  {
    SubTemplateByName = Tile::BuildStorage::GetSubTemplateByName(v17, text); /*0x58d4ec*/
    v18 = v39; /*0x58d4f1*/
    v39->storage->currentTemplate = SubTemplateByName; /*0x58d4f8*/
    v20 = v18->storage; /*0x58d4fb*/
    if ( !v20->currentTemplate ) /*0x58d500*/
      v18->storage->currentTemplate = Tile::BuildStorage::NewSubTemplate(v20, text); /*0x58d510*/
  }
  v21 = v18->items.tail; /*0x58d513*/
  v22 = v21->previous; /*0x58d516*/
  v23 = &v18->items; /*0x58d519*/
  v23->tail = v22; /*0x58d51e*/
  if ( v22 ) /*0x58d521*/
    v22->next = 0; /*0x58d523*/
  else
    v23->head = 0; /*0x58d527*/
  v24 = (unsigned int)v21->item; /*0x58d52c*/
  (*((void (__thiscall **)(OblivionTileTemplateItemList *, OblivionTileTemplateItemNode *))v23->vtable + 2))(v23, v21); /*0x58d535*/
  --v23->count; /*0x58d537*/
  if ( v24 ) /*0x58d53d*/
  {
    FormHeapFree(*(_DWORD *)(v24 + 8)); /*0x58d543*/
    *(_DWORD *)(v24 + 8) = 0; /*0x58d549*/
    *(_WORD *)(v24 + 0xE) = 0; /*0x58d54c*/
    *(_WORD *)(v24 + 0xC) = 0; /*0x58d550*/
    FormHeapFree(v24); /*0x58d554*/
  }
  if ( v7 ) /*0x58d55e*/
  {
LABEL_77:
    FormHeapFree((unsigned int)v7->text.m_data); /*0x58d85b*/
    v7->text.m_data = 0; /*0x58d864*/
    v7->text.m_bufLen = 0; /*0x58d867*/
    v7->text.m_dataLen = 0; /*0x58d86c*/
    FormHeapFree((unsigned int)v7); /*0x58d870*/
  }
}
