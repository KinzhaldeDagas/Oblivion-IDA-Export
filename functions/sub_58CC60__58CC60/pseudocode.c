// Verified: creates 0x18-byte action, seeds operand from source Tile trait, appends to destination action chain, links same action into source Value reaction chain, then CalculateValue(destination,false). Source selector is resolved before this call; dependency is not re-resolved by sibling/listindex on every evaluation. Fallout named AddAction overload at 0x827DF270.
OblivionTileActionNode *__thiscall Tile::Value::AddReferenceAction(
        OblivionTileValueView *this,
        Tile *source,
        unsigned int sourceTrait,
        unsigned int opcode)
{
  OblivionTileActionNode *actionHead; // edi
  OblivionTileActionNode *v6; // esi
  OblivionTileActionNode *i; // eax
  float trait; // [esp+10h] [ebp+8h]

  if ( (int)sourceTrait < 0xFA1 || (int)sourceTrait >= dword_B13BC0 && (int)sourceTrait < 0x2710 ) /*0x58cc84*/
    return 0; /*0x58cd24*/
  actionHead = this->actionHead; /*0x58cc8d*/
  for ( actionHead->opcode = 0x65; actionHead->nextAction; actionHead = actionHead->nextAction ) /*0x58cc97*/
    ; /*0x58cca0*/
  v6 = (OblivionTileActionNode *)FormHeapAlloc(0x18u); /*0x58ccb4*/
  if ( v6 ) /*0x58ccbb*/
  {
    trait = Tile_GetFloat(source, sourceTrait); /*0x58ccc5*/
    v6->operand.number = trait; /*0x58ccd3*/
    v6->previousAction = actionHead; /*0x58ccd6*/
    v6->nextAction = 0; /*0x58ccd8*/
    v6->opcode = opcode; /*0x58ccdb*/
    v6->previousReaction = 0; /*0x58ccde*/
    v6->nextReaction = 0; /*0x58cce1*/
  }
  else
  {
    v6 = 0; /*0x58cce6*/
  }
  actionHead->nextAction = v6; /*0x58cceb*/
  for ( i = Tile::GetOrCreateValue(source, sourceTrait)->reactionHead; i->nextReaction; i = i->nextReaction ) /*0x58ccf6*/
    ; /*0x58cd00*/
  i->nextReaction = v6; /*0x58cd0d*/
  v6->previousReaction = i; /*0x58cd12*/
  Tile::Value::CalculateValue(this, 0); /*0x58cd15*/
  return v6; /*0x58cd1f*/
}
