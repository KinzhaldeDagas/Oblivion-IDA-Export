// Verified: unlinks and frees action nodes reachable through Value +0x10 sentinel; also removes crosslinks at action +0x10/+0x14. Called before CalculateValue by numeric setter.
void __thiscall Tile::Value::ClearActions(OblivionTileValueView *this)
{
  OblivionTileActionNode *actionHead; // edi
  OblivionTileActionNode *i; // eax
  OblivionTileActionNode *j; // ecx
  OblivionTileActionNode *nextAction; // ecx
  OblivionTileActionNode *previousReaction; // ecx
  OblivionTileActionNode *nextReaction; // ecx

  actionHead = this->actionHead; /*0x588935*/
  for ( i = actionHead->nextAction; i; i = actionHead->nextAction ) /*0x58893f*/
  {
    for ( j = i->previousAction; j; j = j->previousAction ) /*0x588941*/
      ; /*0x588947*/
    if ( i->previousAction ) /*0x58894d*/
      i->previousAction->nextAction = i->nextAction; /*0x588956*/
    nextAction = i->nextAction; /*0x588959*/
    if ( nextAction ) /*0x58895e*/
      nextAction->previousAction = i->previousAction; /*0x588962*/
    previousReaction = i->previousReaction; /*0x588964*/
    if ( previousReaction ) /*0x588969*/
      previousReaction->nextReaction = i->nextReaction; /*0x58896e*/
    nextReaction = i->nextReaction; /*0x588971*/
    if ( nextReaction ) /*0x588976*/
      nextReaction->previousReaction = i->previousReaction; /*0x58897b*/
    i->previousAction = 0; /*0x58897f*/
    i->nextAction = 0; /*0x588981*/
    i->previousReaction = 0; /*0x588984*/
    i->nextReaction = 0; /*0x588987*/
    FormHeapFree((unsigned int)i); /*0x58898a*/
  }
}
