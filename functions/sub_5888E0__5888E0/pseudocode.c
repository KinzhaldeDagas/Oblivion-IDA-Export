//
// Verified 2026-10-07: unlinks node from both doubly linked dimensions and zeros four links. Does not free node; callers including Value teardown free separately. No vtable in Oblivion action nodes.
void __thiscall Tile::ActionNode::Unlink(OblivionTileActionNode *this)
{
  OblivionTileActionNode *i; // eax
  OblivionTileActionNode *nextAction; // eax
  OblivionTileActionNode *previousReaction; // eax
  OblivionTileActionNode *nextReaction; // eax

  for ( i = this->previousAction; i; i = i->previousAction ) /*0x5888e0*/
    ; /*0x5888e8*/
  if ( this->previousAction ) /*0x5888ee*/
    this->previousAction->nextAction = this->nextAction; /*0x5888f8*/
  nextAction = this->nextAction; /*0x5888fb*/
  if ( nextAction ) /*0x588900*/
    nextAction->previousAction = this->previousAction; /*0x588904*/
  previousReaction = this->previousReaction; /*0x588906*/
  if ( previousReaction ) /*0x58890b*/
    previousReaction->nextReaction = this->nextReaction; /*0x588910*/
  nextReaction = this->nextReaction; /*0x588913*/
  if ( nextReaction ) /*0x588918*/
    nextReaction->previousReaction = this->previousReaction; /*0x58891d*/
  this->previousAction = 0; /*0x588920*/
  this->nextAction = 0; /*0x588922*/
  this->previousReaction = 0; /*0x588925*/
  this->nextReaction = 0; /*0x588928*/
}
