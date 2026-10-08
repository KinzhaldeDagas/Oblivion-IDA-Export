// Verified: unlinks/frees own action chain and incoming reaction actions, unlinking crosslinks from both chains; frees sentinels/string and clears owner. Source deletion removes references rather than re-resolving selector to replacement Tile. Fallout Value destructor 0x827DBC60 uses a reaction map and nulls reference operands instead.
void __thiscall Tile::Value::Destroy(OblivionTileValueView *this)
{
  OblivionTileActionNode *nextAction; // eax
  OblivionTileActionNode *i; // ecx
  OblivionTileActionNode *v4; // ecx
  OblivionTileActionNode *previousReaction; // ecx
  OblivionTileActionNode *nextReaction; // ecx
  OblivionTileActionNode *actionHead; // ecx
  unsigned int v8; // ecx
  OblivionTileActionNode *reactionHead; // ecx
  OblivionTileActionNode *v10; // eax
  OblivionTileActionNode *j; // ecx
  OblivionTileActionNode *v12; // ecx
  OblivionTileActionNode *v13; // ecx
  OblivionTileActionNode *v14; // ecx
  OblivionTileActionNode *v15; // ecx
  unsigned int v16; // ecx

  while ( this->actionHead->nextAction ) /*0x589bda*/
  {
    nextAction = this->actionHead->nextAction; /*0x589be3*/
    if ( nextAction ) /*0x589be8*/
    {
      for ( i = nextAction->previousAction; i; i = i->previousAction ) /*0x589bea*/
        ; /*0x589bf0*/
      if ( nextAction->previousAction ) /*0x589bf6*/
        nextAction->previousAction->nextAction = nextAction->nextAction; /*0x589bff*/
      v4 = nextAction->nextAction; /*0x589c02*/
      if ( v4 ) /*0x589c07*/
        v4->previousAction = nextAction->previousAction; /*0x589c0b*/
      previousReaction = nextAction->previousReaction; /*0x589c0d*/
      if ( previousReaction ) /*0x589c12*/
        previousReaction->nextReaction = nextAction->nextReaction; /*0x589c17*/
      nextReaction = nextAction->nextReaction; /*0x589c1a*/
      if ( nextReaction ) /*0x589c1f*/
        nextReaction->previousReaction = nextAction->previousReaction; /*0x589c24*/
      nextAction->previousAction = 0; /*0x589c28*/
      nextAction->nextAction = 0; /*0x589c2a*/
      nextAction->previousReaction = 0; /*0x589c2d*/
      nextAction->nextReaction = 0; /*0x589c30*/
      FormHeapFree((unsigned int)nextAction); /*0x589c33*/
    }
  }
  actionHead = this->actionHead; /*0x589c43*/
  if ( actionHead ) /*0x589c48*/
  {
    Tile::ActionNode::Unlink(actionHead); /*0x589c4a*/
    FormHeapFree(v8); /*0x589c50*/
  }
  reactionHead = this->reactionHead; /*0x589c58*/
  this->actionHead = 0; /*0x589c5b*/
  if ( reactionHead->nextReaction ) /*0x589c5e*/
  {
    do /*0x589cc1*/
    {
      v10 = this->reactionHead->nextReaction; /*0x589c66*/
      if ( v10 ) /*0x589c6b*/
      {
        for ( j = v10->previousAction; j; j = j->previousAction ) /*0x589c6d*/
          ; /*0x589c73*/
        if ( v10->previousAction ) /*0x589c79*/
          v10->previousAction->nextAction = v10->nextAction; /*0x589c82*/
        v12 = v10->nextAction; /*0x589c85*/
        if ( v12 ) /*0x589c8a*/
          v12->previousAction = v10->previousAction; /*0x589c8e*/
        v13 = v10->previousReaction; /*0x589c90*/
        if ( v13 ) /*0x589c95*/
          v13->nextReaction = v10->nextReaction; /*0x589c9a*/
        v14 = v10->nextReaction; /*0x589c9d*/
        if ( v14 ) /*0x589ca2*/
          v14->previousReaction = v10->previousReaction; /*0x589ca7*/
        v10->previousAction = 0; /*0x589cab*/
        v10->nextAction = 0; /*0x589cad*/
        v10->previousReaction = 0; /*0x589cb0*/
        v10->nextReaction = 0; /*0x589cb3*/
        FormHeapFree((unsigned int)v10); /*0x589cb6*/
      }
    }
    while ( this->reactionHead->nextReaction ); /*0x589cc1*/
  }
  v15 = this->reactionHead; /*0x589cc6*/
  if ( v15 ) /*0x589ccb*/
  {
    Tile::ActionNode::Unlink(v15); /*0x589ccd*/
    FormHeapFree(v16); /*0x589cd3*/
  }
  this->reactionHead = 0; /*0x589cdb*/
  FormHeapFree((unsigned int)this->text.m_data); /*0x589ce2*/
  this->text.m_data = 0; /*0x589ce9*/
  this->text.m_bufLen = 0; /*0x589cec*/
  this->text.m_dataLen = 0; /*0x589cf0*/
  this->number = 0.0; /*0x589cf4*/
  this->owner = 0; /*0x589cf7*/
  FormHeapFree((unsigned int)this->text.m_data); /*0x589cfd*/
  this->text.m_data = 0; /*0x589d05*/
  this->text.m_bufLen = 0; /*0x589d08*/
  this->text.m_dataLen = 0; /*0x589d0c*/
}
