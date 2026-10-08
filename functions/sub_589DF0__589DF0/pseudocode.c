//
// Verified 2026-10-07: initializes 0x1C-byte Value; allocates two 0x18-byte sentinel nodes. Sentinel +8 stores owning Value*, opcode+0xC=101; pointers at+0/+4 and+0x10/+0x14 start NULL. Value +0x10/+0x14 point to action/reaction sentinels. These are not Fallout virtual Action objects.
OblivionTileValueView *__thiscall Tile::Value::Initialize(OblivionTileValueView *this, unsigned __int16 trait)
{
  OblivionTileActionNode *v3; // eax
  OblivionTileActionNode *v4; // eax

  this->text.m_data = 0; /*0x589e1b*/
  this->text.m_dataLen = 0; /*0x589e1e*/
  this->text.m_bufLen = 0; /*0x589e22*/
  this->number = 0.0; /*0x589e2d*/
  this->trait = trait; /*0x589e36*/
  this->owner = 0; /*0x589e3a*/
  v3 = (OblivionTileActionNode *)FormHeapAlloc(0x18u); /*0x589e3c*/
  if ( v3 ) /*0x589e46*/
  {
    v3->previousAction = 0; /*0x589e48*/
    v3->nextAction = 0; /*0x589e4a*/
    v3->operand.sentinelOwner = this; /*0x589e4d*/
    v3->opcode = 0x65; /*0x589e50*/
    v3->previousReaction = 0; /*0x589e57*/
    v3->nextReaction = 0; /*0x589e5a*/
  }
  else
  {
    v3 = 0; /*0x589e5f*/
  }
  this->actionHead = v3; /*0x589e63*/
  v4 = (OblivionTileActionNode *)FormHeapAlloc(0x18u); /*0x589e66*/
  if ( v4 ) /*0x589e70*/
  {
    v4->previousAction = 0; /*0x589e72*/
    v4->nextAction = 0; /*0x589e74*/
    v4->operand.sentinelOwner = this; /*0x589e77*/
    v4->opcode = 0x65; /*0x589e7a*/
    v4->previousReaction = 0; /*0x589e81*/
    v4->nextReaction = 0; /*0x589e84*/
  }
  else
  {
    v4 = 0; /*0x589e89*/
  }
  this->reactionHead = v4; /*0x589e8b*/
  this->isNumeric = 1; /*0x589e8e*/
  return this; /*0x589e94*/
}
