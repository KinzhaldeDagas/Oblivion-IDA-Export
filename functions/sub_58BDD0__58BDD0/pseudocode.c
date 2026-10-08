// Verified: traverses dependent action links via Value +0x14 sentinel, transfers source numeric/string values, and calls CalculateValue(dependentValue,false). Synchronous recursive property evaluation is established; this does not alone prove DialogMenu topic-build reentrancy.
void __thiscall Tile::Value::PropagateReactions(OblivionTileValueView *this)
{
  OblivionTileActionNode *i; // ebx
  OblivionTileActionNode *previousAction; // eax
  OblivionTileActionNode *j; // esi
  char *m_data; // ecx
  const char *v6; // eax
  int v7; // eax
  _WORD *sentinelOwner; // edx
  OblivionTileActionNode *nextReaction; // esi
  OblivionTileValueView *k; // edx
  OblivionTileValueView *v11; // edi
  OblivionTileActionNode *v12; // eax
  OblivionTileActionNode *m; // ecx

  if ( !*((_BYTE *)this->owner + 5) ) /*0x58bdd5*/
  {
    for ( i = this->reactionHead->nextReaction; i; i = i->nextReaction ) /*0x58bde9*/
    {
      if ( sub_589770((int)this) ) /*0x58bdf2*/
      {
        previousAction = i->previousAction; /*0x58bdff*/
        for ( j = i; previousAction; previousAction = previousAction->previousAction ) /*0x58bdff*/
          j = previousAction; /*0x58be07*/
        m_data = this->text.m_data; /*0x58be12*/
        if ( m_data && (v6 = j->operand.sentinelOwner->text.m_data) != 0 ) /*0x58be20*/
          v7 = CRT_StricmpLocaleDispatch(v6, this->text.m_data); /*0x58be24*/
        else
          v7 = 2 * (m_data == 0) - 1; /*0x58be35*/
        if ( v7 ) /*0x58be3b*/
        {
          BSStringT_Set(&j->operand.sentinelOwner->text, this->text.m_data, 0); /*0x58be49*/
          j->operand.sentinelOwner->number = 0.0; /*0x58be53*/
          if ( (*(int (__thiscall **)(Tile *))(*(_DWORD *)j->operand.sentinelOwner->owner + 0xC))(j->operand.sentinelOwner->owner) == 0x387 ) /*0x58be67*/
            *((_DWORD *)j->operand.sentinelOwner->owner + 0xB) |= 2u; /*0x58be6e*/
          sentinelOwner = j->operand.sentinelOwner; /*0x58be72*/
          if ( sentinelOwner[0xC] == 0xFE6 ) /*0x58be7b*/
            *(_DWORD *)(*(_DWORD *)sentinelOwner + 0x2C) |= 0x20u; /*0x58be81*/
        }
      }
      else
      {
        i->operand.number = this->number; /*0x58be8a*/
      }
    }
    nextReaction = this->reactionHead->nextReaction; /*0x58be9b*/
    for ( k = 0; nextReaction; k = v11 ) /*0x58bea2*/
    {
      v11 = 0; /*0x58bea4*/
      if ( nextReaction->opcode ) /*0x58bea6*/
      {
        v12 = nextReaction->previousAction; /*0x58beab*/
        for ( m = nextReaction; v12; v12 = v12->previousAction ) /*0x58beab*/
          m = v12; /*0x58beb3*/
        v11 = m->operand.sentinelOwner; /*0x58bebb*/
        if ( v11 ) /*0x58bec0*/
        {
          if ( v11 != k ) /*0x58bec4*/
            Tile::Value::CalculateValue(v11, 0); /*0x58beca*/
        }
      }
      nextReaction = nextReaction->nextReaction; /*0x58becf*/
    }
  }
}
