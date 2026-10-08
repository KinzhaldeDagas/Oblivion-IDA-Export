void __thiscall DialogMenu::AttachTileByID(OblivionDialogMenuTileBindingsView *this, unsigned int tileID, Tile *tile)
{
  switch ( tileID ) /*0x59d8f7*/
  {
    case 1u: /*0x59d8f7*/
      this->topicPane_id1 = tile; /*0x59d8fd*/
      break;
    case 2u: /*0x59d8f7*/
      this->responseText_id2 = tile; /*0x59d90c*/
      break;
    case 3u: /*0x59d8f7*/
      this->goodbye_id3 = tile; /*0x59d91b*/
      break;
    case 4u: /*0x59d8f7*/
      this->responseContinue_id4 = tile; /*0x59d92a*/
      break;
    case 5u: /*0x59d8f7*/
      this->tile_id5 = tile; /*0x59d939*/
      break;
    case 6u: /*0x59d8f7*/
      this->tile_id6 = tile; /*0x59d948*/
      break;
    case 7u: /*0x59d8f7*/
      this->persuade_id7 = tile; /*0x59d957*/
      break;
    case 0xEu: /*0x59d8f7*/
      this->tile_id14 = tile; /*0x59d966*/
      break;
    case 0xFu: /*0x59d8f7*/
      this->tile_id15 = tile; /*0x59d975*/
      break;
    case 8u: /*0x59d8f7*/
      this->barter_id8 = tile; /*0x59d984*/
      break;
    case 9u: /*0x59d8f7*/
      this->training_id9 = tile; /*0x59d993*/
      break;
    case 0xCu: /*0x59d8f7*/
      this->repair_id12 = tile; /*0x59d9a2*/
      break;
    case 0xDu: /*0x59d8f7*/
      this->recharge_id13 = tile; /*0x59d9b1*/
      break;
    case 0x10u: /*0x59d8f7*/
      this->spellBuy_id16 = tile; /*0x59d9c0*/
      break;
  }
}
