OblivionTileActionNode *__thiscall sub_58CB70(OblivionTileValueView *this, int a2, int a3)
{
  OblivionTileActionNode *i; // esi
  int v5; // eax
  OblivionTileActionNode *nextAction; // esi

  for ( i = this->actionHead; i->nextAction; i = i->nextAction ) /*0x58cb77*/
    ; /*0x58cb80*/
  v5 = FormHeapAlloc(0x18u); /*0x58cb8b*/
  if ( v5 ) /*0x58cb95*/
  {
    *(float *)(v5 + 8) = 0.0; /*0x58cb9d*/
    *(_DWORD *)v5 = i; /*0x58cba0*/
    *(_DWORD *)(v5 + 4) = 0; /*0x58cba2*/
    *(_DWORD *)(v5 + 0xC) = a3; /*0x58cba9*/
    *(_DWORD *)(v5 + 0x10) = 0; /*0x58cbac*/
    *(_DWORD *)(v5 + 0x14) = 0; /*0x58cbb3*/
  }
  else
  {
    v5 = 0; /*0x58cbbc*/
  }
  i->nextAction = (OblivionTileActionNode *)v5; /*0x58cbc2*/
  *(_DWORD *)(v5 + 8) = a2; /*0x58cbc5*/
  nextAction = i->nextAction; /*0x58cbc8*/
  Tile::Value::CalculateValue(this, 0); /*0x58cbcf*/
  return nextAction; /*0x58cbd6*/
}
