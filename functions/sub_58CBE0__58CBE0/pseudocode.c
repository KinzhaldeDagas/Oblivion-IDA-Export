//
// Verified 2026-10-07: literal action node layout from allocation/write sites: previousAction+0,nextAction+4,float operand+8,opcode+0xC,previousReaction+0x10,nextReaction+0x14. Appends to action chain and immediately calculates Value(false). Fallout AddAction(float)0x827DBBA8 instead uses 0x10-byte polymorphic FloatAction.
OblivionTileActionNode *__thiscall Tile::Value::AddFloatAction(
        OblivionTileValueView *this,
        float operand,
        unsigned int opcode)
{
  OblivionTileActionNode *i; // esi
  int v5; // eax
  OblivionTileActionNode *v6; // edi

  for ( i = this->actionHead; i->nextAction; i = i->nextAction ) /*0x58cbe7*/
    ; /*0x58cbf0*/
  v5 = FormHeapAlloc(0x18u); /*0x58cbfb*/
  if ( v5 ) /*0x58cc05*/
  {
    *(_DWORD *)(v5 + 0xC) = opcode; /*0x58cc0f*/
    *(float *)(v5 + 8) = operand; /*0x58cc12*/
    v6 = (OblivionTileActionNode *)v5; /*0x58cc15*/
    *(_DWORD *)v5 = i; /*0x58cc17*/
    *(_DWORD *)(v5 + 4) = 0; /*0x58cc19*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x58cc20*/
    *(_DWORD *)(v5 + 0x14) = 0; /*0x58cc27*/
    i->nextAction = (OblivionTileActionNode *)v5; /*0x58cc32*/
    Tile::Value::CalculateValue(this, 0); /*0x58cc35*/
    return v6; /*0x58cc3a*/
  }
  else
  {
    i->nextAction = 0; /*0x58cc47*/
    Tile::Value::CalculateValue(this, 0); /*0x58cc4a*/
    return 0; /*0x58cc4f*/
  }
}
