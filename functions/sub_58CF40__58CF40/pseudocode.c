// Verified: second pass over template tokens. On tile-close token 0x2D, traverses current Tile value list and calls Value::CalculateValue(value,true) for every trait except class 0xFA2, then ascends parent. ReadFile therefore initializes properties natively; never call CalculateValue with Tile*. Fallout analogue 0x827E0B28; Fallout adds a critical section and uses other token numbers.
void __thiscall Tile::ConnectTraitsToTree(Tile *this, OblivionTileTemplate *tileTemplate)
{
  OblivionTileTemplateItemNode *head; // ecx
  unsigned int trait; // ebp
  _DWORD *v4; // ebx
  OblivionTileTemplateItem *item; // esi
  OblivionTileTemplateCommand command; // eax
  _DWORD *v7; // esi
  OblivionTileValueView *v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // eax
  double number; // st7
  OblivionTileValueView *v12; // eax
  unsigned int v13; // eax
  char *m_data; // esi
  OblivionTileValueView *v15; // eax
  OblivionTileValueView *v16; // eax
  double v17; // st7
  OblivionTileValueView *v18; // eax
  Tile *TileByName; // edi
  double v20; // st7
  unsigned int v21; // eax
  int v22; // eax
  BSStringT operand; // [esp+0h] [ebp-20h] BYREF
  unsigned int v24; // [esp+18h] [ebp-8h]
  float value; // [esp+1Ch] [ebp-4h]
  OblivionTileTemplate *tileTemplatea; // [esp+24h] [ebp+4h]

  head = tileTemplate->items.head; /*0x58cf47*/
  trait = 0; /*0x58cf50*/
  v4 = 0; /*0x58cf52*/
  v24 = 0; /*0x58cf56*/
  if ( head )
  {
    while ( 1 )
    {
      item = head->item; /*0x58cf66*/
      command = item->command; /*0x58cf6c*/
      tileTemplatea = (OblivionTileTemplate *)head->next; /*0x58cf73*/
      if ( item->command == OblivionTemplate_BeginTile )
      {
        trait = item->argument.trait; /*0x58cf7d*/
        if ( !v24 ) /*0x58cf80*/
          v24 = item->argument.trait; /*0x58cf82*/
        unk_B3B0A1 = 1; /*0x58cf86*/
      }
      else
      {
        switch ( command )
        {
          case OblivionTemplate_EndTile:
            unk_B3B0A1 = 0; /*0x58cf97*/
            v7 = *(_DWORD **)(trait + 0x18); /*0x58cf9e*/
            while ( v7 ) /*0x58cfa3*/
            {
              v8 = (OblivionTileValueView *)v7[2]; /*0x58cfb0*/
              v7 = (_DWORD *)*v7; /*0x58cfbc*/
              if ( v8->trait != 0xFA2 ) /*0x58cfbe*/
                Tile::Value::CalculateValue(v8, 1); /*0x58cfc2*/
            }
            trait = *(_DWORD *)(trait + 0x10); /*0x58cfcb*/
            break;
          case OblivionTemplate_SetTrait:
            if ( trait )
            {
              if ( 0.0 == item->number
                && ((LOWORD(v9) = item->text.m_dataLen, (_WORD)v9 != 0xFFFF)
                  ? (v9 = (unsigned __int16)v9)
                  : (v9 = strlen(item->text.m_data)),
                    v9)
                || (v10 = item->argument.trait, v10 == 0xFDE)
                || v10 == 0xFE6 )
              {
                v13 = item->argument.trait; /*0x58d050*/
                if ( v13 == 0xBBA ) /*0x58d058*/
                {
                  value = COERCE_FLOAT(&operand); /*0x58d05f*/
                  operand.m_data = 0; /*0x58d063*/
                  *(_DWORD *)&operand.m_dataLen = 0; /*0x58d065*/
                  BSStringT_Set(&operand, item->text.m_data, 0); /*0x58d072*/
                  sub_58A020((BSStringT *)trait, operand.m_data, *(int *)&operand.m_dataLen); /*0x58d079*/
                }
                else
                {
                  m_data = item->text.m_data; /*0x58d088*/
                  if ( v13 == 0xFE6 ) /*0x58d08d*/
                  {
                    v15 = Tile::GetOrCreateValue((Tile *)trait, 0xFE6u); /*0x58d090*/
                    if ( v15 ) /*0x58d097*/
                      sub_58CA50(v15, m_data); /*0x58d09c*/
                    *(_DWORD *)(trait + 0x2C) |= 0x20u; /*0x58d0a1*/
                  }
                  else
                  {
                    v16 = Tile::GetOrCreateValue((Tile *)trait, v13); /*0x58d0ab*/
                    if ( v16 ) /*0x58d0b2*/
                      sub_58CA50(v16, m_data); /*0x58d0bb*/
                  }
                }
              }
              else
              {
                number = item->number; /*0x58d025*/
                *(_DWORD *)&operand.m_dataLen = item->argument.trait; /*0x58d028*/
                value = number; /*0x58d02b*/
                v12 = Tile::GetOrCreateValue((Tile *)trait, *(unsigned int *)&operand.m_dataLen); /*0x58d02f*/
                if ( v12 ) /*0x58d036*/
                  Tile::Value::SetFloat(v12, value); /*0x58d046*/
              }
            }
            else
            {
              PrintError("Trait defined outside of any tile."); /*0x58d0ca*/
            }
            break;
          case OblivionTemplate_BeginTrait:
            v4 = (_DWORD *)Double_To_SInt32(item->number); /*0x58d0dc*/
            break; /*0x58d0de*/
          case OblivionTemplate_EndTrait:
            v4 = 0; /*0x58d0e8*/
            break; /*0x58d0ea*/
          case OblivionTemplate_LiteralAction:
            if ( v4 ) /*0x58d0f6*/
            {
              v17 = item->number; /*0x58d0fb*/
              *(_DWORD *)&operand.m_dataLen = item->argument.trait; /*0x58d0fe*/
              value = v17; /*0x58d0ff*/
              *(float *)&operand.m_data = value; /*0x58d108*/
              v18 = Tile::GetOrCreateValue((Tile *)trait, (unsigned int)v4); /*0x58d10e*/
              Tile::Value::AddFloatAction(v18, *(float *)&operand.m_data, *(unsigned int *)&operand.m_dataLen); /*0x58d115*/
            }
            else
            {
              PrintError("Action defined outside of any trait."); /*0x58d124*/
            }
            break;
          case OblivionTemplate_ReferenceAction:
            if ( v4 ) /*0x58d12d*/
            {
              TileByName = Tile::GetTileByName((Tile *)trait, item->text.m_data); /*0x58d139*/
              if ( TileByName ) /*0x58d140*/
              {
                v20 = item->number; /*0x58d145*/
                *(_DWORD *)&operand.m_dataLen = item->argument.trait; /*0x58d148*/
                v21 = Double_To_SInt32(v20); /*0x58d149*/
                Tile::AddReferenceAction( /*0x58d153*/
                  (Tile *)trait,
                  (unsigned int)v4,
                  TileByName,
                  v21,
                  *(unsigned int *)&operand.m_dataLen);
              }
            }
            else
            {
              PrintError("Action link defined outside of any trait."); /*0x58d15f*/
            }
            break;
          case OblivionTemplate_BeginGroup:
            if ( !v4 ) /*0x58d168*/
            {
              PrintError("Action begun outside of any trait."); /*0x58d173*/
              break; /*0x58d173*/
            }
            *(_DWORD *)&operand.m_dataLen = 0xA; /*0x58d16a*/
            goto LABEL_54; /*0x58d16c*/
          case OblivionTemplate_EndGroup:
            if ( v4 ) /*0x58d17c*/
            {
              *(_DWORD *)&operand.m_dataLen = 0xF; /*0x58d17e*/
LABEL_54:
              v22 = Double_To_SInt32(item->number); /*0x58d180*/
              sub_58CEF0((Tile *)trait, v4, v22, *(int *)&operand.m_dataLen); /*0x58d18c*/
              break; /*0x58d191*/
            }
            PrintError("Action ended outside of any trait."); /*0x58d198*/
            break;
          default:
            break; /*0x58d178*/
        }
      }
      if ( !tileTemplatea ) /*0x58d1a6*/
        return; /*0x58d1a6*/
      head = (OblivionTileTemplateItemNode *)tileTemplatea; /*0x58cf62*/
    }
  }
}
